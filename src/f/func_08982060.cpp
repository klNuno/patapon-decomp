#include "common.h"

extern "C" {

class A {
public:
    virtual s32 *v0(s32 arg0, s32 arg1);
};

class B {
public:
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
};

typedef struct {
    s32 unk_00;
    A *unk_04;
    B *unk_08;
    s32 *unk_0C;
} T;

s32 func_0888B03C(s32 *, char *);
s32 func_0888B078(s32 *, char *);
B *func_08975570(s32 arg0, s32 arg1);
A *func_08827AD4(void);

s32 func_08982060(T *arg0, s32 arg1, s32 *arg2, char *arg3, s32 arg4) {
    s32 a = func_0888B03C(arg2, arg3);
    s32 b = func_0888B078(arg2, arg3);
    B *o = func_08975570(arg1, a);
    arg0->unk_00 = arg1;
    arg0->unk_04 = func_08827AD4();
    arg0->unk_08 = o;
    arg0->unk_0C = arg0->unk_04->v0((s32)o, arg0->unk_00);
    *arg0->unk_0C = 1;
    arg0->unk_08->v2(a, b, arg4, 0);
    return 0;
}

}
