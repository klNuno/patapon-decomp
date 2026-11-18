#include "common.h"

typedef struct F08901694 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    void *unk_10;
    u8 pad_14[4];
    f32 unk_18;
} F08901694;

f32 func_0887A67C(f32, s32, s32);
void func_088F9778(void *, F08901694 *, s32);

void func_0890988C(F08901694 *arg0, s32 arg1) {
    f32 temp = arg0->unk_18 * func_0887A67C(1.0f, arg1, 0x12C0);
    f32 temp1 = arg0->unk_08 * temp;
    f32 temp2 = arg0->unk_0C * temp;
    s32 temp3;
    arg0->unk_00 += temp1;
    arg0->unk_04 += temp2;
    temp3 = (s32)(arg0->unk_08 < 0.0f ? (void *)0 : (void *)1);
    func_088F9778(arg0->unk_10, arg0, temp3);
}
