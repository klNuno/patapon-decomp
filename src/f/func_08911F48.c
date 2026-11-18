#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} S_08911F48;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0897EE7C(s32, s32 *);
u8 func_089AE274(s32);
void func_089AE564(s32, s32);
s32 func_089AE5A4(s32);

void func_08911F48(S_08911F48 *arg0, void *arg1) {
    s32 temp;
    s32 *p;

    temp = func_08852EB8(arg1);
    if (temp == 0) {
        p = func_0885356C(arg1, 0, 1, 4);
        func_0897EE7C(func_089AE5A4(arg0->unk_1C), p);
        func_089AE564(arg0->unk_1C, 2);
        temp++;
        func_08852EDC(arg1, temp);
    }
    if (temp == 1) {
        if (func_089AE274(func_089AE5A4(arg0->unk_1C)) == 1) {
            func_08852F00(arg1, 0);
        }
    }
}
