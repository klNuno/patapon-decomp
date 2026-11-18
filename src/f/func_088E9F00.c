#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088E9F00_14;

typedef struct {
    u8 pad_00[0x14];
    S088E9F00_14 *unk_14;
} S088E9F00;

void func_08852F00(void *, s32);
void func_08852FD8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08895ABC(s32, s32);
s32 func_08899E18(s32, s32);

void func_088E9F00(S088E9F00 *arg0, void *arg1) {
    s32 *temp;

    temp = func_0885356C(arg1, 0, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_08852FD8(arg1, func_08895ABC(func_08899E18(arg0->unk_14->unk_36B10, 1), *temp) != 0);
    }
    func_08852F00(arg1, 0);
}
