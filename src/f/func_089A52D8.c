#include "common.h"

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0x3F94];
    u8 unk_5004[0x335D4];
    s32 unk_385D8;
} T1;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_08998080(s32, s32);
u32 func_0899A900(s32);
s32 func_0899A908(s32, u32);
s32 func_0899E1A4(s32, u32);
void func_08994818(void *, s32, u32, u32, s32);

void func_089A52D8(T1 *arg0, s32 arg1) {
    u32 n;
    u32 i;
    s32 x;
    u32 j;
    arg0->unk_385D8 = 0;
    if (arg1 != 1) {
        func_08878864(func_089B53D8(func_088586E8()), 0x210009, 2, 1.0f, 0.0f, 0.0f);
        n = func_0899A900(func_08998080(arg0->unk_1064, arg0->unk_106C));
        i = 0;
        if (n != 0) {
            do {
                x = func_0899A908(func_08998080(arg0->unk_1064, arg0->unk_106C), i);
                j = 0;
                do {
                    if ((u8)func_0899E1A4(x, j) != 0) {
                        func_08994818(&arg0->unk_5004, arg0->unk_106C, i, j, 1);
                        ++j;
                    } else {
                        ++j;
                    }
                } while (j < 3U);
                ++i;
            } while (i < n);
        }
    }
}
