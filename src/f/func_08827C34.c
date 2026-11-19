#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
    s32 *unk_14;
    s32 *unk_18;
    s32 *unk_1C;
} T;

s32 func_08827C34(T *arg0) {
    s32 *ptr;
    s32 *end;
    s32 temp;

    if (arg0->unk_04 == 0) {
        return 0;
    }
    arg0->unk_04--;
    ptr = arg0->unk_1C;
    end = arg0->unk_18;
    temp = *ptr++;
    if ((u32)end <= (u32)ptr) {
        ptr = arg0->unk_14;
    }
    arg0->unk_1C = ptr;
    return temp;
}
