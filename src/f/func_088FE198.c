#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
    u8 pad_14[0x14];
    s32 unk_28;
} A_088FE198;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
void func_088DDFA0(u8 *, u32);
void func_089139A4(void *, s32, void *, s32);
s32 func_08913AE0(char *);
extern f32 D_08AD83F0[];

void func_088FE198(A_088FE198 *arg0, void *arg1) {
    s32 st;

    st = func_08852EB8(arg1);
    switch (st) {
    case 0:
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10 + 0x30, 0, D_08AD83F0, 1);
        func_08852EDC(arg1, st + 1);
        break;
    case 1:
        if (func_08913AE0((char *)(arg0->unk_10 + 0x30))) {
            func_08852EDC(arg1, st + 1);
        }
        break;
    case 2:
        func_088DDFA0(arg0->unk_10, arg0->unk_28);
        func_08852EDC(arg1, st + 1);
        break;
    case 3:
        D_08AD83F0[0] = 0.5f;
        func_089139A4(arg0->unk_10 + 0x30, 1, D_08AD83F0, 1);
        func_08852EDC(arg1, st + 1);
        break;
    case 4:
        if (func_08913AE0((char *)(arg0->unk_10 + 0x30))) {
            func_08852EDC(arg1, st + 1);
        }
        break;
    case 5:
        func_08852F00(arg1, 0);
        break;
    }
}
