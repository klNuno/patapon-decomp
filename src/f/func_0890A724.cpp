#include "common.h"

extern "C" {
extern u8 D_08A468F0[];

struct V {
    f32 unk_00;
    f32 unk_04;
};

struct C {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual V *unk_28();
};

typedef struct T08909AC8_S {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
    void *unk_28;
    u8 pad_2C[0x4];
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
} T08909AC8_S;

struct T {
    u8 pad_00[8];
    V unk_08;
    C *unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 pad_1C[0xC];
    void *unk_28;
    u8 pad_2C[4];
    V unk_30;
    s32 unk_38;
    s32 unk_3C;
};

void func_0890979C(T08909AC8_S *, s32);
void func_0885429C(V *, V *);
s32 func_088E5574(s32);
void func_0890AA8C(s32, s32, s32, s32);
void func_088E248C(void *, s32);

T *func_0890A724(T *arg0, s32 arg1, s32 arg2, s32 arg3, f32 *arg4, f32 arg5) {
    V *temp1;
    f32 temp2;
    f32 temp3;

    func_0890979C((T08909AC8_S *)arg0, arg1);
    arg0->unk_28 = D_08A468F0;
    arg0->unk_30.unk_00 = arg4[0];
    arg0->unk_30.unk_04 = arg4[1];
    arg0->unk_38 = arg2;
    arg0->unk_3C = arg3;
    arg0->unk_18 = arg5;
    temp1 = arg0->unk_10->unk_28();
    temp2 = arg4[0] - temp1->unk_00;
    temp3 = arg4[1] - temp1->unk_04;
    arg0->unk_08.unk_00 = temp2;
    arg0->unk_08.unk_04 = temp3;
    func_0885429C(&arg0->unk_08, &arg0->unk_08);
    func_0890AA8C(func_088E5574((s32)arg0->unk_10), arg3, 1, 1);
    func_088E248C(arg0->unk_10, 0);
    return arg0;
}
}
