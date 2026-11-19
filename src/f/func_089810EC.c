#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    u32 unk_40;
    u8 pad_44[0xC];
} UnkEntry;

typedef struct {
    u8 pad_00[0xA0C];
    UnkEntry *unk_A0C;
    s32 unk_A10;
    UnkEntry *unk_A14;
    u8 pad_A18[0x330];
    u32 unk_D48;
} UnkObject;

s32 func_089810EC(UnkObject *arg0)
{
    s32 temp = arg0->unk_A10;
    UnkEntry *base = arg0->unk_A0C;
    UnkEntry *entry = arg0->unk_A14;
    if (entry != base + temp) {
        u32 limit = *(volatile u32 *)&entry->unk_40;
        u32 value = *(volatile u32 *)&arg0->unk_D48;
        if (limit > value) {
            goto end;
        }
        return 0;
    }
end:
    return 1;
}
