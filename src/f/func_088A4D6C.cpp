#include "common.h"

extern "C" {

struct E {
    u8 pad_00[0x80];
};

struct T {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
};

struct U {
    u8 pad_00[0x108];
    s32 unk_108;
};

struct V {
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58(void *);
};

struct S {
    u8 pad_00[0x381];
    u8 unk_381;
    u8 pad_382[0x1E];
    T *unk_3A0;
    u8 pad_3A4[0x184];
    E *unk_528;
    s32 unk_52C;
    u8 pad_530[0x10];
    u8 unk_540[0xBB0];
    s32 unk_10F0;
};

extern void func_088A8600(void *, s32);
s32 func_08976100(u32, s32);
void *func_0896CE18(void *, char *, s32, s32);
void func_088B3C38(void *, s32, s32, s32, s32);
extern char D_089FAAF0[];
extern const f32 D_089FAB20[];
extern char D_089FAB28[];

void func_088A4D6C(S *arg0, void *arg1, s32 arg2) {
    union {
        f32 unk_00[2];
        s32 unk_00i[2];
    } t;
    E *p;
    E **d;
    s32 *n;
    s32 u;
    U *v;

    ((V *)arg0)->unk_58(arg1);
    p = arg0->unk_528;
    d = &arg0->unk_528;
    if ((u32)p != (u32)(p + arg0->unk_52C)) {
        n = &arg0->unk_52C;
        do {
            func_088A8600(p, 0);
            p++;
        } while (p != *d + *n);
    }
    t.unk_00[0] = D_089FAB20[0];
    t.unk_00[1] = D_089FAB20[1];
    u = func_08976100(0x1A, t.unk_00i[arg0->unk_3A0->unk_92E4]);
    arg0->unk_10F0 = u;
    v = (U *)func_0896CE18(func_0896CE18((void *)u, D_089FAAF0, 0, 1), D_089FAB28, 0, 1);
    func_088B3C38(arg0->unk_540, arg2, 0, v->unk_108, arg0->unk_10F0);
    arg0->unk_381 = 1;
}

}
