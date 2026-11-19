#include "common.h"

extern "C" {

struct C_0886F084 {
    s32 *unk_00;

    void dec() { s32 *temp = unk_00; --*temp; }
    s32 count() const { return unk_00 != NULL ? *unk_00 : 0; }
};

struct H_0886F084 {
    s32 unk_00;
    C_0886F084 unk_04;

    s32 get() const { return unk_00; }
};

struct I_0886F084 {
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

void func_0886E420(s32, s32);

struct SP_0886F084 {
    s32 unk_00;
    I_0886F084 *unk_04;
    H_0886F084 unk_08;

    void release() {
        H_0886F084 *h;

        if (this == NULL) {
            return;
        }
        h = &unk_08;
        if (unk_08.unk_00 != 0) {
            C_0886F084 *c = &unk_08.unk_04;
            c->dec();
            if (c->count() == 0) {
                s32 *n = c->unk_00;
                unk_04->v1(h->unk_00, n, unk_00);
                func_0886E420(h->unk_00, unk_00);
            }
        }
    }
};

struct Obj_0886F084 {
    u8 pad_00[0x10];
    SP_0886F084 unk_10;
    u8 pad_20[0x30];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

void func_0880416C(void *);
extern u8 D_08A44FEC[];

Obj_0886F084 *func_0886F084(Obj_0886F084 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x50) = D_08A44FEC;
        arg0->v6();
        if (&arg0->unk_10 != NULL) {
            arg0->unk_10.release();
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
