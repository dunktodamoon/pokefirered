#include "global.h"
#include "characters.h"
#include "hang_name_hash.h"
#include "constants/opponents.h"
#include "constants/species.h"

/*
 * Display names are Chinese. Trainer-mon personalities hash the
 * original English name bytes, so natures stay on the stock tables.
 */

u32 HangName_AddHashBytes(u32 nameHash, const u8 *overrideName, const u8 *liveName)
{
    const u8 *name;

    if (overrideName != NULL)
        name = overrideName;
    else
        name = liveName;

    while (*name != EOS)
    {
        nameHash += *name;
        name++;
    }
    return nameHash;
}

static const u8 sHangHashSpecies_BULBASAUR[] = _("BULBASAUR");
static const u8 sHangHashSpecies_IVYSAUR[] = _("IVYSAUR");
static const u8 sHangHashSpecies_VENUSAUR[] = _("VENUSAUR");
static const u8 sHangHashSpecies_CHARMANDER[] = _("CHARMANDER");
static const u8 sHangHashSpecies_CHARMELEON[] = _("CHARMELEON");
static const u8 sHangHashSpecies_CHARIZARD[] = _("CHARIZARD");
static const u8 sHangHashSpecies_SQUIRTLE[] = _("SQUIRTLE");
static const u8 sHangHashSpecies_WARTORTLE[] = _("WARTORTLE");
static const u8 sHangHashSpecies_BLASTOISE[] = _("BLASTOISE");
static const u8 sHangHashSpecies_CATERPIE[] = _("CATERPIE");
static const u8 sHangHashSpecies_METAPOD[] = _("METAPOD");
static const u8 sHangHashSpecies_BUTTERFREE[] = _("BUTTERFREE");
static const u8 sHangHashSpecies_PIKACHU[] = _("PIKACHU");
static const u8 sHangHashSpecies_RAICHU[] = _("RAICHU");
static const u8 sHangHashSpecies_MAGNEMITE[] = _("MAGNEMITE");
static const u8 sHangHashSpecies_MAGNETON[] = _("MAGNETON");
static const u8 sHangHashSpecies_PSYDUCK[] = _("PSYDUCK");
static const u8 sHangHashSpecies_GOLDUCK[] = _("GOLDUCK");
static const u8 sHangHashSpecies_ABRA[] = _("ABRA");
static const u8 sHangHashSpecies_KADABRA[] = _("KADABRA");
static const u8 sHangHashSpecies_ALAKAZAM[] = _("ALAKAZAM");
static const u8 sHangHashSpecies_MACHOP[] = _("MACHOP");
static const u8 sHangHashSpecies_MACHOKE[] = _("MACHOKE");
static const u8 sHangHashSpecies_MACHAMP[] = _("MACHAMP");
static const u8 sHangHashSpecies_GASTLY[] = _("GASTLY");
static const u8 sHangHashSpecies_HAUNTER[] = _("HAUNTER");
static const u8 sHangHashSpecies_GENGAR[] = _("GENGAR");
static const u8 sHangHashSpecies_MAGIKARP[] = _("MAGIKARP");
static const u8 sHangHashSpecies_GYARADOS[] = _("GYARADOS");
static const u8 sHangHashSpecies_LAPRAS[] = _("LAPRAS");
static const u8 sHangHashSpecies_AERODACTYL[] = _("AERODACTYL");
static const u8 sHangHashSpecies_OMANYTE[] = _("OMANYTE");
static const u8 sHangHashSpecies_SHELLDER[] = _("SHELLDER");
static const u8 sHangHashSpecies_DRATINI[] = _("DRATINI");
static const u8 sHangHashSpecies_DRAGONAIR[] = _("DRAGONAIR");
static const u8 sHangHashSpecies_DRAGONITE[] = _("DRAGONITE");
static const u8 sHangHashSpecies_ARTICUNO[] = _("ARTICUNO");
static const u8 sHangHashSpecies_ZAPDOS[] = _("ZAPDOS");
static const u8 sHangHashSpecies_MOLTRES[] = _("MOLTRES");
static const u8 sHangHashSpecies_MEWTWO[] = _("MEWTWO");
static const u8 sHangHashSpecies_MEW[] = _("MEW");
static const u8 sHangHashSpecies_EEVEE[] = _("EEVEE");
static const u8 sHangHashSpecies_SNORLAX[] = _("SNORLAX");

const u8 *HangName_SpeciesHashSource(u16 species)
{
    switch (species)
    {
    case SPECIES_BULBASAUR:
        return sHangHashSpecies_BULBASAUR;
    case SPECIES_IVYSAUR:
        return sHangHashSpecies_IVYSAUR;
    case SPECIES_VENUSAUR:
        return sHangHashSpecies_VENUSAUR;
    case SPECIES_CHARMANDER:
        return sHangHashSpecies_CHARMANDER;
    case SPECIES_CHARMELEON:
        return sHangHashSpecies_CHARMELEON;
    case SPECIES_CHARIZARD:
        return sHangHashSpecies_CHARIZARD;
    case SPECIES_SQUIRTLE:
        return sHangHashSpecies_SQUIRTLE;
    case SPECIES_WARTORTLE:
        return sHangHashSpecies_WARTORTLE;
    case SPECIES_BLASTOISE:
        return sHangHashSpecies_BLASTOISE;
    case SPECIES_CATERPIE:
        return sHangHashSpecies_CATERPIE;
    case SPECIES_METAPOD:
        return sHangHashSpecies_METAPOD;
    case SPECIES_BUTTERFREE:
        return sHangHashSpecies_BUTTERFREE;
    case SPECIES_PIKACHU:
        return sHangHashSpecies_PIKACHU;
    case SPECIES_RAICHU:
        return sHangHashSpecies_RAICHU;
    case SPECIES_MAGNEMITE:
        return sHangHashSpecies_MAGNEMITE;
    case SPECIES_MAGNETON:
        return sHangHashSpecies_MAGNETON;
    case SPECIES_PSYDUCK:
        return sHangHashSpecies_PSYDUCK;
    case SPECIES_GOLDUCK:
        return sHangHashSpecies_GOLDUCK;
    case SPECIES_ABRA:
        return sHangHashSpecies_ABRA;
    case SPECIES_KADABRA:
        return sHangHashSpecies_KADABRA;
    case SPECIES_ALAKAZAM:
        return sHangHashSpecies_ALAKAZAM;
    case SPECIES_MACHOP:
        return sHangHashSpecies_MACHOP;
    case SPECIES_MACHOKE:
        return sHangHashSpecies_MACHOKE;
    case SPECIES_MACHAMP:
        return sHangHashSpecies_MACHAMP;
    case SPECIES_GASTLY:
        return sHangHashSpecies_GASTLY;
    case SPECIES_HAUNTER:
        return sHangHashSpecies_HAUNTER;
    case SPECIES_GENGAR:
        return sHangHashSpecies_GENGAR;
    case SPECIES_MAGIKARP:
        return sHangHashSpecies_MAGIKARP;
    case SPECIES_GYARADOS:
        return sHangHashSpecies_GYARADOS;
    case SPECIES_LAPRAS:
        return sHangHashSpecies_LAPRAS;
    case SPECIES_AERODACTYL:
        return sHangHashSpecies_AERODACTYL;
    case SPECIES_OMANYTE:
        return sHangHashSpecies_OMANYTE;
    case SPECIES_SHELLDER:
        return sHangHashSpecies_SHELLDER;
    case SPECIES_DRATINI:
        return sHangHashSpecies_DRATINI;
    case SPECIES_DRAGONAIR:
        return sHangHashSpecies_DRAGONAIR;
    case SPECIES_DRAGONITE:
        return sHangHashSpecies_DRAGONITE;
    case SPECIES_ARTICUNO:
        return sHangHashSpecies_ARTICUNO;
    case SPECIES_ZAPDOS:
        return sHangHashSpecies_ZAPDOS;
    case SPECIES_MOLTRES:
        return sHangHashSpecies_MOLTRES;
    case SPECIES_MEWTWO:
        return sHangHashSpecies_MEWTWO;
    case SPECIES_MEW:
        return sHangHashSpecies_MEW;
    case SPECIES_EEVEE:
        return sHangHashSpecies_EEVEE;
    case SPECIES_SNORLAX:
        return sHangHashSpecies_SNORLAX;
    default:
        return NULL;
    }
}

static const u8 sHangHashTrainer_GIOVANNI[] = _("GIOVANNI");
static const u8 sHangHashTrainer_TERRY[] = _("TERRY");
static const u8 sHangHashTrainer_AGATHA[] = _("AGATHA");
static const u8 sHangHashTrainer_BRUNO[] = _("BRUNO");
static const u8 sHangHashTrainer_LANCE[] = _("LANCE");
static const u8 sHangHashTrainer_LORELEI[] = _("LORELEI");
static const u8 sHangHashTrainer_BLAINE[] = _("BLAINE");
static const u8 sHangHashTrainer_BROCK[] = _("BROCK");
static const u8 sHangHashTrainer_ERIKA[] = _("ERIKA");
static const u8 sHangHashTrainer_LT_SURGE[] = _("LT. SURGE");
static const u8 sHangHashTrainer_MISTY[] = _("MISTY");
static const u8 sHangHashTrainer_SABRINA[] = _("SABRINA");
static const u8 sHangHashTrainer_PROF_OAK[] = _("PROF. OAK");
static const u8 sHangHashTrainer_ADMIN[] = _("ADMIN");

const u8 *HangName_TrainerHashSource(u16 trainerId)
{
    switch (trainerId)
    {
    case TRAINER_BOSS_GIOVANNI:
    case TRAINER_BOSS_GIOVANNI_2:
    case TRAINER_LEADER_GIOVANNI:
        return sHangHashTrainer_GIOVANNI;
    case TRAINER_CHAMPION_FIRST_BULBASAUR:
    case TRAINER_CHAMPION_FIRST_CHARMANDER:
    case TRAINER_CHAMPION_FIRST_SQUIRTLE:
    case TRAINER_CHAMPION_REMATCH_BULBASAUR:
    case TRAINER_CHAMPION_REMATCH_CHARMANDER:
    case TRAINER_CHAMPION_REMATCH_SQUIRTLE:
    case TRAINER_RIVAL_CERULEAN_BULBASAUR:
    case TRAINER_RIVAL_CERULEAN_CHARMANDER:
    case TRAINER_RIVAL_CERULEAN_SQUIRTLE:
    case TRAINER_RIVAL_OAKS_LAB_BULBASAUR:
    case TRAINER_RIVAL_OAKS_LAB_CHARMANDER:
    case TRAINER_RIVAL_OAKS_LAB_SQUIRTLE:
    case TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR:
    case TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER:
    case TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE:
    case TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR:
    case TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER:
    case TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE:
    case TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR:
    case TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER:
    case TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE:
    case TRAINER_RIVAL_SILPH_BULBASAUR:
    case TRAINER_RIVAL_SILPH_CHARMANDER:
    case TRAINER_RIVAL_SILPH_SQUIRTLE:
    case TRAINER_RIVAL_SS_ANNE_BULBASAUR:
    case TRAINER_RIVAL_SS_ANNE_CHARMANDER:
    case TRAINER_RIVAL_SS_ANNE_SQUIRTLE:
        return sHangHashTrainer_TERRY;
    case TRAINER_ELITE_FOUR_AGATHA:
    case TRAINER_ELITE_FOUR_AGATHA_2:
        return sHangHashTrainer_AGATHA;
    case TRAINER_ELITE_FOUR_BRUNO:
    case TRAINER_ELITE_FOUR_BRUNO_2:
        return sHangHashTrainer_BRUNO;
    case TRAINER_ELITE_FOUR_LANCE:
    case TRAINER_ELITE_FOUR_LANCE_2:
        return sHangHashTrainer_LANCE;
    case TRAINER_ELITE_FOUR_LORELEI:
    case TRAINER_ELITE_FOUR_LORELEI_2:
        return sHangHashTrainer_LORELEI;
    case TRAINER_LEADER_BLAINE:
        return sHangHashTrainer_BLAINE;
    case TRAINER_LEADER_BROCK:
        return sHangHashTrainer_BROCK;
    case TRAINER_LEADER_ERIKA:
        return sHangHashTrainer_ERIKA;
    case TRAINER_LEADER_LT_SURGE:
        return sHangHashTrainer_LT_SURGE;
    case TRAINER_LEADER_MISTY:
        return sHangHashTrainer_MISTY;
    case TRAINER_LEADER_SABRINA:
        return sHangHashTrainer_SABRINA;
    case TRAINER_PKMN_PROF_PROF_OAK:
        return sHangHashTrainer_PROF_OAK;
    case TRAINER_TEAM_ROCKET_ADMIN:
    case TRAINER_TEAM_ROCKET_ADMIN_2:
        return sHangHashTrainer_ADMIN;
    default:
        return NULL;
    }
}
