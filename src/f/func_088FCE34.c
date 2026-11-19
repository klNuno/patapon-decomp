#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
} S;

void func_088FCE34(S *arg0) {
    u8 *temp;

    arg0->unk_04 = -1;
    temp = (u8 *)((u32)arg0 + 0xC);
    if (temp != NULL) {
        temp[0] = 0xFF;
        temp[1] = 0xFF;
        temp[2] = 0xFF;
        temp[3] = 0xFF;
    }
}
