#include "common.h"
extern "C" {
s32 func_0883C8A4(s32);

typedef struct {
    u8 pad_00[0x64];
    s32 unk_64;
} T;

static inline void unk_00(s32 arg0, s32 &arg1) {
    switch (func_0883C8A4(arg0) & 7) {
    case 0:
        break;
    default:
        arg1 = 1;
        break;
    }
}

s32 func_089248F4(T *arg0) {
    s32 temp = arg0->unk_64;
    s32 temp1 = 0;
    if (temp >= 0) {
        unk_00(temp, temp1);
    }
    return temp1;
}
}
