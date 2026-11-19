#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} A;

class B {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0x1C20 - 0xD90];
    B unk_1C20;
    u8 pad_1C24[0x32A0 - 0x1C24];
    u8 unk_32A0[0x170400 - 0x32A0];
    A *unk_170400;
    u8 pad_170404[8];
    u8 unk_17040C;
    u8 unk_17040D;
    u8 pad_17040E[2];
    s32 unk_170410;
    u8 unk_170414[1];
} C;

extern u8 D_08A001C4[];
s32 func_088586E8(void);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887ED78(s32, s32);
s32 func_0887ED98(s32, s32);
s32 func_0887EDA8(s32, s32);
u32 func_088AE2A8(void *);
void func_088D43C8(void *, f32, f32);
void func_088D43FC(void *, u8 *, f32);
void func_088D4448(void *, u8 *, f32);
void func_0890B648(char *arg0);
void func_0890B668(void *, s32);
void func_0890BCD4(void *, f32, f32);
void func_0890BF64(f32 *, void *);
void func_0890C080(void *, s32);
void func_0890D3D0(void *, s32);
void func_0891047C(void *, s32);
void func_089261F8(void *, s32);
s32 func_089B53D8(s32);

void func_0891110C(C *arg0, s32 arg1, s32 arg2) {
    f32 temp[2];
    s32 temp2;
    A *temp3;
    u32 temp4;
    f32 temp5;

    temp2 = arg0->unk_170410;
    if (temp2 != 0) {
        arg0->unk_170410 = temp2 - 1;
        return;
    }
    if (arg0->unk_17040C != 0) {
        func_0890BF64(temp, arg0->unk_32A0);
        if ((func_0887ED78(arg2, 0x100) == 0) || (func_0887ED78(arg2, 0x200) == 0)) {
            if (func_0887ED98(arg2, 0x100) != 0) {
                func_0890BCD4(arg0->unk_32A0, (240.0f + temp[0]) - 200.0f, 0.5f);
            } else if (func_0887ED98(arg2, 0x200) != 0) {
                func_0890BCD4(arg0->unk_32A0, 200.0f + (240.0f + temp[0]), 0.5f);
            }
        }
        if (func_0887ED98(arg2, 0x80) != 0) {
            func_0890B668(arg0->unk_32A0, -1);
            temp3 = arg0->unk_170400;
            if (temp3 != NULL) {
                temp4 = func_088AE2A8(temp3->unk_10);
                if (temp4 > 4U) {
                    temp5 = 14.0f - 2.0f * (f32)(temp4 - 4U);
                    func_088D43C8(&arg0->unk_1C20, temp5, temp5);
                } else {
                    func_088D43C8(&arg0->unk_1C20, 14.0f, 14.0f);
                }
                func_088D4448(&arg0->unk_1C20, (u8 *)temp3->unk_10, 0.0f);
            } else {
                func_088D43FC(&arg0->unk_1C20, D_08A001C4, 0.0f);
            }
        } else if (func_0887ED98(arg2, 0x20) != 0) {
            func_0890B668(arg0->unk_32A0, 1);
            temp3 = arg0->unk_170400;
            if (temp3 != NULL) {
                temp4 = func_088AE2A8(temp3->unk_10);
                if (temp4 > 4U) {
                    temp5 = 14.0f - 2.0f * (f32)(temp4 - 4U);
                    func_088D43C8(&arg0->unk_1C20, temp5, temp5);
                } else {
                    func_088D43C8(&arg0->unk_1C20, 14.0f, 14.0f);
                }
                func_088D4448(&arg0->unk_1C20, (u8 *)temp3->unk_10, 0.0f);
            } else {
                func_088D43FC(&arg0->unk_1C20, D_08A001C4, 0.0f);
            }
        }
        if (func_0887EDA8(arg2, 0x4000) != 0) {
            arg0->unk_17040C = 0;
        } else if (func_0887EDA8(arg2, 0x2000) != 0) {
            arg0->unk_17040C = 0;
            func_0890B648((char *)arg0->unk_32A0);
            func_08878864(func_089B53D8(func_088586E8()), 2, 2, 1.0f, 0.0f, 0.0f);
        }
    }
    func_0891047C(arg0, arg1);
    func_0890C080(arg0->unk_32A0, arg1);
    func_0890D3D0(arg0->unk_D90, arg1);
    arg0->unk_1C20.unk_10(arg1);
    func_089261F8(arg0->unk_170414, arg1);
    arg0->unk_17040D = 1;
}

}
