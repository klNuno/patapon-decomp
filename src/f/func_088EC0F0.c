#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
    f32 unk_94;
} U;

typedef struct {
    u8 pad_00[0xCF0];
    U unk_CF0;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
u8 *func_08890D90(s32, s32);

void func_088EC0F0(S *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    s32 *c = func_0885356C(arg1, 2, 1, 4);
    f32 *d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    f32 *e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    T *p = arg0->unk_14;
    s32 u;
    s32 r;
    V *v;
    U *w;

    if (p != NULL) {
        u = *a;
        if (!(u != 0 && u != 1)) {
            r = func_08894FBC(func_08899E18(p->unk_36B10, u), *b, 1);
            if (r != 0) {
                v = (V *)func_08890D90(r, *c);
                if (v != NULL) {
                    w = &v->unk_CF0;
                    if (w != NULL) {
                        w->unk_90 = *d;
                        w->unk_94 = *e;
                    }
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}
