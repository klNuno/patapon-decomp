#include "common.h"

typedef struct {
    u8 pad_00[0xA0C];
    u8 *unk_A0C;
    u32 unk_A10;
    s32 *unk_A14;
} T;

s32 func_08981138(T *arg0) {
    s32 *temp = arg0->unk_A14;
    s32 i;
    if (temp == (s32 *)(arg0->unk_A0C + arg0->unk_A10 * 0x50)) {
        return 1;
    }
    i = 0;
    do {
        if (*temp != 0) {
            return 0;
        }
        ++i;
        ++temp;
    } while (i < 8);
    return 1;
}
