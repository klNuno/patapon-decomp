#include "common.h"

typedef struct {
    u8 pad_00[0x16D15C];
    s32 unk_16D15C;
} S;

void func_0890BCD4(void *, f32, f32);

void func_0890B8C0(S *arg0, f32 arg1) {
    s32 temp = arg0->unk_16D15C;

    func_0890BCD4(arg0, (f32)(temp * 60), arg1);
}
