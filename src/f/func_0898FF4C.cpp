#include "common.h"

struct T1 {
    f32 unk_00;
    f32 unk_04;
};

class T2 {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual T1 *unk_28();
};

struct T08909AC8_S {
    u8 pad_00[8];
    T1 unk_08;
    s32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 pad_1C[0xC];
    void *unk_28;
    u8 pad_2C[0x14];
    s32 unk_40;
    s32 unk_44;
    T1 unk_48;
    f32 unk_50;
    u8 pad_54[4];
    u8 unk_58;
};

extern "C" {

extern u8 D_08A48514[];
T08909AC8_S *func_08909AC8(T08909AC8_S *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
void func_0885429C(T1 *, T1 *);
s32 func_088E5574(s32);
void func_0890AA8C(s32, s32, s32, s32);
void func_088E248C(void *, s32);

T08909AC8_S *func_0898FF4C(T08909AC8_S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, T1 *arg5, f32 arg6, u8 arg7) {
    T1 *p;
    f32 x, y;
    func_08909AC8(arg0, arg1, arg2, arg3, 0);
    arg0->unk_28 = D_08A48514;
    arg0->unk_40 = 0;
    x = arg5->unk_00;
    arg0->unk_44 = arg4;
    y = arg5->unk_04;
    arg0->unk_48.unk_00 = x;
    arg0->unk_48.unk_04 = y;
    arg0->unk_50 = arg6;
    arg0->unk_58 = arg7;
    arg0->unk_18 = arg6;
    p = ((T2 *)arg0->unk_10)->unk_28();
    x = arg5->unk_00 - p->unk_00;
    y = arg5->unk_04 - p->unk_04;
    arg0->unk_08.unk_00 = x;
    arg0->unk_08.unk_04 = y;
    func_0885429C(&arg0->unk_08, &arg0->unk_08);
    func_0890AA8C(func_088E5574(arg0->unk_10), arg4, 1, 1);
    func_088E248C((void *)arg0->unk_10, 0);
    return arg0;
}

}
