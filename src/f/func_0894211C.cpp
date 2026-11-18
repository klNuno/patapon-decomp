#include "common.h"

extern "C" {

typedef struct T0894211C_S {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
} T0894211C_S;

class T0894211C_O {
public:
    u8 pad_00[0x1C0];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual s32 vfunc_10(T0894211C_S *);
};

s32 func_089424C0(T0894211C_O *);
void func_0894259C(T0894211C_S *);
void func_089425C8(T0894211C_S *, s32, s32, s32, s32, s32, s32);

s32 func_0894211C(T0894211C_O *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    T0894211C_S sp28;
    s32 temp;

    temp = func_089424C0(arg0);
    func_0894259C(&sp28);
    func_089425C8(&sp28, temp, 0, arg3, arg4, 1, 0);
    sp28.unk_08 = arg2;
    sp28.unk_04 = -1;
    return arg0->vfunc_10(&sp28) != 0;
}

}
