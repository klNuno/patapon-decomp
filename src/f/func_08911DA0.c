#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} T;

void func_08852F00(void *, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
u8 func_089AE274(s32);
void func_089AE564(s32, s32);
s32 func_089AE590(s32);

void func_08911DA0(T *arg0, void *arg1) {
    s32 temp;

    temp = func_08852EB8(arg1);
    if (temp == 0) {
        func_089AE564(arg0->unk_1C, 0);
        temp++;
        func_08852EDC(arg1, temp);
    }
    if (temp == 1) {
        if (func_089AE274(func_089AE590(arg0->unk_1C)) == 1) {
            func_08852F00(arg1, 0);
        }
    }
}
