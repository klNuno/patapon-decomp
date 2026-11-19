#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

s32 func_088AC958(T *arg0, const T *arg1, const u16 *arg2) {
    u16 temp;

    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    temp = *arg2;
    if (temp == 0x5F || temp == 0x2D) {
        arg0->unk_00 *= 0.4f;
    }
    return 0;
}
