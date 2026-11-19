#include "common.h"

typedef struct {
    u8 pad_00[0x29A4];
    u8 *unk_29A4;
    u8 pad_29A8[4];
    u32 unk_29AC;
} S_088CE840;

s32 func_0886E580(S_088CE840 *, s32);

s32 func_088CEBC0(S_088CE840 *arg0, s32 arg1) {
    s32 temp = func_0886E580(arg0, arg1);
    u32 count;
    u32 i;
    u8 *base;

    count = arg0->unk_29AC;
    i = 0;
    if (i < count) {
        base = arg0->unk_29A4;
        do {
            u8 *p = base + i;
            if (((*p != 0) ^ 1) == 0) {
                *p = 0;
                return i;
            }
            ++i;
        } while (i < count);
    }
    return temp;
}
