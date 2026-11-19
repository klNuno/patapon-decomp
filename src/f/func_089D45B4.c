#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x20];
    T unk_20;
} S;

void func_089D45B4(S *arg0, const T *arg1) {
    arg0->unk_20 = *arg1;
}
