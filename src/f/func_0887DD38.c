#include "common.h"

typedef struct {
    u8 pad_00[0xC4];
    s32 *unk_C4;
    u32 unk_C8;
} T;

void func_0887DD38(T *arg0, s32 arg1) {
    s32 *temp0 = arg0->unk_C4;
    s32 *temp1 = temp0 + arg0->unk_C8;

    if ((u32)temp0 != (u32)temp1) {
        do {
            if (*temp0 == 0) {
                *temp0 = arg1;
                return;
            }
        } while (++temp0 != temp1);
    }
}
