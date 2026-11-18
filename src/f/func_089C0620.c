#include "common.h"

typedef struct {
    u8 pad_00[0x182C];
    u32 unk_182C;
    u32 unk_1830;
    u32 unk_1834;
    u32 unk_1838;
} A;

void func_089C0620(A *arg0, f32 *arg1, f32 *arg2, u32 *arg3) {
    u32 temp;
    u32 temp2;
    u32 temp3;
    u32 temp4;
    *arg1 = *arg2 = (f32)(*arg3 = 0);
    temp3 = *(volatile u32 *)&arg0->unk_1834;
    temp4 = *(volatile u32 *)&arg0->unk_182C;
    temp = temp4 + temp3;
    temp2 = temp + (arg0->unk_1830 + arg0->unk_1838);
    if (temp2 != 0) {
        *arg1 = *arg2 = (f32)temp / (f32)temp2;
    }
}
