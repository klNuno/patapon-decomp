#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
    u8 pad_1064[0xC];
    u8 unk_1070[0x7800 - 0x1070];
    u8 unk_7800[0xAA90 - 0x7800];
    u8 unk_AA90[0x46180 - 0xAA90];
    u8 unk_46180[1];
} T;

s32 func_08998080(s32, s32);
s32 func_0899A8E0(s32);
void func_089992CC(s32);
void func_089B9A1C(void *);
void func_08996808(char *, s8);
void func_089967F0(void *);
void func_089B88A8(void *);
void func_089A3978(void *, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_08995508(T *arg0, s32 arg1) {
    if (func_0899A8E0(func_08998080(arg0->unk_1060, arg1)) != 0) {
        func_089992CC(arg0->unk_1060);
        func_089B9A1C(arg0->unk_7800);
        func_08996808((char *)arg0->unk_46180, 0);
        func_089967F0(arg0->unk_46180);
        func_089B88A8(arg0->unk_1070);
        func_089A3978(arg0->unk_AA90, arg1);
        func_08878864(func_089B53D8(func_088586E8()), 0x210005, 2, 1.0f, 0.0f, 0.0f);
    }
}
