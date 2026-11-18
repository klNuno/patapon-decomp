#include "common.h"

extern "C" {

struct T088D4ED4_B {
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1C();
    virtual void vfunc_20();
    virtual void vfunc_24();
};

struct T088D4ED4 : T088D4ED4_B {
    u8 pad_04[0xC];
    u8 unk_10[0x6D0];
    u8 *unk_6E0;
    u8 pad_6E4[0xC];
    f32 unk_6F0;
    f32 unk_6F4;
    f32 unk_6F8;
    f32 unk_6FC;
    f32 unk_700;
    f32 unk_704;
    f32 unk_708;
    f32 unk_70C;
    s32 unk_710;
    s32 unk_714;
    s32 unk_718;
    s32 unk_71C;
    s32 unk_720;
    u8 pad_724[0x4];
    f32 unk_728;
    f32 unk_72C;
    s32 unk_730;
    s32 unk_734;
};

void func_088D4ED4(T088D4ED4 *arg0) {
    arg0->unk_6E0 = arg0->unk_10;
    arg0->unk_720 = 0;
    arg0->unk_71C = 0;
    arg0->unk_710 = 1;
    arg0->unk_714 = 1;
    arg0->vfunc_24();
    arg0->unk_718 = 1;
    arg0->unk_708 = 100.0f;
    arg0->unk_70C = 100.0f;
    arg0->unk_700 = 50.0f;
    arg0->unk_704 = 50.0f;
    arg0->unk_6F0 = 1.0f;
    arg0->unk_6F4 = 1.0f;
    arg0->unk_6F8 = 1.0f;
    arg0->unk_6FC = 1.0f;
    arg0->unk_728 = 14.0f;
    arg0->unk_72C = 14.0f;
    arg0->unk_730 = 0;
    arg0->unk_734 = 0;
}

}
