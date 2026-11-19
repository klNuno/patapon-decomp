#include "common.h"
typedef struct {
    s32 *unk_00;
    u32 unk_04;
} T;
typedef struct {
    u8 pad_00[0x110];
    T unk_110;
} S;
void func_0898F97C(S *arg0) {
    u32 temp = arg0->unk_110.unk_04;
    s32 *temp2 = arg0->unk_110.unk_00;
    T *temp3 = &arg0->unk_110;
    if ((u32)temp2 != (u32)(temp2 + temp)) {
        s32 *temp4 = *(s32 *volatile *)&temp3->unk_00 + temp;
        do {
            temp2++;
        } while (temp2 != temp4);
    }
    arg0->unk_110.unk_04 = 0;
}
