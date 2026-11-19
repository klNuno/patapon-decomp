#include "common.h"

typedef struct {
    u32 *unk_00;
    s32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x14];
    T unk_14;
} S;

void func_088A3ED8(S *arg0) {
    s32 temp2 = arg0->unk_14.unk_04;
    u32 *temp = arg0->unk_14.unk_00;
    T *temp3 = &arg0->unk_14;
    if ((u32)temp != (u32)(temp + temp2)) {
        u32 *temp4 = *(u32 *volatile *)&temp3->unk_00 + temp2;
        do {
            temp++;
        } while (temp != temp4);
    }
    arg0->unk_14.unk_04 = 0;
}
