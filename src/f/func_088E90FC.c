#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0xB0];
    V4 unk_B0;
} S2;

typedef struct {
    u8 pad_00[0xCF0];
    S2 unk_CF0;
} S088E90FC_Q;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088E8FDC_W;

typedef struct {
    u8 pad_00[0x14];
    S088E8FDC_W *unk_14;
} S088E8FDC;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
u8 *func_08890D90(s32, s32);
void func_08854CD8(V4 *, V4 *, V4 *);

void func_088E90FC(S088E8FDC *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    f32 *d;
    f32 *e;
    S088E8FDC_W *w;
    s32 q;
    S088E90FC_Q *r;
    S2 *p;
    V4 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && (*a == 0 || *a == 1U)) {
        q = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (q != 0) {
            r = (S088E90FC_Q *)func_08890D90(q, *c);
            if (r != NULL) {
                f32 y = *e;
                f32 x = *(volatile f32 *)d;
                p = &r->unk_CF0;
                v.unk_00 = x;
                v.unk_04 = y;
                v.unk_08 = 0.0f;
                v.unk_0C = 0.0f;
                func_08854CD8(&p->unk_B0, &p->unk_B0, &v);
                p->unk_B0.unk_0C = 0.0f;
            }
        }
    }
    func_08852F00(arg1, 0);
}
