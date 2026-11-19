#include "common.h"

extern "C" {

struct U {
    u8 pad_00[0x58];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual s32 func_1C();
};

struct T : U {
    u8 pad_5C[0x178];
    u8 unk_1D4[1];
};

void func_089B3450(T *, s32, s32);
void func_089B13DC(void *, s32, s32, s32);

void func_089B0C1C(T *arg0, s32 arg1, s32 arg2) {
    func_089B3450(arg0, arg1, arg2);
    if ((u8)arg0->func_1C() != 0) {
        func_089B13DC(arg0->unk_1D4, arg1, arg2, 1);
    }
}

}
