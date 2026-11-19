#include "common.h"

extern f32 D_08A08158[];
extern f32 D_08A08160[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T0;

typedef struct T {
    s32 unk_00;
    struct T *unk_04;
    T0 unk_08;
    u8 unk_14;
    u8 pad_15[3];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
} T;

T *func_089AD2A0(T *arg0, s32 arg1) {
    volatile T0 temp;
    arg0->unk_00 = arg1;
    temp.unk_00 = D_08A08158[0];
    temp.unk_04 = D_08A08158[1];
    temp.unk_08 = D_08A08160[0];
    arg0->unk_04 = arg0;
    arg0->unk_08 = temp;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = -1;
    arg0->unk_24 = 0;
    return arg0;
}
