#include "common.h"

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
    u8 pad_92E4[0x9354 - 0x92E4];
    f32 unk_9354;
} T;

void func_088955E8(T *arg0, f32 arg1) {
    f32 cur = arg0->unk_9354;
    f32 s;

    if (cur == -1000.0f) {
        arg0->unk_9354 = arg1;
        return;
    }
    s = (arg0->unk_92E0 == 1) ? -1.0f : 1.0f;
    if (s > 0.0f) {
        if (arg1 < cur) {
            arg0->unk_9354 = arg1;
        }
    } else if (arg1 > cur) {
        arg0->unk_9354 = arg1;
    }
}
