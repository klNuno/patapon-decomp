#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Struct_08941ABC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08942640(void *, s32, s32);

void func_08941ABC(Struct_08941ABC *arg0, void *arg1) {
    s32 *temp_s0;
    s32 *temp_v0;
    u8 *temp_v1;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_v0 = func_0885356C(arg1, 1, 1, 4);
    temp_v1 = arg0->unk_10;
    if (temp_v1 != 0) {
        func_08942640(temp_v1 + 0x1B0, *temp_s0, *temp_v0);
    }
    func_08852F00(arg1, 0);
}
