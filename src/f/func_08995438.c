#include "common.h"

typedef struct {
    u8 pad_00[0x1060];
    s32 unk_1060;
    u8 pad_1064[0x679C];
    u8 unk_7800[0x3E980];
    char unk_46180[1];
} T;

s32 func_088586E8(void);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08996808(char *, s8);
s32 func_08998080(s32, s32);
void func_08998D30(s32, s32);
s32 func_089990C8(s32);
s32 func_08999AB0(s32);
s32 func_089B53D8(s32);
void func_089B9890(void *, s32);

void func_08995438(T *arg0, s32 arg1) {
    if (arg1 != 3) {
        if (func_089990C8(arg0->unk_1060) != 0) {
            if (func_08999AB0(func_08998080(arg0->unk_1060, arg1)) == 0) {
                return;
            }
            func_08998D30(arg0->unk_1060, 0x18);
            func_089B9890(arg0->unk_7800, arg1);
            func_08996808(arg0->unk_46180, 0);
            func_08878864(func_089B53D8(func_088586E8()), 0x210004, 2, 1.0f, 0.0f, 0.0f);
        } else {
            func_08998D30(arg0->unk_1060, 0x1C);
        }
    }
}
