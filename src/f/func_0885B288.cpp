#include "common.h"

extern "C" {

class Base_0885B288 {
public:
    u8 pad_00[0x8];
    virtual void v0();
    virtual void v1();
    virtual s32 v2();
};

class Struct_0885B288 : public Base_0885B288 {
public:
    u8 pad_0C[0x80];
    s32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
    s32 unk_A0;
    s32 unk_A4;
    s32 unk_A8;
};

s32 func_0885B288(Struct_0885B288 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    if (arg0->v2() == 0) {
        return 0;
    }
    arg0->unk_8C = arg2;
    arg0->unk_98 = arg4;
    arg0->unk_90 = arg5;
    arg0->unk_94 = arg6;
    arg0->unk_9C = arg7;
    arg0->unk_A0 = arg8;
    arg0->unk_A8 = arg3;
    return 1;
}

}
