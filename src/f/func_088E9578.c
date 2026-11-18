#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} E;

typedef struct {
    u8 pad_00[0x14];
    E *unk_14;
    s32 unk_18;
} T;

void func_0882687C(u16 *, u16 *);
u8 *func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08897B2C(s32, u16 *, s32, f32, f32);
s32 func_08890D90(s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_088AE2A8(s32);
s32 func_089A8D10(s32, s32);

void func_088E9578(T *arg0, void *arg1) {
    u16 b[0x400];
    s32 i;
    s32 *c;
    s32 *a;
    s32 *t;
    f32 *d;
    f32 *f;
    s32 e;
    E *p;
    s32 q;

    t = func_0885356C(arg1, 0, 1, 4);
    a = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    f = (f32 *)func_0885356C(arg1, 4, 1, 4);
    i = *func_0885356C(arg1, 5, 0, 4);
    e = func_089A8D10(arg0->unk_18, *(s32 *)(func_08852BA8(arg1) + i));
    func_088AE2A8(e);
    func_0882687C(b, (u16 *)e);
    p = arg0->unk_14;
    if (p != NULL && !(*t != 0 && *t != 1)) {
        q = func_08894FBC(func_08899E18(p->unk_36B10, *t), *a, 1);
        if (q != 0) {
            q = func_08890D90(q, *c);
            if (q != 0) {
                func_08897B2C(q, b, 0, *d, *f);
            }
        }
    }
    func_08852F00(arg1, 0);
}
