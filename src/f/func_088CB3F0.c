#include "common.h"

typedef struct {
    u32 unk_00 : 24;
    u32 unk_03 : 8;
} Bits;

typedef struct {
    Bits **unk_00;
    s32 unk_04;
    u8 pad_08[8];
} Entry;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} Off;

typedef struct {
    u8 pad_00[0x10];
    Entry *unk_10;
    s32 unk_14;
    Off *unk_18;
    s32 unk_1C;
} Obj;

void func_088CB3F0(u32 *arg0, Obj *arg1, s32 arg2, s32 arg3, s32 arg4) {
    Bits *src;
    Entry *e;
    s32 i;
    s32 temp;

    if (arg1 == NULL || arg0 == NULL) {
        return;
    }
    if (arg4 < 0 || arg4 >= arg1->unk_1C) {
        return;
    }
    if (arg2 < 0 || arg2 >= arg1->unk_14) {
        return;
    }
    arg2 = (s32)((u32)arg2 * 16U);
    arg2 += (u32)arg1->unk_10;
    e = (Entry *)arg2;
    temp = e->unk_04;
    if (arg3 < 0 || arg3 >= temp) {
        return;
    }
    arg4 = arg1->unk_18[arg4].unk_00 >> 2;
    src = e->unk_00[arg3] + arg4;
    for (i = 0; i < 12; i++) {
        arg0[i] = src[i].unk_00 << 8;
    }
}
