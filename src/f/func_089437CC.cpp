#include "common.h"

extern "C" {

extern u8 D_08A473F4[];
extern u8 D_08A475BC[];
extern u8 D_08A475D4[];
extern u8 D_08A4761C[];
extern u8 D_08A4762C[];
extern u8 D_08A47638[];
extern u8 D_08A47648[];

struct E {
    s32 unk_00;
    s32 unk_04;
    E *unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
};
struct A {
    virtual E *v08(u32, s32);
};
struct L {
    L *unk_00;
    L *unk_04;
    u8 pad_08[0x1C];
    u8 *unk_24;
    s32 unk_28;
};
struct N {
    N *unk_00;
    N *unk_04;
    u8 pad_08[0x10];
};
struct V {
    N *unk_00;
    N *unk_04;
    virtual N *v08();
    virtual u32 v0C();
};
struct T {
    N *unk_00;
    N *unk_04;
    u8 *unk_08;
    u8 unk_0C[0x304];
    u32 unk_310;
    void *unk_314;
    void *unk_318;
    T *unk_31C;
    s32 unk_320;
};
struct W {
    virtual void v08(); virtual void v0C(); virtual void v10();
    virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28();
    virtual void v2C(); virtual void v30(); virtual void v34();
    virtual void v38(); virtual void v3C(); virtual void v40();
    virtual void v44(); virtual void v48();
};
struct S {
    u8 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[8];
    u8 *unk_18;
    u8 pad_1C[0x14];
    A *unk_30;
    E *unk_34;
    s32 unk_38;
    A *unk_3C;
    L unk_40;
    T unk_6C;
    s32 unk_390[9];
};
void func_08944154(void *);
void func_0894424C(L *);
void func_0895EFB8(void *, s32);

S *func_089437CC(S *arg0, A *arg1, s32 arg2) {
    E *p;
    E *e;
    E *end;
    L *l;
    T *t;
    N *n;
    N *m;
    u32 i;

    arg0->unk_00 = D_08A47648;
    func_0895EFB8(arg0->unk_10, (s32)arg1);
    arg0->unk_00 = D_08A475BC;
    arg0->unk_18 = D_08A475D4;
    arg0->unk_30 = arg1;
    arg0->unk_34 = NULL;
    arg0->unk_38 = arg2;
    arg0->unk_3C = *(A *volatile *)&arg0->unk_30;
    s32 count = *(volatile s32 *)&arg0->unk_38;
    if (count != 0) {
        p = arg0->unk_3C->v08(count * sizeof(E), 4);
        arg0->unk_34 = p;
        end = p + arg0->unk_38;
        do {
            e = p++;
            if (e != NULL) {
                e->unk_1C = D_08A47638;
                e->unk_00 = 0;
                e->unk_04 = 0;
                e->unk_08 = NULL;
                e->unk_0C = 0;
                e->unk_20 = 0;
                e->unk_24 = 0;
                e->unk_28 = 0;
                e->unk_2C = 0;
                e->unk_08 = e;
            }
        } while (p != end);
    }
    l = &arg0->unk_40;
    l->unk_24 = D_08A4762C;
    func_0894424C(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_08944154(l);
    arg0->unk_40.unk_28 = 0;
    arg0->unk_6C.unk_08 = D_08A473F4;
    t = &arg0->unk_6C;
    t->unk_08 = D_08A4761C;
    t->unk_310 = ((u32)t->unk_0C + 3) & ~3U;
    n = ((V *)t)->v08();
    t->unk_00 = n;
    t->unk_04 = n + (((V *)t)->v0C() - 1);
    n->unk_04 = (N *)t;
    t->unk_04->unk_00 = (N *)t;
    i = 1;
    if (((V *)t)->v0C() > 1U) {
        do {
            m = n++;
            m->unk_00 = n;
            n->unk_04 = m;
            ++i;
        } while (i < ((V *)t)->v0C());
    }
    t->unk_31C = t;
    t->unk_320 = 0;
    t->unk_314 = &t->unk_314;
    t->unk_318 = &t->unk_314;
    arg0->unk_390[0] = 0;
    arg0->unk_390[1] = 0;
    arg0->unk_390[2] = 0;
    arg0->unk_390[3] = 0;
    arg0->unk_390[4] = 0;
    arg0->unk_390[5] = 0;
    arg0->unk_390[6] = 0;
    arg0->unk_390[7] = 0;
    arg0->unk_390[8] = 0;
    ((W *)arg0)->v48();
    return arg0;
}

}
