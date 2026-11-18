#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} O_088FEB60;

s32 func_088C6454(u8 *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088E3B20(s32, s32, s32);

void func_088FEB60(O_088FEB60 *arg0, void *arg1) {
    s32 h;
    s32 temp;
    s32 *a;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    temp = func_08852EB8(arg1);
    if (temp == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        func_088E3B20(h, *a, *func_0885356C(arg1, 1, 1, 4));
        func_08852EDC(arg1, temp + 1);
        func_08852F00(arg1, 0);
    } else {
        func_08852F00(arg1, 0);
    }
}
