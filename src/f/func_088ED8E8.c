#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088ED8E8;

typedef struct {
    u8 pad_00[0x14];
    W_088ED8E8 *unk_14;
} S_088ED8E8;

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
    f32 unk_94;
} P_088ED8E8;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
u8 *func_08890D90(s32, s32);

void func_088ED8E8(S_088ED8E8 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    f32 *d;
    f32 *e;
    W_088ED8E8 *w;
    s32 q;
    u8 *r;
    P_088ED8E8 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && (*a == 0 || *a == 1U)) {
        q = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (q != 0) {
            r = func_08890D90(q, *c);
            if (r != NULL) {
                p = (P_088ED8E8 *)(r + 0xCF0);
                if (p != NULL) {
                    *d = p->unk_90;
                    *e = p->unk_94;
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}
