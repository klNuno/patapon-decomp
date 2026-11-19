#include "common.h"
typedef struct {
    u8 pad_00[0x90];
    s32 unk_90;
    u8 pad_94[0x84];
} T;
typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[0x354];
    s32 unk_360;
} S;
void func_088539AC(S *arg0) {
    u32 temp = arg0->unk_360 - 1;
    T *temp2;
    arg0->unk_360 = temp;
    temp *= sizeof(T);
    temp += (u32)arg0;
    temp2 = (T *)temp;
    arg0->unk_08 = (u8 *)temp2 + temp2->unk_90 * 8 + 0x18;
}
