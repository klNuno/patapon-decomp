#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} R_089033A4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} S1;

void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_0885606C(f32);
f32 func_08856234(f32);
void func_08931B94(u8 *);
void func_08931CEC(R_089033A4 *, u8 *, s32, s32 *, void *, void *, void *);



void func_0890320C(S0 *arg0, void *arg1) {
    struct { u8 pad_00[4]; R_089033A4 unk_04; u8 pad_0C[4]; } ret;
    S1 v;
    S1 q;
    S1 t;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    if (*a >= 0) {
        f32 y = *(f32 *)c;
        f32 x = *(f32 *)b;
        v.unk_00 = x;
        v.unk_04 = y;
        v.unk_0C = 1.0f;
        v.unk_08 = 0.0f;
        func_08931B94(arg0->unk_10 + 0x1040);
        q.unk_00 = 0.0f;
        q.unk_04 = 0.0f;
        q.unk_08 = 0.0f;
        q.unk_0C = 1.0f;
        if (*d == 0) {
            f32 angle = 3.1415927f;
            f32 half = 0.5f;
            f32 x = 0.0f;
            f32 y = 1.0f;
            f32 sin;
            angle *= half;
            sin = func_08856234(angle);
            t.unk_0C = func_0885606C(angle);
            t.unk_00 = sin * x;
            t.unk_08 = sin * x;
            t.unk_04 = sin * y;
            func_0881F120(&q, &t, 0x10);
        }
        func_08931CEC(&ret.unk_04, arg0->unk_10 + 0x1040, *a, NULL, &v, &q, NULL);
    }
    func_08852F00(arg1, 0);
}
