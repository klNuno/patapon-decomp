#include "common.h"

extern "C" {

struct U {
    f32 unk_00, unk_04, unk_08, unk_0C;
};
struct P {
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
};
struct Q {
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
};
struct S {
    u8 pad_00[0xA874];
    Q *unk_A874;
};
struct E_088C11CC;
typedef void (*F)(void);

void func_088215D4(s32);
void *func_08827A50(s32, s32);
extern s32 func_0882851C(s32, s32);
void func_08828E74(F, F);
void func_08828EC8(F, F);
void func_08828F0C(F, F);
void func_088576F8(void);
void func_08857C74(f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08858024(s32);
s32 func_08858B90(void);
s32 func_08858B9C(void);
E_088C11CC *func_08859B14(s32);
s32 func_08859C04(void);
void func_08859D24(s32, s32, s32, s32, s32);
void func_0885A294(void *, s32);
void func_0885A2D0(void *, s32, s32, s32, s32);
void func_088608F0(s32);
Q *func_0886AD10(void *, s32, s32);
void func_0887B8F0(void *);
void func_0887B9B0(void *, F);
void func_0887B9B8(void *, F);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_088A32FC(E_088C11CC *(*)(s32));
void func_088C2EB0(void *, s32, s32, F, F);
void func_088C6820(F, F);
void func_088C6874(F, F);
void func_088C68B8(F, F);
void func_088CAC18(F, F);
void func_088CAC2C(F, F);
void func_089B3F94(void);
void func_089B400C(void);
void func_089B4044(void);
void func_089B4080(void);
void func_089B40BC(void);
void func_089B40F4(void);
void func_089B4130(void);
void func_089B4168(void *);
void func_089B4374(void);
void func_089B4608(s32 *, void *);
void func_089B4610(s32 *, void *);
s32 func_089B4CBC(s32, s32);
s32 func_089B4CDC(void);
void func_089B4CF4(s32);
void func_089B4D00(s32);
s32 func_089B4D64(s32 *, s32 *);
void func_089B4D7C(s32 *);
P **func_089B4D90(s32 *);
void func_089B4D9C(s32 *, s32 *);
void func_089B4DAC(s32 *);
s32 func_089B4DB8(s32);
s32 func_089B4E20(s32);
s32 func_089B4E84(s32);
void func_089B4EE8(void *, s32 *);
s32 func_089B4F78(s32);
void func_089B4FDC(void *);
void func_089B4FE4(void *, s32);
s32 sceRtcGetAccumulativeTime(void);

s32 func_089B4814(u8 **arg0)
{
    s32 temp0, temp1, temp2, temp3, temp4, temp5, temp6;
    struct { U unk_00; u32 pad_10; } temp7;
    U temp8, temp9;
    u8 *temp10 = *arg0;
    s32 temp11, temp12;
    Q *temp13;

    func_088608F0(func_08858B90());
    func_089B4168(temp10);
    func_089B4374();
    temp11 = func_08859C04();
    func_08859D24(temp11, func_08858B90(), 0x40000, 1, 1);
    func_089B4FE4(temp10, 0x3C);
    func_089B4FDC(temp10);
    func_0885A294(temp10 + 0x2774, 0x2C);
    func_0885A2D0(temp10 + 0x2774, 4, 0x20, 4, 4);
    func_08858024(1);
    func_088576F8();
    func_0887C590((char *)&temp7.unk_00, 0.0f, 0.0f, 300.0f, 1.0f);
    func_0887C590((char *)&temp8, 0.0f, 0.0f, 0.0f, 1.0f);
    func_0887C590((char *)&temp9, 0.0f, 1.0f, 0.0f, 0.0f);
    func_08857E5C(&temp7.unk_00, &temp8, &temp9);
    func_08858024(0);
    func_088576F8();
    func_08857C74(0.785f, 480.0f / 272.0f, 50.0f, 5000.0f);
    func_08858024(2);
    func_088576F8();
    func_088215D4(sceRtcGetAccumulativeTime());
    func_0882851C((s32)(temp10 + 0x13EC), sceRtcGetAccumulativeTime());
    func_0882851C((s32)(temp10 + 0x1DB0), sceRtcGetAccumulativeTime());
    func_088C6820(func_089B4080, func_089B40BC);
    func_088C6874(func_089B4080, func_089B40BC);
    func_088C68B8(func_089B40F4, func_089B4130);
    func_08828E74(func_089B4044, func_089B40BC);
    func_08828EC8(func_089B4080, func_089B40BC);
    func_08828F0C(func_089B40F4, func_089B4130);
    func_088CAC18(func_089B4080, func_089B40BC);
    func_088CAC2C(func_089B40F4, func_089B4130);
    func_088A32FC(func_08859B14);
    temp1 = func_089B4F78(func_08858B9C());
    func_089B4EE8(temp10 + 0x286C + 0x7FF8, &temp1);
    temp2 = func_089B4E84(func_08858B9C());
    func_089B4EE8(temp10 + 0x286C + 0x7FF8, &temp2);
    temp3 = func_089B4E20(func_08858B9C());
    func_089B4EE8(temp10 + 0x286C + 0x7FF8, &temp3);
    temp4 = func_089B4DB8(func_08858B9C());
    func_089B4EE8(temp10 + 0x286C + 0x7FF8, &temp4);
    func_089B4DAC(&temp0);
    func_089B4610(&temp5, temp10 + 0x286C + 0x7FF8);
    func_089B4D9C(&temp0, &temp5);
    func_089B4608(&temp6, temp10 + 0x286C + 0x7FF8);
    if (func_089B4D64(&temp0, &temp6) != 0) {
        do {
            if (*func_089B4D90(&temp0) != NULL) {
                (*func_089B4D90(&temp0))->unk_0C();
            }
            func_089B4D7C(&temp0);
            func_089B4608(&temp6, temp10 + 0x286C + 0x7FF8);
        } while (func_089B4D64(&temp0, &temp6) != 0);
    }
    func_089B4D00(func_08858B9C());
    func_089B4CF4(func_08858B9C());
    func_0887B9B0(temp10 + 0x2814, func_089B3F94);
    func_0887B9B8(temp10 + 0x2814, func_089B400C);
    func_0887B8F0(temp10 + 0x2814);
    func_088C2EB0(temp10 + 0x23F8 + 0x7FF8, 0x20, 0x60, func_089B3F94, func_089B400C);
    func_088C2EB0(temp10 + 0x22E8 + 0x7FF8, 0x80, 0x100, func_089B3F94, func_089B400C);
    func_088C2EB0(temp10 + 0x21D8 + 0x7FF8, 0x100, 0x300, func_089B3F94, func_089B400C);
    temp12 = func_089B4CBC(func_089B4CDC(), 0);
    temp11 = func_08858B9C();
    temp13 = (Q *)func_08827A50(0x1F60, temp11);
    if (temp13 != NULL) {
        temp13 = func_0886AD10(temp13, temp11, temp12);
    }
    ((S *)temp10)->unk_A874 = temp13;
    temp13->unk_0C();
    return 1;
}

}
