#ifndef GUARD_HANG_NAME_HASH_H
#define GUARD_HANG_NAME_HASH_H

u32 HangName_AddHashBytes(u32 nameHash, const u8 *overrideName, const u8 *liveName);
const u8 *HangName_SpeciesHashSource(u16 species);
const u8 *HangName_TrainerHashSource(u16 trainerId);

#endif // GUARD_HANG_NAME_HASH_H
