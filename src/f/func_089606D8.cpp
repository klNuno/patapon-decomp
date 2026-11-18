#include "common.h"
extern "C" {
struct A {
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};
struct B {
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
};
struct T {
    u8 pad_00[0x110];
    A *unk_110;
    void *unk_114;
    B *unk_118;
    B *unk_11C;
    B *unk_120;
};
extern void func_088F5960(void *);
void func_089606D8(T *arg0) {
    if (arg0->unk_110 != NULL) {
        arg0->unk_110->v10();
    }
    if (arg0->unk_114 != NULL) {
        func_088F5960(arg0->unk_114);
    }
    if (arg0->unk_118 != NULL) {
        arg0->unk_118->v9();
    }
    if (arg0->unk_11C != NULL) {
        arg0->unk_11C->v8();
    }
    if (arg0->unk_120 != NULL) {
        arg0->unk_120->v15();
    }
}
}
