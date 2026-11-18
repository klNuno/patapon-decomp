#include "common.h"

typedef struct {
    f32 unk_00[4];
} V_088EDB40;

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x328];
    V_088EDB40 unk_440;
} P_088EDB40;

typedef struct {
    u8 pad_00[0x7D50];
    P_088EDB40 unk_7D50;
    u8 pad_81A0[0x92EE - 0x7D50 - sizeof(P_088EDB40)];
    u8 unk_92EE;
} R_088EDB40;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088EDB40;

typedef struct {
    u8 pad_00[0x14];
    W_088EDB40 *unk_14;
} S_088EDB40;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08894EB0(R_088EDB40 *, V_088EDB40 *);
R_088EDB40 *func_08899E18(s32, s32);
s32 func_088F5BA0(s32);

void func_088EDB40(S_088EDB40 *arg0, void *arg1) {
    V_088EDB40 v;
    s32 *a;
    f32 *b;
    R_088EDB40 *r;
    P_088EDB40 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        if (*a != 0 && *a != 1) {
        } else {
        v.unk_00[0] = *b;
        v.unk_00[1] = 0.0f;
        v.unk_00[2] = 0.0f;
        v.unk_00[3] = 0.0f;
        r = func_08899E18(arg0->unk_14->unk_36B10, *a);
        func_08894EB0(r, &v);
        r->unk_92EE = 1;
        p = &r->unk_7D50;
        if (p != NULL && func_088F5BA0(p->unk_114) == 0) {
            p->unk_440.unk_00[0] = v.unk_00[0];
            p->unk_440.unk_00[1] = v.unk_00[1];
            p->unk_440.unk_00[2] = v.unk_00[2];
            p->unk_440.unk_00[3] = v.unk_00[3];
        }
        }
    }
    func_08852F00(arg1, 0);
}
