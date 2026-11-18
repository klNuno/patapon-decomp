#include "common.h"

extern "C" {

struct T {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual f32 *unk_28();
};

struct U {
    u8 pad_00[0x10];
    T *unk_10;
    u8 pad_14[0x14];
    void *unk_28;
    u8 pad_2C[0x14];
    s32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
};

extern u8 D_08A46B0C[];
void *func_08909AC8(void *, s32, s32, s32, s32);
f32 func_08918B58(U *);
f32 func_08918C40(U *);
f32 fabsf(f32);

U *func_08918A44(U *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, f32 arg6) {
    f32 *temp;
    f32 temp2;

    func_08909AC8(arg0, arg1, arg2, arg3, 0);
    arg0->unk_28 = D_08A46B0C;
    arg0->unk_40 = arg4;
    arg0->unk_50 = arg6;
    temp = arg0->unk_10->unk_28();
    temp2 = fabsf(0.5f * arg5);
    arg0->unk_44 = *temp + temp2;
    arg0->unk_48 = *temp - temp2;
    arg0->unk_4C = func_08918B58(arg0);
    arg0->unk_54 = func_08918C40(arg0);
    return arg0;
}

}
