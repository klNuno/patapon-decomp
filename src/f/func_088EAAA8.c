#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    u8 *unk_36B10;
} T0;

typedef struct {
    u8 pad_00[0x14];
    T0 *unk_14;
} T;

extern s32 *func_0885356C(s32, s32, s32, s32);
extern void func_08852F00(s32, s32);
extern void func_089400D4(void *, s32);

void func_088EAAA8(T *arg0, s32 arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T0 *temp2 = arg0->unk_14;
    if (temp2 != NULL) {
        func_089400D4(temp2->unk_36B10 + 0x1040, *temp);
    }
    func_08852F00(arg1, 0);
}
