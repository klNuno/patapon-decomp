#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    u8 *unk_20;
} T;

u8 *func_08862234(T *arg0, s32 arg1) {
    if (arg1 < 0 || arg0->unk_18 <= arg1) {
        return NULL;
    }
    return arg0->unk_20 + arg0->unk_1C * arg1;
}
