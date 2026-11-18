#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[8];
    u8 unk_1C;
    u8 pad_1D[0x13];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 unk_3C;
} T;

s32 func_088E5574(s32);
s32 func_0890ABC8(s32);
void func_0890AA8C(s32, s32, s32, s32);
void func_0890AC9C(s32, f32);
void func_0890AB10(void *, s32, f32, f32, s32);

void func_08913C3C(T *arg0) {
    if (func_0890ABC8(func_088E5574(arg0->unk_10)) != 0) {
        if (--arg0->unk_38 <= 0) {
            if (arg0->unk_30 >= 0) {
                func_0890AA8C(func_088E5574(arg0->unk_10), *(s32 *)&arg0->unk_30, 1, 1);
                if (arg0->unk_3C != 0) {
                    func_0890AC9C(func_088E5574(arg0->unk_10), 1.0f);
                }
            }
            arg0->unk_1C = 1;
        } else {
            func_0890AB10((void *)func_088E5574(arg0->unk_10), arg0->unk_34, -1.0f, -1.0f, 0);
        }
    }
}
