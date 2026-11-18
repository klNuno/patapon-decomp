#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xBF];
    u8 unk_BF;
} B;

typedef struct {
    u8 pad_00[4];
    B *unk_04;
} C;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} U;

typedef struct {
    u8 pad_00[0x114];
    U *unk_114;
    u8 pad_118[0x298];
    u8 unk_3B0[4];
} V;

typedef struct {
    u8 pad_00[0x249E0];
    u8 unk_249E0[0x12130];
    s32 unk_36B10;
} G;

typedef struct {
    G *unk_00;
    s32 unk_04;
    u8 pad_08[0x28];
    u8 unk_30;
    u8 pad_31[3];
    s32 unk_34;
} T;

C *func_08852FFC(s32);
u8 *func_08899E18(s32, s32);
void func_0889DA40(u8 *, s32, s32, s32);
s32 func_0894BDF4(void *);
s32 func_0896E404(T *);
s32 func_0896E71C(T *, s32);
s32 func_0896EA40(T *);
s32 func_0896F1CC(T *);
void func_0896FFC4(T *, f32);

void func_0896D4E0(T *arg0) {
    C *c;
    bool a;
    u8 *q;
    V *p;

    c = func_08852FFC(arg0->unk_04);
    a = true;
    if (func_0894BDF4(arg0->unk_00->unk_249E0) == 2 && arg0->unk_34 != 2) {
        if (arg0->unk_30 == 0) {
            func_0896FFC4(arg0, 1.2f);
            arg0->unk_30 = 1;
        }
    } else if (arg0->unk_30 == 1) {
        func_0896FFC4(arg0, 1.0f);
        arg0->unk_30 = 0;
    }

    if ((u8)func_0896F1CC(arg0) != 1) {
        p = (V *)(func_08899E18(arg0->unk_00->unk_36B10, 0) + 0x7D50);
        q = NULL;
        if (p == NULL) {
            a = false;
        } else {
            q = p->unk_3B0;
            if (p->unk_114->unk_04 <= 0) {
                a = false;
            }
        }
        switch (arg0->unk_34) {
        case 0:
            if ((u8)func_0896E404(arg0) == 1) {
                if (a) {
                    func_0889DA40(q, 5, 1, 0);
                }
                arg0->unk_34 = 2;
            }
            if (((c->unk_04->unk_BF >> 4) & 1) != 1 && (u8)func_0896E71C(arg0, 1) == 1) {
                if (a) {
                    func_0889DA40(q, 5, 1, 0);
                }
                arg0->unk_34 = 1;
            }
            break;
        case 1:
            if ((u8)func_0896EA40(arg0) == 1) {
                if (a) {
                    func_0889DA40(q, 2, 1, 0);
                }
                arg0->unk_34 = 0;
            }
            break;
        case 2:
            break;
        }
    }
}
}
