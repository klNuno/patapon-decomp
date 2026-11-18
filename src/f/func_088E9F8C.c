#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} T088E9F8C_B;

typedef struct {
    u8 pad_00[0x14];
    T088E9F8C_B *unk_14;
} T088E9F8C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08895B50(s32, s32);

void func_088E9F8C(T088E9F8C *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        *temp_s0 = func_08895B50(func_08899E18(arg0->unk_14->unk_36B10, 1), *temp_s1);
    }
    func_08852F00(arg1, 0);
}
