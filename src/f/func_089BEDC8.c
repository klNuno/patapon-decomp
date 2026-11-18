#include "common.h"

typedef struct {
    u8 pad_00[0x1834];
    u32 unk_1834;
    u32 unk_1838;
} T;

void func_089BEDC8(T *arg0, f32 *arg1, f32 *arg2, u32 *arg3) {
    u32 temp;
    u32 temp2;

    *arg1 = *arg2 = (f32)(*arg3 = 0);
    temp = arg0->unk_1834;
    temp2 = temp + arg0->unk_1838;
    if (temp2 != 0) {
        f32 temp3 = (f32)temp;
        *arg1 = *arg2 = temp3 / (f32)temp2;
    }
}
