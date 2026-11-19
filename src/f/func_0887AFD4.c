#include "common.h"

extern s32 D_089F96E4[];
typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C, unk_10;
    u32 unk_14;
} T;

s32 func_0887AFD4(T *arg0) {
    s32 temp;
    s32 *ptr;
    s32 offset = (arg0->unk_14 & 1) == 0 ? 0x960000 : 0;
    temp = arg0->unk_0C + offset;
    if (D_089F96E4[0] < temp) {
        ptr = &temp;
    } else {
        ptr = D_089F96E4;
    }
    return *ptr;
}
