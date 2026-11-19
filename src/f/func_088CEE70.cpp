#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    f32 unk_14, unk_18;
} T;

extern "C" {
f32 func_088CEE70(T *arg0) {
    f32 temp;
    f32 val;
    f32 abs;
    u32 *ptr;
    u32 bits;
    f32 result;

    val = arg0->unk_18;
    temp = val;
    bits = *(u32 *)&temp;
    ptr = (u32 *)&temp;
    *(u32 *)&temp = (bits << 1) >> 1;
    abs = *(f32 *&)ptr;
    if (abs <= 0.0001f) {
        result = 1.0f;
    } else {
        result = arg0->unk_14 / val;
    }
    return result;
}
}
