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
void func_08890550(f32, s32, u16 *);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
void func_088AE2A8(s32);
s32 func_089A8D10(s32, s32);

void func_088E8348(T *arg0, void *arg1) {
    u16 b[0x400];
    s32 *a;
    s32 *c;
    f32 *d;
    s32 i;
    s32 e;
    E *p;
    s32 q;

    a = func_0885356C(arg1, 0, 1, 4);
    c = func_0885356C(arg1, 1, 1, 4);
    d = (f32 *)func_0885356C(arg1, 2, 1, 4);
    i = *func_0885356C(arg1, 3, 0, 4);
    e = func_089A8D10(arg0->unk_18, *(s32 *)(func_08852BA8(arg1) + i));
    func_088AE2A8(e);
    func_0882687C(b, (u16 *)e);
    p = arg0->unk_14;
    if (p != NULL) {
        q = func_08894FBC(func_08899E18(p->unk_36B10, *c), *a, 0);
        if (q != 0) {
            func_08890550(*d, q, b);
        }
    }
    func_08852F00(arg1, 0);
}
