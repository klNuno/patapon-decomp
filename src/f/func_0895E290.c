#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    s32 unk_2C;
} T0895E290;

extern s32 func_0886095C(void);
u32 func_088647DC(s32, s32);
s32 func_08864850(s32, s32, void *, u32);

s32 func_0895E290(void *arg0, s32 arg1, T0895E290 *arg2) {
    s32 temp;
    u32 size;
    u32 n;

    if (arg1 < 0) {
        return -1;
    }
    temp = arg2->unk_2C;
    size = func_088647DC(func_0886095C(), temp);
    n = arg1 << 11;
    if (n >= size) {
        n = size;
    }
    if (n != 0) {
        if (func_08864850(func_0886095C(), temp, arg0, n) == 0) {
            n = 0;
        }
    }
    return n >> 11;
}
