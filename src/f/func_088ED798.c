#include "common.h"

typedef struct {
    u8 pad_00[0x3AE];
    s8 unk_3AE;
} S088ED798_Q;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088ED798_W;

typedef struct {
    u8 pad_00[0x14];
    S088ED798_W *unk_14;
} S088ED798;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
S088ED798_Q *func_08890D90(s32, s32);

void func_088ED798(S088ED798 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    S088ED798_W *w;
    s32 q;
    S088ED798_Q *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && (*a == 0 || *a == 1U)) {
        q = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (q != 0) {
            r = func_08890D90(q, *c);
            if (r != NULL) {
                r->unk_3AE = *d != 0;
            }
        }
    }
    func_08852F00(arg1, 0);
}
