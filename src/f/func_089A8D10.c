#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[4];
    u32 unk_08[1];
} T;

extern u8 D_08ADB9D8[];

void *func_089A8D10(T *arg0, u32 arg1) {
    u32 temp = (u32)arg0 + 8;

    if (arg0 == NULL || arg0->unk_00 <= arg1) {
        return D_08ADB9D8;
    }
    return (u8 *)arg0 + *(u32 *)(temp + arg1 * 4);
}
