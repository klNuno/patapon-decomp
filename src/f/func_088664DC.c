#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[8];
    u8 unk_60;
} S;

typedef struct {
    u8 pad_00[0x40];
} M_08933578;

void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
void func_0893E420(void *, M_08933578 *, s32, s32, s32);

void func_088664DC(M_08933578 *arg0, S *arg1, s32 arg2) {
    M_08933578 temp;
    f32 temp1 = *(volatile f32 *)&arg1->unk_54;
    s32 temp2 = *(volatile s32 *)&arg1->unk_4C;
    func_0893E420(&arg1->unk_60, &temp, arg2, temp2, (s32)temp1);
    func_088554A0(arg0, (M_08933578 *)arg1, &temp);
}
