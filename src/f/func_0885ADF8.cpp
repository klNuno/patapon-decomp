#include "common.h"

extern "C" {

class B {
public:
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual s32 v2();
};

class T : public B {
public:
    u8 pad_0C[0x80];
    s32 unk_8C;
    u8 unk_90;
    u8 unk_91;
    u8 unk_92;
    u8 pad_93[0x1];
    s32 unk_94;
    s32 unk_98;
    u8 pad_9C[0x4];
    s32 unk_A0;
};

s32 func_0885ADF8(T *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, s32 arg7, s32 arg8) {
    if (arg0->v2() == 0) {
        return 0;
    }
    arg0->unk_8C = arg2;
    arg0->unk_92 = arg4;
    arg0->unk_90 = arg5;
    arg0->unk_91 = arg6;
    arg0->unk_94 = arg7;
    arg0->unk_98 = arg8;
    arg0->unk_A0 = arg3;
    return 1;
}

}
