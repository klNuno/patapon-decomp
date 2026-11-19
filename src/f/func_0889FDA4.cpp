#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} U;

typedef struct {
    u8 pad_00[0x100];
    T unk_100;
} V;

typedef struct {
    u8 pad_00[0x77E0];
    s32 unk_77E0;
    u8 pad_77E4[0x1B00];
    s32 unk_92E4;
} W;

typedef struct {
    u8 pad_00[0x3A0];
    W *unk_3A0;
} X;

typedef struct {
    u8 pad_00[0x394];
    s32 unk_394;
} Y;

typedef struct {
    u8 pad_00[0xB0];
    f32 unk_B0, unk_B4;
    u8 pad_B8[4];
    s32 unk_BC;
    u8 pad_C0[0x340];
    u32 unk_400;
} R;

typedef struct {
    u8 pad_00[0x114];
    U *unk_114;
    u8 pad_118[0x260];
    s32 unk_378;
    u8 pad_37C[0x14];
    Y *unk_390;
    u8 pad_394[0xC];
    X *unk_3A0;
    u8 pad_3A4[0x14];
    V *unk_3B8;
    u8 pad_3BC[0x934];
    R unk_CF0;
} S;

s32 func_0889D88C(s32, s32, s32);
s32 func_0893D400(s32 *);
u8 func_08956918(s32);
extern s32 func_08958924(s32);

s32 func_0889FDA4(void *arg0, S *arg1) {
    V *a = arg1->unk_3B8;
    s32 b = arg1->unk_3A0->unk_3A0->unk_92E4;
    R *p = &arg1->unk_CF0;
    s32 c = func_0893D400(&arg1->unk_378);
    s32 d;

    if (b == 0) {
        s32 e = (u8)(func_08956918(c) != 0 || arg1->unk_3A0->unk_3A0->unk_77E0 == 3);
        if (e == 0) {
            e = arg1->unk_390->unk_394 != 0;
        }
        d = (u8)e;
        if (func_08958924(c) != 0) {
            d = 0;
        }
    } else {
        d = 1;
    }
    if (d != 0 && p->unk_400 == 0) {
        if ((u8)func_0889D88C((s32)&arg1->unk_CF0, 3, 0) != 0) {
            f32 x = 0.0f, y = 1.0f;
            p->unk_B0 *= x;
            p->unk_B4 *= y;
            p->unk_BC = 0;
        }
        U *t = arg1->unk_114;
        T *r = &a->unk_100;
        if (t != NULL) {
            r = t->unk_10;
        }
        p->unk_400 = (u32)(4800.0f * *(volatile f32 *)&r->unk_10);
    } else {
        func_0889D88C((s32)&arg1->unk_CF0, 2, 0);
    }
    return 1;
}

}
