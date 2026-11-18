#include "common.h"

typedef struct { u8 pad_00[0x18]; s32 unk_18; } W;
typedef struct { u8 pad_00[0x92D0]; s32 unk_92D0; } X;
typedef struct {
    u8 pad_00[0x3A0];
    X *unk_3A0;
    u8 pad_3A4[0x1110];
    W *unk_14B4;
} U;
typedef struct {
    u8 pad_00[0x3A0];
    U *unk_3A0;
    u8 pad_3A4[0x9DC];
    u8 unk_D80[4];
} V;
typedef struct { u8 pad_00[0x378]; u8 unk_378[4]; } P;
typedef struct {
    u8 pad_00[4];
    P *unk_04;
    V *unk_08;
    u8 pad_0C[4];
    u8 unk_10[0x90];
    f32 unk_A0;
    s32 unk_A4;
} T;

extern f32 D_089FAA0C[];
void func_0889E248(void *, u32, s32);
void func_0889E7A8(void *, s32);
void func_08931CEC(void *, s32, s32, s32, void *, s32, s32);
s32 func_0893D420(void *, s32);

void func_088A024C(T *arg0, u32 arg1) {
    u8 temp[8];
    f32 x;
    f32 *p;
    s32 a;
    W *q;
    V *v;
    f32 y;

    if (arg0->unk_08->unk_3A0->unk_3A0->unk_92D0 == 0) {
        func_0889E7A8(arg0->unk_10, 0);
    }
    a = func_0893D420(arg0->unk_04->unk_378, 1);
    v = arg0->unk_08;
    q = v->unk_3A0->unk_14B4;
    if (q != NULL) {
        y = arg0->unk_A0;
        if (0.0f == y) {
            if (q->unk_18 != -1) {
                func_08931CEC(temp, a, q->unk_18, 0, v->unk_D80, 0, 0);
            }
            arg0->unk_A0 = 0.5f;
        } else {
            x = y - (f32)arg1 / 4800.0f;
            p = D_089FAA0C[0] > x ? D_089FAA0C : &x;
            arg0->unk_A0 = *p;
        }
    }
    func_0889E248(arg0->unk_10, arg1, arg0->unk_A4);
}
