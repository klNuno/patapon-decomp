#include "common.h"

typedef struct {
    u8 unk_00[0x1004];
    u8 *unk_1004;
    s32 unk_1008;
} T2;

typedef struct {
    u8 unk_00[0x20204];
    u8 *unk_20204;
    s32 unk_20208;
    u8 unk_2020C[0x25004];
    u8 *unk_45210;
    s32 unk_45214;
    u8 pad_45218[4];
    T2 unk_4521C;
    s32 unk_46228;
} T0;

extern s32 func_0896ACA8(s32);
char *func_089B54A0(s32 arg0, s32 arg1);

T0 *func_089693F0(T0 *arg0, s32 arg1) {
    T2 *p;

    arg0->unk_20204 = (u8 *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_20208 = 0;
    arg0->unk_45210 = &((u8 *)(((u32)arg0->unk_2020C & 3) + (u32)arg0))[0x2020C];
    arg0->unk_45214 = 0;
    p = &arg0->unk_4521C;
    p->unk_1004 = (u8 *)((u32)p + ((u32)p & 3));
    p->unk_1008 = 0;
    func_089B54A0((s32)&arg0->unk_46228, arg1);
    *(s32 *)((u8 *)arg0 + 0x488F8) = 0;
    func_0896ACA8((s32)arg0);
    return arg0;
}
