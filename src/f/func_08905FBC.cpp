#include "common.h"

extern "C" {

struct A_08905FBC {
    u8 pad_00[0x15C];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8(s32, s32, s32 *);
};

typedef struct {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0[4];
} S_08905FBC;

typedef struct {
    u8 pad_00[0x10];
    S_08905FBC *unk_10;
} Obj_08905FBC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
A_08905FBC *func_0898A324(void *);

void func_08905FBC(Obj_08905FBC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_0898A324(arg0->unk_10->unk_1212D0)->v8(*a, *b, c);
    func_08852F00(arg1, 0);
}

}
