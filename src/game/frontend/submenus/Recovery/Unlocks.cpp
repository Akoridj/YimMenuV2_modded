#include "Unlocks.hpp"

namespace YimMenu::Submenus
{
	std::shared_ptr<Category> BuildUnlocksMenu()
	{
		auto unlocks = std::make_shared<Category>("Unlocks");

		// Добавляем главную кнопку "Unlock All"
		unlocks->AddItem(std::make_shared<CommandItem>("unlockall"_J));

		// Создаем вкладки для разных категорий разблокировок
		auto buildingsTab = std::make_shared<CollapsingHeaderItem>("Buildings");
		auto heistsTab = std::make_shared<CollapsingHeaderItem>("Heists");
		auto specialEventsTab = std::make_shared<CollapsingHeaderItem>("Special Events");
		auto vehiclesTab = std::make_shared<CollapsingHeaderItem>("Vehicles");
		auto clothingTab = std::make_shared<CollapsingHeaderItem>("Clothing");
		auto achievementsTab = std::make_shared<CollapsingHeaderItem>("Achievements");

		// Добавляем команды в Buildings
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlocknightclubsetups"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlockacidlabequipment"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlocknightclubawards"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlockarcadeawards"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlockarenaawards"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlockautoshopproperties"_J));
		buildingsTab->AddItem(std::make_shared<CommandItem>("unlockbunkerresearch"_J));

		// Добавляем команды в Heists
		heistsTab->AddItem(std::make_shared<CommandItem>("unlockcayopericoheist"_J));
		heistsTab->AddItem(std::make_shared<CommandItem>("unlockdiamondcasinoheist"_J));
		heistsTab->AddItem(std::make_shared<CommandItem>("unlockdoomsdayheist"_J));
		heistsTab->AddItem(std::make_shared<CommandItem>("unlockclassicheists"_J));
		heistsTab->AddItem(std::make_shared<CommandItem>("unlocktuners"_J));
		heistsTab->AddItem(std::make_shared<CommandItem>("unlockulpcontract"_J));

		// Добавляем команды в Special Events
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockchristmasclothing"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockchristmasliveries"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockchristmascontent"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockindependenceday"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockvalentinecontent"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockweaponunlocks"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockvanillaunicornaward"_J));
		specialEventsTab->AddItem(std::make_shared<CommandItem>("unlockreturningplayerbonus"_J));

		// Добавляем команды в Vehicles
		vehiclesTab->AddItem(std::make_shared<CommandItem>("unlockvehiclemods"_J));
		vehiclesTab->AddItem(std::make_shared<CommandItem>("unlocktaxilivery"_J));
		vehiclesTab->AddItem(std::make_shared<CommandItem>("unlockshotaro"_J));
		vehiclesTab->AddItem(std::make_shared<CommandItem>("unlockscarmeetreputation"_J));

		// Добавляем команды в Clothing
		clothingTab->AddItem(std::make_shared<CommandItem>("unlockallclothing"_J));
		clothingTab->AddItem(std::make_shared<CommandItem>("unlocktattoos"_J));
		clothingTab->AddItem(std::make_shared<CommandItem>("unlockhaircuts"_J));

		// Добавляем команды в Achievements
		achievementsTab->AddItem(std::make_shared<CommandItem>("unlockachievements"_J));
		achievementsTab->AddItem(std::make_shared<CommandItem>("unlockawards"_J));

		// Добавляем все вкладки в главное меню
		unlocks->AddItem(std::move(buildingsTab));
		unlocks->AddItem(std::move(heistsTab));
		unlocks->AddItem(std::move(specialEventsTab));
		unlocks->AddItem(std::move(vehiclesTab));
		unlocks->AddItem(std::move(clothingTab));
		unlocks->AddItem(std::move(achievementsTab));

		return unlocks;
	}
} 