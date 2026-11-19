#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    V unk_00[4];
} M_089CA16C;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
} E;

typedef struct {
    u8 pad_00[0x634];
    f32 unk_634;
    f32 unk_638;
} S;

extern f32 D_089ED318[];
extern f32 D_089ED31C[];

f32 func_0885606C(f32);
f32 func_08856234(f32);
s32 func_08856400(s32);
void func_08864E80(void *, M_089CA16C *);
typedef M_089CA16C M;
void func_08866B54(M *, s32, void *);
void func_089851FC(V *, s32, M_089CA16C *);
void func_089856F4(char *arg0);
s32 func_08985828(char *arg0, s32 arg1);

void func_089850AC(S *arg0) {
    struct {
        V unk_00;
        u8 pad_10[0x10];
    } a;
    M_089CA16C b;
    V c;
    V d;
    E *e;
    f32 t;
    f32 x;
    f32 y, u, v;
    f32 z = 0.0f;
    f32 w = 1.0f;
    u8 *p;
    u32 n;

    t = 3.1415927f * arg0->unk_638;
    t /= 180.0f;
    t *= 0.5f;
    x = func_08856234(t);
    a.unk_00.unk_0C = func_0885606C(t);
    y = x * z;
    c.unk_0C = 1.0f;
    u = D_089ED318[0];
    x *= w;
    c.unk_00 = u;
    v = D_089ED31C[0];
    a.unk_00.unk_00 = y;
    a.unk_00.unk_04 = y;
    a.unk_00.unk_08 = x;
    c.unk_04 = v;
    c.unk_08 = 0.0f;
    b.unk_00[0].unk_0C = 0.0f;
    b.unk_00[1].unk_0C = 0.0f;
    b.unk_00[2].unk_0C = 0.0f;
    func_08866B54(&b, 3, &c);
    func_089851FC(&a.unk_00, 0, &b);
    func_08864E80((void *)func_08985828((char *)arg0, 2), &b);
    t = arg0->unk_634;
    e = (E *)func_08985828((char *)arg0, 2);

    p = (u8 *)&d;
    n = 0x10;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    d.unk_00 = 1.0f;
    d.unk_04 = 1.0f;
    d.unk_08 = 1.0f;
    d.unk_0C = t;
    e->unk_44 = func_08856400((s32)&d);
    func_089856F4((char *)arg0);
}

}
