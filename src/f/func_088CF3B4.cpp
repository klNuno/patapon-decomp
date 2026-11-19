#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x30];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32, f32);
};

struct B {
    virtual void unk_08();
    virtual void unk_0C(A *, s32 *, s32);
};

struct H {
    s32 unk_00;
    B *unk_04;
    A *unk_08;
    s32 *unk_0C;
    void func_00() { if (*(A *volatile *)&unk_08 != NULL) ++**(s32 *volatile *)&unk_0C; }
};

struct N {
    N *unk_00;
    N *unk_04;
    H unk_08;
};

struct I {
    N *unk_00;
    s32 func_00(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool func_04(const I &arg0) const { return !(bool)func_00(arg0); }
};

struct T {
    u8 pad_00[0x314];
    N unk_314;
    u8 pad_32C[0x4C];
    s32 unk_378;
    s32 unk_37C;
};

struct U {
    s32 unk_00;
    u8 pad_04[0x1C];
    u32 unk_20;
};

struct T3;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08878FE0(T3 *arg0, void *arg1, f32 arg2);
s32 func_088CFE48(s32 arg0, s32 arg1);
void func_088BBD9C(A *, s32);

void func_088CF3B4(T *arg0, s32 arg1, s32 arg2, f32 arg3) {
    struct { u8 pad_00[8]; H unk_08; u8 pad_18[8]; } temp;
    I p;
    I q;
    U *r;
    s32 *temp2;

    r = (U *)func_088CFE48((s32)arg0, arg2);
    r->unk_00 = arg1;
    if (r->unk_20 & 1) {
        if (arg0->unk_378 == 0 && arg0->unk_37C > 0 && arg1 == 1) {
            func_08878864(func_089B53D8(func_088586E8()), 0x30202, 2, 1.0f, arg3, 0.0f);
        }
        if (arg0->unk_378 == 1 && arg1 == 0) {
            func_08878FE0((T3 *)func_089B53D8(func_088586E8()), (void *)0x30202, arg3);
        }
        arg0->unk_378 = arg1;
        p.unk_00 = arg0->unk_314.unk_00;
        q.unk_00 = &arg0->unk_314;
        if (p.func_04(q)) {
            do {
                H *h = &temp.unk_08;
                temp.unk_08 = p.unk_00->unk_08;
                h->func_00();
                temp.unk_08.unk_08->unk_10(arg1, arg3);
                if (*(A *volatile *)&temp.unk_08.unk_08 == NULL) goto next;
                s32 *temp3 = *(s32 *volatile *)&temp.unk_08.unk_0C;
                temp2 = *(s32 *volatile *)&temp.unk_08.unk_0C;
                *temp3 -= 1;
                if ((temp2 != NULL ? *temp2 : 0) == 0) {
                    temp.unk_08.unk_04->unk_0C(temp.unk_08.unk_08, temp2, temp.unk_08.unk_00);
                    func_088BBD9C(temp.unk_08.unk_08, temp.unk_08.unk_00);
                }
            next:
                p.unk_00 = p.unk_00->unk_00;
            } while (p.func_04(q));
        }
    }
}

}
