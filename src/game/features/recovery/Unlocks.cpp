#include "Unlocks.hpp"
#include "core/commands/Command.hpp"
#include "core/frontend/Notifications.hpp"
#include "game/gta/Stats.hpp"

namespace YimMenu::Features
{
    // Buildings unlocks
    class UnlockNightclubSetups : public Command
    {
    public:
        UnlockNightclubSetups(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_CLUB_POPULARITY", 1000);
            Stats::SetInt("MPX_CLUB_PAY_TIME_LEFT", -1);
            Stats::SetInt("MPX_CLUB_POPULARITY_WEEK", 1000);
            Notifications::Show("Unlocks", "Nightclub setups skipped");
        }
    };

    class UnlockAcidLabEquipment : public Command
    {
    public:
        UnlockAcidLabEquipment(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_ACID_LAB", 1);
            Stats::SetInt("MPX_AWD_ACID_TRUCK", 1);
            Notifications::Show("Unlocks", "Acid Lab equipment upgraded");
        }
    };

    class UnlockNightclubAwards : public Command
    {
    public:
        UnlockNightclubAwards(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_CLUB_DRUNK", 200);
            Stats::SetInt("MPX_NIGHTCLUB_VIP", 2000);
            Stats::SetInt("MPX_NIGHTCLUB_HOTSPOT", 60);
            Stats::SetInt("MPX_NIGHTCLUB_CLUBBER", 200);
            Stats::SetInt("MPX_NIGHTCLUB_DANCER", 200);
            Notifications::Show("Unlocks", "Nightclub awards unlocked");
        }
    };

    class UnlockArcadeAwards : public Command
    {
    public:
        UnlockArcadeAwards(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_PREPARATION", 40);
            Stats::SetInt("MPX_AWD_ASLEEPONJOB", 20);
            Stats::SetInt("MPX_AWD_DAICASHCRAB", 100000);
            Stats::SetInt("MPX_AWD_BIGBRO", 40);
            Stats::SetInt("MPX_AWD_SHARPSHOOTER", 40);
            Stats::SetInt("MPX_AWD_RACECHAMP", 40);
            Stats::SetInt("MPX_AWD_BATSWORD", 1000000);
            Stats::SetInt("MPX_AWD_COINPURSE", 950000);
            Stats::SetInt("MPX_AWD_ASTROCHIMP", 3000000);
            Stats::SetInt("MPX_AWD_MASTERFUL", 40000);
            Stats::SetBool("MPX_AWD_PREPARATION_BOOL", true);
            Stats::SetBool("MPX_AWD_ASLEEPONJOB_BOOL", true);
            Stats::SetBool("MPX_AWD_DAICASHCRAB_BOOL", true);
            Stats::SetBool("MPX_AWD_BIGBRO_BOOL", true);
            Stats::SetBool("MPX_AWD_SHARPSHOOTER_BOOL", true);
            Stats::SetBool("MPX_AWD_RACECHAMP_BOOL", true);
            Stats::SetBool("MPX_AWD_BATSWORD_BOOL", true);
            Stats::SetBool("MPX_AWD_COINPURSE_BOOL", true);
            Stats::SetBool("MPX_AWD_ASTROCHIMP_BOOL", true);
            Stats::SetBool("MPX_AWD_MASTERFUL_BOOL", true);
            Notifications::Show("Unlocks", "Arcade awards unlocked");
        }
    };
    
    class UnlockArenaAwards : public Command
    {
    public:
        UnlockArenaAwards(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_ARN_SPECTATOR_KILLS", 50);
            Stats::SetInt("MPX_ARN_LIFETIME_KILLS", 500);
            Stats::SetInt("MPX_ARN_LIFETIME_DEATHS", 100);
            Stats::SetInt("MPX_ARENAWARS_AP_TIER", 1000);
            Stats::SetInt("MPX_ARENAWARS_AP", 0);
            Stats::SetInt("MPX_ARENAWARS_SKILL_LEVEL", 20);
            Stats::SetInt("MPX_ARENAWARS_SP", 0);
            Stats::SetInt("MPX_ARENAWARS_AP_EARNINGS", 50000);
            Stats::SetInt("MPX_ARENAWARS_TIER_POINTS", 1000);
            Notifications::Show("Unlocks", "Arena awards unlocked");
        }
    };

    class UnlockAutoShopProperties : public Command
    {
    public:
        UnlockAutoShopProperties(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_CONTACT_MISSION", 10);
            Stats::SetInt("MPX_AWD_ROBBERY_CONTRACT", 10);
            Stats::SetInt("MPX_AWD_MEMBER_BOSS", 10);
            Stats::SetInt("MPX_AWD_RELAX_RACE", 10);
            Stats::SetInt("MPX_AWD_CAR_EXPORT", 10);
            Stats::SetInt("MPX_AWD_AUTO_SHOP", 10);
            Stats::SetInt("MPX_AWD_CAR_CLUB_MEM", 100);
            Stats::SetInt("MPX_AWD_TEST_CAR", 20);
            Stats::SetInt("MPX_AWD_GROUNDWORK", 10);
            Stats::SetBool("MPX_AWD_CONTACT_MISSION_BOOL", true);
            Stats::SetBool("MPX_AWD_ROBBERY_CONTRACT_BOOL", true);
            Stats::SetBool("MPX_AWD_MEMBER_BOSS_BOOL", true);
            Stats::SetBool("MPX_AWD_RELAX_RACE_BOOL", true);
            Stats::SetBool("MPX_AWD_CAR_EXPORT_BOOL", true);
            Stats::SetBool("MPX_AWD_AUTO_SHOP_BOOL", true);
            Stats::SetBool("MPX_AWD_CAR_CLUB_MEM_BOOL", true);
            Stats::SetBool("MPX_AWD_TEST_CAR_BOOL", true);
            Stats::SetBool("MPX_AWD_GROUNDWORK_BOOL", true);
            Notifications::Show("Unlocks", "Auto Shop properties unlocked");
        }
    };

    class UnlockBunkerResearch : public Command
    {
    public:
        UnlockBunkerResearch(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            // Стандартные исследования (0-63)
            for (int i = 0; i <= 63; i++)
            {
                Stats::SetBool("MPX_UNLOCK_WEAPONS_RESEARCH_" + std::to_string(i), true);
            }
            
            // Дополнительные исследования по индексам
            Stats::SetPackedBool(15381, true); // APC SAM Battery
            Stats::SetPackedBool(15382, true); // Ballistic Equipment
            Stats::SetPackedBool(15428, true); // Half-track 20mm Quad Autocannon
            Stats::SetPackedBool(15429, true); // Weaponized Tampa Dual Remote Minigun
            Stats::SetPackedBool(15430, true); // Weaponized Tampa Rear-Firing Mortar
            Stats::SetPackedBool(15431, true); // Weaponized Tampa Front Missile Launchers
            Stats::SetPackedBool(15432, true); // Dune FAV 40mm Grenade Launcher
            Stats::SetPackedBool(15433, true); // Dune FAV 7.62mm Minigun
            Stats::SetPackedBool(15434, true); // Insurgent Pick-Up Custom .50 Cal Minigun
            Stats::SetPackedBool(15435, true); // Insurgent Pick-Up Custom Heavy Armor Plating
            Stats::SetPackedBool(15436, true); // Technical Custom 7.62mm Minigun
            Stats::SetPackedBool(15437, true); // Technical Custom Ram-bar
            Stats::SetPackedBool(15438, true); // Technical Custom Brute-bar
            Stats::SetPackedBool(15439, true); // Technical Custom Heavy Chassis Armor
            Stats::SetPackedBool(15447, true); // Oppressor Missiles
            Stats::SetPackedBool(15448, true); // Fractal Livery Set
            Stats::SetPackedBool(15449, true); // Digital Livery Set
            Stats::SetPackedBool(15450, true); // Geometric Livery Set
            Stats::SetPackedBool(15451, true); // Nature Reserve Livery
            Stats::SetPackedBool(15452, true); // Naval Battle Livery
            Stats::SetPackedBool(15453, true); // Anti-Aircraft Trailer Dual 20mm Flak
            Stats::SetPackedBool(15454, true); // Anti-Aircraft Trailer Homing Missile Battery
            Stats::SetPackedBool(15455, true); // Mobile Operations Center Rear Turrets
            Stats::SetPackedBool(15456, true); // Incendiary Rounds
            Stats::SetPackedBool(15457, true); // Hollow Point Rounds
            Stats::SetPackedBool(15458, true); // Armor Piercing Rounds
            Stats::SetPackedBool(15459, true); // Full Metal Jacket Rounds
            Stats::SetPackedBool(15460, true); // Explosive Rounds
            Stats::SetPackedBool(15461, true); // Pistol Mk II Mounted Scope
            Stats::SetPackedBool(15462, true); // Pistol Mk II Compensator
            Stats::SetPackedBool(15463, true); // SMG Mk II Holographic Sight
            Stats::SetPackedBool(15464, true); // SMG Mk II Heavy Barrel
            Stats::SetPackedBool(15465, true); // Heavy Sniper Mk II Night Vision Scope
            Stats::SetPackedBool(15466, true); // Heavy Sniper Mk II Thermal Scope
            Stats::SetPackedBool(15467, true); // Heavy Sniper Mk II Heavy Barrel
            Stats::SetPackedBool(15468, true); // Combat MG Mk II Holographic Sight
            Stats::SetPackedBool(15469, true); // Combat MG Mk II Heavy Barrel
            Stats::SetPackedBool(15470, true); // Assault Rifle Mk II Holographic Sight
            Stats::SetPackedBool(15471, true); // Assault Rifle Mk II Heavy Barrel
            Stats::SetPackedBool(15472, true); // Carbine Rifle Mk II Holographic Sight
            Stats::SetPackedBool(15473, true); // Carbine Rifle Mk II Heavy Barrel
            Stats::SetPackedBool(15474, true); // Proximity Mines
            Stats::SetPackedBool(15491, true); // Weaponized Tampa Heavy Chassis Armor
            Stats::SetPackedBool(15492, true); // Brushstroke Camo Mk II Weapon Livery
            Stats::SetPackedBool(15493, true); // Skull Mk II Weapon Livery
            Stats::SetPackedBool(15494, true); // Sessanta Nove Mk II Weapon Livery
            Stats::SetPackedBool(15495, true); // Perseus Mk II Weapon Livery
            Stats::SetPackedBool(15496, true); // Leopard Mk II Weapon Livery
            Stats::SetPackedBool(15497, true); // Zebra Mk II Weapon Livery
            Stats::SetPackedBool(15498, true); // Geometric Mk II Weapon Livery
            Stats::SetPackedBool(15499, true); // Boom! Mk II Weapon Livery
            
            Notifications::Show("Unlocks", "Bunker research unlocked");
        }
    };
    
    // Heists unlocks
    class UnlockCayoPericoHeist : public Command
    {
    public:
        UnlockCayoPericoHeist(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_H4CNF_BS_GEN", 262143);
            Stats::SetInt("MPX_H4CNF_BS_ENTR", 63);
            Stats::SetInt("MPX_H4CNF_BS_ABIL", 63);
            Stats::SetInt("MPX_H4CNF_APPROACH", -1);
            Stats::SetInt("MPX_H4_PROGRESS", 131055);
            Stats::SetInt("MPX_H4CNF_TARGET", 5);
            Stats::SetInt("MPX_H4_MISSIONS", -1);
            Stats::SetInt("MPX_H4_PLAYTHROUGH_STATUS", 100);
            Notifications::Show("Unlocks", "Cayo Perico Heist unlocked");
        }
    };

    class UnlockDiamondCasinoHeist : public Command
    {
    public:
        UnlockDiamondCasinoHeist(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_CAS_HEIST_FLOW", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE0", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE1", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE2", -1);
            Stats::SetInt("MPX_H3_HARD_APPROACH", -1);
            Stats::SetInt("MPX_H3OPT_APPROACH", 1);
            Stats::SetInt("MPX_H3OPT_TARGET", 3);
            Stats::SetInt("MPX_H3OPT_POI", 1023);
            Stats::SetInt("MPX_H3OPT_ACCESSPOINTS", 2047);
            Stats::SetInt("MPX_H3OPT_CREWWEAP", 4);
            Stats::SetInt("MPX_H3OPT_CREWDRIVER", 3);
            Stats::SetInt("MPX_H3OPT_CREWHACKER", 4);
            Stats::SetInt("MPX_H3OPT_DISRUPTSHIP", 3);
            Stats::SetInt("MPX_H3OPT_BODYARMORLVL", 3);
            Stats::SetInt("MPX_H3OPT_KEYLEVELS", 2);
            Stats::SetInt("MPX_H3OPT_MASKS", 12);
            Stats::SetInt("MPX_H3OPT_WEAPS", 1);
            Notifications::Show("Unlocks", "Diamond Casino Heist unlocked");
        }
    };

    class UnlockDoomsdayHeist : public Command
    {
    public:
        UnlockDoomsdayHeist(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_GANGOPS_FLOW", -1);
            Stats::SetInt("MPX_GANGOPS_HEIST_STATUS", -229384);
            Stats::SetInt("MPX_GANGOPS_FLOW_MISSION_PROG", 503);
            Stats::SetInt("MPX_GANGOPS_ALLINORDER", 100);
            Stats::SetInt("MPX_GANGOPS_LOYALTY", 100);
            Stats::SetInt("MPX_GANGOPS_CRIMMASMD", 100);
            Stats::SetInt("MPX_GANGOPS_LOYALTY2", 100);
            Stats::SetInt("MPX_GANGOPS_LOYALTY3", 100);
            Stats::SetInt("MPX_GANGOPS_CRIMMASMD2", 100);
            Stats::SetInt("MPX_GANGOPS_CRIMMASMD3", 100);
            Stats::SetInt("MPX_GANGOPS_SUPPORT", 100);
            Notifications::Show("Unlocks", "Doomsday Heist unlocked");
        }
    };

    class UnlockClassicHeists : public Command
    {
    public:
        UnlockClassicHeists(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 0; i <= 29; i++)
            {
                Stats::SetInt("MPX_HEIST_SAVED_STRAND_" + std::to_string(i), 10);
            }
            Notifications::Show("Unlocks", "Classic Heists unlocked");
        }
    };

    class UnlockLSTuners : public Command
    {
    public:
        UnlockLSTuners(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_CAR_CLUB_MEM", 100);
            Stats::SetInt("MPX_AWD_ROBBERY_CONTRACT", 10);
            Stats::SetInt("MPX_AWD_ROBBERY_FINALE", 10);
            Stats::SetBool("MPX_AWD_CAR_CLUB_MEM_BOOL", true);
            Stats::SetBool("MPX_AWD_ROBBERY_CONTRACT_BOOL", true);
            Stats::SetBool("MPX_AWD_ROBBERY_FINALE_BOOL", true);
            Notifications::Show("Unlocks", "LS Tuners Contracts unlocked");
        }
    };

    class UnlockULPContract : public Command
    {
    public:
        UnlockULPContract(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_ULP_MISSION_PROGRESS", 127);
            Stats::SetInt("MPX_ULP_MISSION_CURRENT", 0);
            Notifications::Show("Unlocks", "ULP Contracts unlocked");
        }
    };
    
    // Special Anniversaries unlocks
    class UnlockChristmasClothing : public Command
    {
    public:
        UnlockChristmasClothing(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetBool("MPPLY_XMASLIVERIES", true);
            Stats::SetBool("MPPLY_HOLIDAY_UNLOCKS", true);
            Notifications::Show("Unlocks", "Christmas clothing unlocked");
        }
    };

    class UnlockChristmasLiveries : public Command
    {
    public:
        UnlockChristmasLiveries(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 0; i <= 20; i++)
            {
                Stats::SetBool("MPPLY_XMASLIVERIES" + std::to_string(i), true);
            }
            Notifications::Show("Unlocks", "Christmas liveries unlocked");
        }
    };

    class UnlockChristmasContent : public Command
    {
    public:
        UnlockChristmasContent(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetBool("MPPLY_XMAS_NORM_CLOTHES", true);
            Stats::SetBool("MPPLY_XMAS_SPECIAL", true);
            for (int i = 0; i <= 30; i++)
            {
                Stats::SetBool("MPPLY_XMAS_PJ_DAY_" + std::to_string(i), true);
            }
            Notifications::Show("Unlocks", "Christmas content unlocked");
        }
    };

    class UnlockIndependenceDay : public Command
    {
    public:
        UnlockIndependenceDay(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetBool("MPPLY_INDEPENDENCE_DAY_SPEC", true);
            Stats::SetBool("MPPLY_INDEPENDENCE_DAY", true);
            Notifications::Show("Unlocks", "Independence Day content unlocked");
        }
    };

    class UnlockValentineContent : public Command
    {
    public:
        UnlockValentineContent(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetBool("MPPLY_VALENTINES_SPECIAL", true);
            Stats::SetBool("MPPLY_VALENTINES", true);
            Notifications::Show("Unlocks", "Valentine content unlocked");
        }
    };

    class UnlockWeaponUnlocks : public Command
    {
    public:
        UnlockWeaponUnlocks(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_GANGOPS_FLOW_BITSET_MISS0", -1);
            
            // Service Carbine
            Stats::SetInt("MPX_GANGOPSPSTAT_INT102", 3);
            Stats::SetBool("MPPLY_HEADSHOTCHLENGECOMPLETED", true);

            // Double Action Revolver
            Stats::SetInt("MPX_GANGOPSPSTAT_INT102", 3);
            Stats::SetBool("MPPLY_HEADSHOTCHLENGECOMPLETED", true);

            // Navy Revolver
            Stats::SetBool("MPPLY_NAVYREVOLVERCOMPLETED", true);

            // Ceramic Pistol
            Stats::SetInt("MPX_CAS_HEIST_FLOW", 4096);  

            // Up-N-Atomizer
            Stats::SetInt("MPX_GANGOPS_FLOW_BITSET_MISS0", 90);

            Notifications::Show("Unlocks", "Weapon unlocks unlocked");
        }
    };

    class UnlockVanillaUnicornAward : public Command
    {
    public:
        UnlockVanillaUnicornAward(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 0; i <= 25; i += 5)
            {
                Stats::SetInt("MPX_LAP_DANCED_BOUGHT", i);
            }
            Stats::SetInt("MPX_PROSTITUTES_FREQUENTED", 1000);
            Notifications::Show("Unlocks", "Vanilla Unicorn Award unlocked");
        }
    };

    class UnlockReturningPlayerBonus : public Command
    {
    public:
        UnlockReturningPlayerBonus(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_PROSTITUTES_FREQUENTED", 1000);
            Stats::SetInt("MPX_PROSTITUTES_FREQUENTED", 2);
            Notifications::Show("Unlocks", "Returning Player Bonus unlocked");
        }
    };
    
    // Vehicles unlocks
    class UnlockVehicleMods : public Command
    {
    public:
        UnlockVehicleMods(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_GANGOPS_FLOW_BITSET_MISS0", -1);
            Stats::SetInt("MPX_LFETIME_HANGAR_BUY_UNDETAK", 42);
            Stats::SetInt("MPX_LFETIME_HANGAR_BUY_COMPLET", 42);
            Stats::SetInt("MPX_AT_FLOW_IMPEXP_NUM", 32);
            Stats::SetInt("MPX_AT_FLOW_VEHICLE_BS", -1);
            Stats::SetInt("MPX_WVM_FLOW_VEHICLE_BS", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE0", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE1", -1);
            Stats::SetInt("MPX_H3_BOARD_DIALOGUE2", -1);
            Stats::SetInt("MPX_H3_VEHICLESUSED", -1);
            Stats::SetInt("MPX_WAM_FLOW_VEHICLE_BS", -1);

            // Helpers for wholesale prices
            Stats::SetBool("HELP_VETO", true);
            Stats::SetBool("HELP_VETO2", true);
            Stats::SetBool("HELP_ITALIRSX", true);
            Stats::SetBool("HELP_BRIOSO2", true);
            Stats::SetBool("HELP_MANCHEZ2", true);
            Stats::SetBool("HELP_SLAMTRUCK", true);
            Stats::SetBool("HELP_VETIR", true);
            Stats::SetBool("HELP_SQUADDIE", true);
            Stats::SetBool("HELP_DINGY5", true);
            Stats::SetBool("HELP_VERUS", true);
            Stats::SetBool("HELP_WEEVIL", true);
            Stats::SetBool("HELP_VEHUNTUNER", true);
            Stats::SetBool("FIXER_VEH_HELP", true);
            Stats::SetBool("HELP_DOMINATOR7", true);
            Stats::SetBool("HELP_JESTER4", true);
            Stats::SetBool("HELP_FUTO2", true);
            Stats::SetBool("HELP_DOMINATOR8", true);
            Stats::SetBool("HELP_PREVION", true);
            Stats::SetBool("HELP_GROWLER", true);
            Stats::SetBool("HELP_COMET6", true);
            Stats::SetBool("HELP_VECTRE", true);
            Stats::SetBool("HELP_SULTAN3", true);
            Stats::SetBool("HELP_CYPHER", true);
            Notifications::Show("Unlocks", "Vehicle mods unlocked");
        }
    };

    class UnlockTaxiLivery : public Command
    {
    public:
        UnlockTaxiLivery(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_TAXIDRIVER", 100);
            Notifications::Show("Unlocks", "Taxi livery unlocked");
        }
    };

    class UnlockShotaro : public Command
    {
    public:
        UnlockShotaro(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_CRDEADLINE", -1);
            Notifications::Show("Unlocks", "The Shotaro unlocked");
        }
    };

    class UnlockLSCarMeetReputation : public Command
    {
    public:
        UnlockLSCarMeetReputation(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_CAR_CLUB_REP", 1000);
            Notifications::Show("Unlocks", "LS Car Meet reputation unlocked");
        }
    };

    // Clothing unlocks
    class UnlockAllClothing : public Command
    {
    public:
        UnlockAllClothing(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetBool("MPPLY_CLOTHES_PURCHASE", true);
            Stats::SetBool("MPPLY_CHAR_CLOTHES_AVAILABLE", true);
            Stats::SetBool("MPPLY_CREW_OUTFITS_UNLOCKED", true);
            Stats::SetBool("MPPLY_UNLOCKED_PARACHUTE", true);
            Stats::SetBool("MPPLY_UNLOCKED_FLIGHT_SUIT", true);
            Stats::SetBool("MPPLY_UNLOCKED_PRISON_OUTFIT", true);
            Stats::SetBool("MPPLY_UNLOCKED_WASTELAND_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_BIKER_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_XMAS_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_HEIST_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_IMPORT_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_GUNRUNNING_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_SMUGGLER_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_DOOMSDAY_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_NIGHTCLUB_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_ARENA_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_CASINO_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_TUNER_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_FIXERVEH_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_FIXERASSET_OUTFITS", true);
            Stats::SetBool("MPPLY_UNLOCKED_DRUGWAR_OUTFITS", true);
            
            Notifications::Show("Unlocks", "All clothing unlocked");
        }
    };

    class UnlockTattoos : public Command
    {
    public:
        UnlockTattoos(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 0; i <= 100; i++)
            {
                Stats::SetBool("MPX_TATTOO_FM_UNLOCKED_" + std::to_string(i), true);
            }
            
            Notifications::Show("Unlocks", "All tattoos unlocked");
        }
    };

    class UnlockHaircuts : public Command
    {
    public:
        UnlockHaircuts(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 1; i <= 10; i++)
            {
                Stats::SetInt("MPX_CHAR_HAIR_UNLCK" + std::to_string(i), -1);
            }
            
            Notifications::Show("Unlocks", "All haircuts unlocked");
        }
    };

    // Achievements unlocks
    class UnlockAchievements : public Command
    {
    public:
        UnlockAchievements(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            for (int i = 1; i <= 13; i++)
            {
                Stats::SetInt("MPX_ADMIN_CLOTHES_GV_BS_" + std::to_string(i), -1);
            }
            
            Notifications::Show("Unlocks", "All achievements unlocked");
        }
    };

    class UnlockAwards : public Command
    {
    public:
        UnlockAwards(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

    public:
        virtual void OnCall() override
        {
            Stats::SetInt("MPX_AWD_FM_GOLF_BIRDIES", 25);
            Stats::SetInt("MPX_AWD_FM_TENNIS_ACE", 25);
            Stats::SetInt("MPX_AWD_FM_TENNIS_MATCHES", 25);
            Stats::SetInt("MPX_AWD_FM_SHOOTRANG_CT_WON", 25);
            Stats::SetInt("MPX_AWD_FM_SHOOTRANG_RT_WON", 25);
            Stats::SetInt("MPX_AWD_FM_SHOOTRANG_TG_WON", 25);
            Stats::SetInt("MPX_AWD_FM_DM_WINS", 50);
            Stats::SetInt("MPX_AWD_FM_TDM_WINS", 50);
            Stats::SetInt("MPX_AWD_FM_GTA_RACES_WON", 50);
            Stats::SetInt("MPX_AWD_FM_RACES_WON", 50);
            Stats::SetInt("MPX_AWD_FM_MISSION_SCORE", 100);
            Stats::SetInt("MPX_AWD_FM_GOLF_WON", 25);
            Stats::SetInt("MPX_AWD_FM_TENNIS_WON", 25);
            Stats::SetInt("MPX_AWD_FM_BASEJMP_WON", 25);
            Stats::SetInt("MPX_AWD_FM_SHOOTRANG_GRAN_WON", 25);
            Stats::SetInt("MPX_AWD_FMHORDWAVESSURVIVE", 10);
            Stats::SetInt("MPX_AWD_FMPICKUPDLCCRATE1ST", 1);
            Stats::SetInt("MPX_AWD_WIN_CAPTURE_DONT_DYING", 25);
            Stats::SetInt("MPX_AWD_DO_HEIST_AS_MEMBER", 25);
            Stats::SetInt("MPX_AWD_WIN_GOLD_MEDAL_HEISTS", 25);
            Stats::SetInt("MPX_AWD_KILL_TEAM_YOURSELF_LTS", 25);
            Stats::SetInt("MPX_AWD_DO_HEIST_AS_THE_LEADER", 25);
            Stats::SetInt("MPX_AWD_STORE_20_CAR_IN_GARAGES", 20);
            Stats::SetInt("MPX_AWD_DAILYOBJCOMPLETED", 100);
            Stats::SetInt("MPX_AWD_DAILYOBJCOMPLETEDCGW", 100);
            
            Notifications::Show("Unlocks", "All awards unlocked");
        }
    };

    // Unlock All command
    class UnlockAll : public Command
    {
    public:
        UnlockAll(const std::string& name, const std::string& label, const std::string& description) :
            Command(name, label, description) {}

        virtual void OnCall() override
        {
            
            Notifications::Show("Unlocks", "All items unlocked successfully!");

            // Buildings
            UnlockNightclubSetups("", "", "").OnCall();
            UnlockAcidLabEquipment("", "", "").OnCall();
            UnlockNightclubAwards("", "", "").OnCall();
            UnlockArcadeAwards("", "", "").OnCall();
            UnlockArenaAwards("", "", "").OnCall();
            UnlockAutoShopProperties("", "", "").OnCall();
            UnlockBunkerResearch("", "", "").OnCall();
            
            // Heists
            UnlockCayoPericoHeist("", "", "").OnCall();
            UnlockDiamondCasinoHeist("", "", "").OnCall();
            UnlockDoomsdayHeist("", "", "").OnCall();
            UnlockClassicHeists("", "", "").OnCall();
            UnlockLSTuners("", "", "").OnCall();
            UnlockULPContract("", "", "").OnCall();
            
            // Special Events
            UnlockChristmasClothing("", "", "").OnCall();
            UnlockChristmasLiveries("", "", "").OnCall();
            UnlockChristmasContent("", "", "").OnCall();
            UnlockIndependenceDay("", "", "").OnCall();
            UnlockValentineContent("", "", "").OnCall();
            UnlockWeaponUnlocks("", "", "").OnCall();
            UnlockVanillaUnicornAward("", "", "").OnCall();
            UnlockReturningPlayerBonus("", "", "").OnCall();
            
            // Vehicles
            UnlockVehicleMods("", "", "").OnCall();
            UnlockTaxiLivery("", "", "").OnCall();
            UnlockShotaro("", "", "").OnCall();
            UnlockLSCarMeetReputation("", "", "").OnCall();
            
            // Clothing
            UnlockAllClothing("", "", "").OnCall();
            UnlockTattoos("", "", "").OnCall();
            UnlockHaircuts("", "", "").OnCall();
            
            // Achievements
            UnlockAchievements("", "", "").OnCall();
            UnlockAwards("", "", "").OnCall();
			
        }
    };
    
    // Статические экземпляры команд
    static UnlockNightclubSetups _UnlockNightclubSetups{"unlocknightclubsetups", "Unlock Nightclub Setups", "Skips Nightclub setup missions."};
    static UnlockAcidLabEquipment _UnlockAcidLabEquipment{"unlockacidlabequipment", "Unlock Acid Lab Equipment", "Upgrades Acid Lab equipment."};
    static UnlockNightclubAwards _UnlockNightclubAwards{"unlocknightclubawards", "Unlock Nightclub Awards", "Unlocks all Nightclub awards."};
    static UnlockArcadeAwards _UnlockArcadeAwards{"unlockarcadeawards", "Unlock Arcade Awards", "Unlocks all Arcade awards."};
    static UnlockArenaAwards _UnlockArenaAwards{"unlockarenaawards", "Unlock Arena Awards", "Unlocks all Arena awards."};
    static UnlockAutoShopProperties _UnlockAutoShopProperties{"unlockautoshopproperties", "Unlock Auto Shop Properties", "Unlocks all Auto Shop properties."};
    static UnlockBunkerResearch _UnlockBunkerResearch{"unlockbunkerresearch", "Unlock Bunker Research", "Unlocks all Bunker research items."};
    
    static UnlockCayoPericoHeist _UnlockCayoPericoHeist{"unlockcayopericoheist", "Unlock Cayo Perico Heist", "Unlocks the Cayo Perico Heist."};
    static UnlockDiamondCasinoHeist _UnlockDiamondCasinoHeist{"unlockdiamondcasinoheist", "Unlock Diamond Casino Heist", "Unlocks the Diamond Casino Heist."};
    static UnlockDoomsdayHeist _UnlockDoomsdayHeist{"unlockdoomsdayheist", "Unlock Doomsday Heist", "Unlocks the Doomsday Heist."};
    static UnlockClassicHeists _UnlockClassicHeists{"unlockclassicheists", "Unlock Classic Heists", "Unlocks all Classic Heists."};
    static UnlockLSTuners _UnlockLSTuners{"unlocktuners", "Unlock LS Tuners", "Unlocks all LS Tuners contracts."};
    static UnlockULPContract _UnlockULPContract{"unlockulpcontract", "Unlock ULP Contract", "Unlocks the ULP Contract."};
    
    static UnlockChristmasClothing _UnlockChristmasClothing{"unlockchristmasclothing", "Unlock Christmas Clothing", "Unlocks all Christmas clothing items."};
    static UnlockChristmasLiveries _UnlockChristmasLiveries{"unlockchristmasliveries", "Unlock Christmas Liveries", "Unlocks all Christmas vehicle liveries."};
    static UnlockChristmasContent _UnlockChristmasContent{"unlockchristmascontent", "Unlock Christmas Content", "Unlocks all Christmas content."};
    static UnlockIndependenceDay _UnlockIndependenceDay{"unlockindependenceday", "Unlock Independence Day", "Unlocks all Independence Day content."};
    static UnlockValentineContent _UnlockValentineContent{"unlockvalentinecontent", "Unlock Valentine Content", "Unlocks all Valentine content."};
    static UnlockWeaponUnlocks _UnlockWeaponUnlocks{"unlockweaponunlocks", "Unlock Weapon Unlocks", "Unlocks special weapons."};
    static UnlockVanillaUnicornAward _UnlockVanillaUnicornAward{"unlockvanillaunicornaward", "Unlock Vanilla Unicorn Award", "Unlocks the Vanilla Unicorn Award."};
    static UnlockReturningPlayerBonus _UnlockReturningPlayerBonus{"unlockreturningplayerbonus", "Unlock Returning Player Bonus", "Unlocks the Returning Player Bonus."};
    
    static UnlockVehicleMods _UnlockVehicleMods{"unlockvehiclemods", "Unlock Vehicle Mods", "Unlocks all vehicle modifications."};
    static UnlockTaxiLivery _UnlockTaxiLivery{"unlocktaxilivery", "Unlock Taxi Livery", "Unlocks the Taxi livery."};
    static UnlockShotaro _UnlockShotaro{"unlockshotaro", "Unlock Shotaro", "Unlocks the Shotaro motorcycle."};
    static UnlockLSCarMeetReputation _UnlockLSCarMeetReputation{"unlockscarmeetreputation", "Unlock LS Car Meet Reputation", "Unlocks LS Car Meet reputation rewards."};
    
    static UnlockAllClothing _UnlockAllClothing{"unlockallclothing", "Unlock All Clothing", "Unlocks all clothing items."};
    static UnlockTattoos _UnlockTattoos{"unlocktattoos", "Unlock Tattoos", "Unlocks all tattoos."};
    static UnlockHaircuts _UnlockHaircuts{"unlockhaircuts", "Unlock Haircuts", "Unlocks all haircuts."};
    
    static UnlockAchievements _UnlockAchievements{"unlockachievements", "Unlock Achievements", "Unlocks all achievements."};
    static UnlockAwards _UnlockAwards{"unlockawards", "Unlock Awards", "Unlocks all awards."};
    
    static UnlockAll _UnlockAll{"unlockall", "Unlock All", "Unlocks all available items in the game."};
}