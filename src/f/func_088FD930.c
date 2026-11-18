#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    char *unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
s32 func_08913AE0(char *);
void func_089139A4(void *, s32, void *, s32);
extern f32 D_08AD83F0[];

void func_088FD930(S *arg0, void *arg1) {
    s32 temp = func_08852EB8(arg1);
    if (temp == 0) {
        s32 *a = func_0885356C(arg1, 0, 1, 4);
        f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
        s32 *c = func_0885356C(arg1, 2, 1, 4);
        D_08AD83F0[0] = *b;
        func_089139A4(arg0->unk_10 + 0x30, *a, D_08AD83F0, 1);
        func_08852EDC(arg1, temp + 1);
        if (*c == 0) {
            func_08852F00(arg1, 0);
        }
    } else {
        if (func_08913AE0(arg0->unk_10 + 0x30) != 0) {
            func_08852F00(arg1, 0);
        }
    }
}
