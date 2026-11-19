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
} Mtx;

class U {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

struct T {
    u8 pad_00[0x240];
    U unk_240;
    u8 pad_2C4[0x1C];
    u8 unk_2E0;
    u8 pad_2E1[3];
    f32 unk_2E4;
    f32 unk_2E8;
};

extern f32 D_089E62C8[];
extern f32 D_089E62D0[];
extern f32 D_089E62D4[];

s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08866B54(Mtx *, s32, void *);
extern int func_08864E80(char *, char *);

void func_0891CEBC(T *arg0) {
    struct { u8 pad_00[8]; f32 unk_08; } temp;
    u32 *v;
    Mtx a;
    Mtx b;
    V c, d, e, f;
    f32 x, y, z, r, p, q;
    u32 u;
    f32 m, n;

    if (arg0->unk_2E0 == 0) {
        r = 0.0f;
    } else {
        z = arg0->unk_2E8;
        temp.unk_08 = z;
        u = *(u32 *)&temp.unk_08;
        v = (u32 *)&temp.unk_08;
        u = (u << 1) >> 1;
        *(u32 *)&temp.unk_08 = u;
        if (*(f32 *&)v <= 0.0001f) {
            r = 1.0f;
        } else {
            r = arg0->unk_2E4 / z;
        }
    }
    p = D_089E62C8[1];
    q = D_089E62C8[0];
    m = D_089E62D4[0] - p;
    n = D_089E62D0[0] - q;
    y = p + (m *= r);
    x = q + (n *= r);
    func_0887C5A8(&b);
    func_08858024(1);
    func_088581B0((s32)&b);
    func_08858024(2);
    func_0887C590((char *)&c, 0.0f, 0.0f, 0.0f, 1.0f);
    z = -b.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    c.unk_00 = -b.unk_00[3].unk_00 + (x - 240.0f) * z;
    c.unk_04 = -b.unk_00[3].unk_04 + (136.0f - y) * z;
    func_08866B54(&a, 0, func_0887C590((char *)&d, z, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a, 1, func_0887C590((char *)&e, 0.0f, z, 0.0f, 0.0f));
    func_08866B54(&a, 2, func_0887C590((char *)&f, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a, 3, &c);
    func_08864E80((char *)&arg0->unk_240, (char *)&a);
    arg0->unk_240.unk_10();
}

}
