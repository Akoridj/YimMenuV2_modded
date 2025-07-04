#pragma once

#include "core/commands/Commands.hpp"
#include "core/commands/Command.hpp"
#include "core/frontend/manager/UIItem.hpp"
#include "core/backend/FiberPool.hpp"
#include "imgui.h"

namespace YimMenu::Features
{
    extern int g_DesiredLevel; // Объявление глобальной переменной

    // Специальный класс для отображения кнопки SetLevel с полем ввода
    class SetLevelCommandItem : public UIItem
    {
    private:
        Command* m_Command;
        std::optional<std::string> m_LabelOverride;

    public:
        explicit SetLevelCommandItem(joaat_t id, std::optional<std::string> label_override = std::nullopt) :
            m_Command(Commands::GetCommand<Command>(id)),
            m_LabelOverride(label_override)
        {
        }

        void Draw() override
        {
            if (!m_Command)
            {
                ImGui::Text("Unknown!");
                return;
            }

            // Добавляем заголовок "Set Level"
            ImGui::Text("Set Level");
            ImGui::Separator();
            
            // Отображаем поле ввода для уровня с увеличенной шириной
            ImGui::SetNextItemWidth(125.f); // Увеличиваем ширину поля ввода
            if (ImGui::InputInt("##LevelInput", &g_DesiredLevel, 1, 10))
            {
                if (g_DesiredLevel < 1)
                    g_DesiredLevel = 1;
                else if (g_DesiredLevel > 8000)
                    g_DesiredLevel = 8000;
            }
            
            ImGui::SameLine();
            
            // Отображаем кнопку Apply
            if (ImGui::Button("Apply"))
            {
                FiberPool::Push([this] {
                    m_Command->Call();
                });
            }

            // Отображаем подсказку при наведении
            if (ImGui::IsItemHovered())
            {
                ImGui::SetTooltip("%s", m_Command->GetDescription().data());
            }
        }
    };
} 