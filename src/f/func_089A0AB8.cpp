#include "common.h"

extern "C" {
class V {
public:
    virtual s32 *func_08(void *, s32);
    virtual void func_0C(void *, s32 *, s32);
};

struct E {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    s32 *unk_0C;
};

class B {
public:
    u8 pad_00[0x10];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34();
};

class C {
public:
    virtual void func_08();
    virtual void func_0C();
};

struct S {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    B *unk_08;
    u8 pad_0C[0x28];
    u8 unk_34[0xD90];
    s32 unk_DC4;
    u8 unk_DC8[0xC];
    u8 unk_DD4[0xC];
    u8 pad_DE0[0x130];
    E *unk_F10;
    u32 unk_F14;
};

struct O {
    s32 unk_00, unk_04, unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    void *unk_10;
    f32 unk_14, unk_18, unk_1C;
    S *unk_20;
};

struct F {
    u8 pad_00[4];
    s32 unk_04, unk_08;
};

void func_088148F0(s32, s32);
void func_0881F5C0(void *, s32, s32);
s32 func_08827A50(s32, s32);
extern s32 func_08827AD4(void);
s32 func_08858BB4(void);
void func_0885F7EC(void *, s32);
s32 func_0888AFF4(s32);
void func_08993614(void *);
s32 func_0899F140(s32);
void func_089A0D04(F *, s32, E *);
extern f32 D_08A06F10[], D_08A06F18[], D_08A06F1C[];
extern u8 D_08A44A3C[], D_08A48658[];

void func_089A0AB8(S *arg0, s32 arg1) {
    E e;
    volatile f32 a[3];
    u32 i, j;
    s32 t, x;
    E **p;
    O *o;
    s32 *r;

    if (((F *)func_0899F140(arg0->unk_04))->unk_08 == 1) return;
    i = 0;
    if (arg0->unk_F14 != 0) {
        j = 0;
        p = &arg0->unk_F10;
        do {
            func_08993614(((E *)((u8 *)*p + j))->unk_08);
            i++;
            j += 0x10;
        } while (i < arg0->unk_F14);
    }
    func_088148F0(4, 0);
    arg0->unk_08->func_34();
    ((C *)arg0->unk_34)->func_0C();
    ((F *)func_0899F140(arg0->unk_04))->unk_08 = 0;
    ((F *)func_0899F140(arg0->unk_04))->unk_04 = 0;
    arg0->unk_00 = 0;
    arg0->unk_DC4 = 0;
    func_0881F5C0(arg0->unk_DC8, 0, 0xC);
    func_0881F5C0(arg0->unk_DD4, 0, 0xC);
    t = func_08858BB4();
    if ((o = (O *)func_08827A50(0x24, func_08858BB4())) != NULL) {
        x = func_0888AFF4(arg1);
        a[0] = D_08A06F10[1];
        a[1] = D_08A06F18[0];
        a[2] = D_08A06F1C[0];
        o->unk_10 = D_08A44A3C;
        o->unk_0C = 1;
        o->unk_00 = 0;
        o->unk_08 = 0;
        o->unk_04 = 0;
        o->unk_10 = D_08A48658;
        o->unk_0C = 0;
        o->unk_20 = arg0;
        typedef struct { f32 unk_00[3]; } P;
        *(P *)&o->unk_14 = *(P *)a;
        o->unk_08 = x;
    }
    e.unk_00 = t;
    e.unk_04 = (V *)func_08827AD4();
    e.unk_08 = o;
    e.unk_0C = e.unk_04->func_08(o, *(volatile s32 *)&e.unk_00);
    *e.unk_0C = 1;
    func_089A0D04((F *)func_0899F140(arg0->unk_04), arg1, &e);
    if (e.unk_08 != NULL) {
        --*e.unk_0C;
        r = *(s32 *volatile *)&e.unk_0C;
        if (r != NULL) {
            r = (s32 *)*r;
        } else {
            r = NULL;
        }
        if (r == NULL) {
            e.unk_04->func_0C(e.unk_08, e.unk_0C, e.unk_00);
            func_0885F7EC(e.unk_08, e.unk_00);
        }
    }
}
}
