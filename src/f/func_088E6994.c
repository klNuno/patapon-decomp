#include "common.h"

typedef struct W_088E6994 {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E6994;

typedef struct A_088E6994 {
    u8 pad_00[0x14];
    W_088E6994 *unk_14;
} A_088E6994;

typedef struct R_088E6994 {
    u8 pad_00[0x9300];
    f32 unk_9300;
} R_088E6994;

void func_08852F00(s32, s32);
f32 *func_0885356C(s32, s32, s32, s32);
R_088E6994 *func_08899E18(s32, s32);

void func_088E6994(A_088E6994 *arg0, s32 arg1) {
    f32 *temp;

    temp = func_0885356C(arg1, 0, 1, 4);
    if (arg0->unk_14 != NULL) {
        *temp = func_08899E18(arg0->unk_14->unk_36B10, 0)->unk_9300;
    }
    func_08852F00(arg1, 0);
}
