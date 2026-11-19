#include "common.h"

extern "C" {

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(u8 *);
};

struct B {
    u8 pad_00[0x22178];
    u8 unk_22178[1];
};

struct S {
    u8 pad_00[8];
    s32 unk_08[8];
    u8 pad_28[4];
};

struct P;

struct T {
    u8 pad_00[0x710];
    u32 unk_710, unk_714;
    s32 unk_718;
    u8 pad_71C[0x28];
    A *unk_744;
    B *unk_748;
    u8 pad_74C[0x190];
    S *unk_8DC;
    u8 pad_8E0[0x14];
    P *unk_8F4;
    u8 unk_8F8[4];
};

extern f32 D_08A04AD0[];
extern f32 D_08A04AD8[];
extern u8 D_08A04AE0[];
struct Unk { f32 unk_00[4]; };
void func_0886575C(Unk *, s32, s32);
extern s32 func_08865870(void);
void func_08926200(void *, u8 *, s32);
void func_08953A14(S *arg0, P *arg1, s32 arg2, void *arg3);
void func_08953CF0(S *, P *, u32, f32 *, s32);
s32 func_08954034(void);

static inline s32 func_00(B *arg0, S *arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    u8 *p = arg0->unk_22178;
    u32 i = 0;
    u8 *q = (u8 *)arg1;
    do {
        s32 n = *(s32 *)(q + 8);
        if (n > 0 && p[n] != 0) {
            return 0;
        }
        ++i;
        q += 4;
    } while (i < 8);
    return 1;
}

static inline f32 func_04(T *arg0, f32 arg1) {
    u32 d = arg0->unk_714;
    if (d == 0) {
        return arg1;
    }
    f32 y = (f32)arg0->unk_710;
    return y / (f32)d;
}

void func_089542E8(T *arg0) {
    f32 a[2];
    struct {
        f32 unk_00[3];
        volatile f32 unk_0C;
        u8 pad_10[8];
    } b;
    f32 x = 0.0f;
    u32 i;
    s32 n;
    S **p;
    S *q;
    B *r;

    switch (arg0->unk_718) {
        case 1:
            a[0] = 2.0f;
            a[1] = 254.0f;
            func_08926200(arg0->unk_8F8, (u8 *)a, 0);
            return;
        case 2:
            x = func_04(arg0, x);
            break;
        case 5:
            x = 1.0f - func_04(arg0, x);
            break;
        case 4:
            x = 1.0f;
            break;
    }

    b.unk_00[0] = D_08A04AD0[0];
    b.unk_00[1] = D_08A04AD0[1];
    b.unk_00[2] = D_08A04AD8[0];
    b.unk_0C = D_08A04AD8[1];
    b.unk_0C = x;
    arg0->unk_744->unk_18(D_08A04AE0);
    func_0886575C((Unk *)&b, 1, 1);
    i = 0;
    if (func_08954034() != 0) {
        n = 0;
        p = &arg0->unk_8DC;
        do {
            q = (S *)((u8 *)*p + n);
            r = arg0->unk_748;
            if (func_00(r, q)) {
                func_08953CF0(q, arg0->unk_8F4, i, b.unk_00, i == 6);
            }
            n += sizeof(S);
            ++i;
        } while (i < (u32)func_08954034());
    }
    func_08865870();

    arg0->unk_744->unk_18(D_08A04AE0);
    func_0886575C((Unk *)&b, 1, 1);
    i = 0;
    if (func_08954034() != 0) {
        n = 0;
        p = &arg0->unk_8DC;
        do {
            q = (S *)((u8 *)*p + n);
            r = arg0->unk_748;
            if (func_00(r, q)) {
                func_08953A14(q, arg0->unk_8F4, i, &b);
            }
            n += sizeof(S);
            ++i;
        } while (i < (u32)func_08954034());
    }
    func_08865870();
}

}
