#include "common.h"

typedef struct {
    s32 unk_00[16];
    u8 *unk_40;
} T;

extern u8 D_08A44934[];

T *func_0885AC10(T *arg0) {
    s32 i;
    s32 *p;

    arg0->unk_40 = D_08A44934;
    for (i = 0, p = arg0->unk_00; i < 16; ++i, ++p) {
        *p = 0;
    }
    return arg0;
}
