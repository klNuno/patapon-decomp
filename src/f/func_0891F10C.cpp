#include "common.h"

extern "C" {

struct V0891F10C {
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(s32);
};

typedef struct T0 {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x4C];
    u8 unk_1550[0x150];
    u8 unk_16A0[0x20];
    V0891F10C unk_16C0;
    u8 pad_16C4[0x1D90 - 0x16C4];
    bool unk_1D90;
    u8 pad_1D91[7];
    bool unk_1D98;
} T0;

typedef struct S0 {
    u8 unk_00[0x100];
    s32 unk_100;
} S0;

void func_0881F5C0(void *, s32, s32);
s32 func_0887ED88(s32, s32);
void func_0885DE4C(void *);
void func_08885840(void *, s32);
s32 func_088860C0(void *);
void func_0891EE14(T0 *);

s32 func_0891F10C(T0 *arg0, s32 arg1) {
    S0 s;

    func_0881F5C0(&s, 0, 0x100);
    s.unk_100 = 0xFFFFFF;
    if (arg0->unk_1D90 == 0) {
        if (func_0887ED88(arg0->unk_1500, 0x4000) != 0) {
            arg0->unk_1D90 = !arg0->unk_1D90;
            func_0885DE4C(arg0->unk_16A0);
            return 0x10000;
        }
        if (func_0887ED88(arg0->unk_1500, 0x1000) != 0) {
            arg0->unk_1D98 = !arg0->unk_1D98;
        }
    } else {
        func_08885840(arg0->unk_1550, arg0->unk_1500);
        if (func_088860C0(arg0->unk_1550) != 0) {
            func_0891EE14(arg0);
        }
    }
    arg0->unk_16C0.vfunc_18(arg1);
    return 0x10000;
}

}
