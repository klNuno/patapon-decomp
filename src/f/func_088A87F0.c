#include "common.h"

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
} V;

typedef struct {
    u8 pad_00[0x3A0];
    V *unk_3A0;
} U;

typedef struct {
    u8 pad_00[0x3A0];
    U *unk_3A0;
} S;

typedef struct {
    S *unk_00;
    u8 pad_04[8];
    f32 unk_0C;
    u8 pad_10[0x30];
    f32 *unk_40;
} T;

f32 func_088A87F0(T *arg0) {
    f32 temp;
    f32 result;

    if (arg0->unk_00->unk_3A0->unk_3A0->unk_92E0 == 1) {
        temp = -1.0f;
    } else {
        temp = 1.0f;
    }
    result = arg0->unk_0C;
    result *= temp;
    result += *arg0->unk_40;
    return result;
}
