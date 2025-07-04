#include "core/commands/Command.hpp"
#include "core/commands/Commands.hpp"
#include "game/gta/Stats.hpp"
#include "core/frontend/Notifications.hpp"
#include "game/backend/Self.hpp"
#include "game/pointers/Pointers.hpp"
#include "imgui.h"
#include "game/frontend/items/Items.hpp"
#include "core/backend/FiberPool.hpp"
#include "SetLevelCommandItem.hpp"

namespace YimMenu::Features
{
    // Глобальная переменная для хранения значения уровня
    int g_DesiredLevel = 120;

    class SetLevel : public Command
    {
        using Command::Command;

        // Calculate RP required for a given level
        int CalculateRequiredRP(int level)
        {
            if (level <= 0)
                return 0;
            
            if (level <= 99)
            {
                // Use the lookup table for levels 1-99
                static const std::pair<int, int> rpTable[] = {
                    {1, 0}, {2, 800}, {3, 2100}, {4, 3800}, {5, 6100}, {6, 9500}, {7, 12500}, {8, 16000}, {9, 19800}, {10, 24000},
                    {11, 28500}, {12, 33400}, {13, 38700}, {14, 44200}, {15, 50200}, {16, 56400}, {17, 63000}, {18, 69900}, {19, 77100},
                    {20, 84700}, {21, 92500}, {22, 100700}, {23, 109200}, {24, 118000}, {25, 127100}, {26, 136500}, {27, 146200},
                    {28, 156200}, {29, 166500}, {30, 177100}, {31, 188000}, {32, 199200}, {33, 210700}, {34, 222400}, {35, 234500},
                    {36, 246800}, {37, 259400}, {38, 272300}, {39, 285500}, {40, 299000}, {41, 312700}, {42, 326800}, {43, 341000},
                    {44, 355600}, {45, 370500}, {46, 385600}, {47, 401000}, {48, 416600}, {49, 432600}, {50, 448800}, {51, 465200},
                    {52, 482000}, {53, 499000}, {54, 516300}, {55, 533800}, {56, 551600}, {57, 569600}, {58, 588000}, {59, 606500},
                    {60, 625400}, {61, 644500}, {62, 663800}, {63, 683400}, {64, 703300}, {65, 723400}, {66, 743800}, {67, 764500},
                    {68, 785400}, {69, 806500}, {70, 827900}, {71, 849600}, {72, 871500}, {73, 893600}, {74, 916000}, {75, 938700},
                    {76, 961600}, {77, 984700}, {78, 1008100}, {79, 1031800}, {80, 1055700}, {81, 1079800}, {82, 1104200},
                    {83, 1128800}, {84, 1153700}, {85, 1178800}, {86, 1204200}, {87, 1229800}, {88, 1255600}, {89, 1281700},
                    {90, 1308100}, {91, 1334600}, {92, 1361400}, {93, 1388500}, {94, 1415800}, {95, 1443300}, {96, 1471100},
                    {97, 1499100}, {98, 1527300}, {99, 1555800}
                };

                for (const auto& entry : rpTable)
                {
                    if (entry.first == level)
                        return entry.second;
                }
                
                return 0; // Fallback
            }
            else
            {
                // Use the formula for levels 100+: RP = 25*Level^2 + 23575*Level - 1023150
                return 25 * level * level + 23575 * level - 1023150;
            }
        }

        virtual void OnCall() override
        {
            if (!*Pointers.IsSessionStarted)
            {
                Notifications::Show("Level Setter", "You must be in a session to set your level.", NotificationType::Error);
                return;
            }

            int level = g_DesiredLevel;
            int requiredRP = CalculateRequiredRP(level);
            
            if (requiredRP <= 0)
            {
                Notifications::Show("Level Setter", "Invalid level or calculation error.", NotificationType::Error);
                return;
            }

            // Устанавливаем RP для обоих персонажей
            Stats::SetInt("MP0_CHAR_SET_RP_GIFT_ADMIN", requiredRP);
            Stats::SetInt("MP1_CHAR_SET_RP_GIFT_ADMIN", requiredRP);
            
            Notifications::Show("Level Setter", 
                                std::string("Set RP to ").append(std::to_string(requiredRP))
                                .append(" for level ").append(std::to_string(level)), 
                                NotificationType::Success);
        }
    };

    static SetLevel _SetLevel{"setlevel", "Set Level", "Set your character's level by calculating and applying the required RP"};
} 