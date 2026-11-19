#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xF];
} Entry;

typedef struct {
    u8 pad_00[8];
    Entry *unk_08;
    u8 pad_0C[8];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    s32 unk_20[1];
} Obj;

static inline s32 func_089C65B8_1(Entry *arg0, s32 arg1, s32 arg2) {
    s32 temp = arg0[arg1 + 1].unk_00;
    return temp == arg2;
}

s32 func_089C65B8(Obj *arg0, s32 arg1) {
    s32 i = arg0->unk_1C;
    s32 *temp = &((Obj *)((u8 *)(i * 4U) + (u32)arg0))->unk_20[0];
    s32 flag = (u8)!(*temp >= 0);
    if (flag && arg1 >= 0) {
        *temp = arg1;
    }
    return flag && func_089C65B8_1(arg0->unk_08, i, arg1) && arg0->unk_1C == arg0->unk_14;
}
