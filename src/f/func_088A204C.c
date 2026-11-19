#include "common.h"

typedef struct {
    u32 unk_00[16];
} S;

typedef struct {
    u8 pad_00[0x40];
    S unk_40;
} T;

void func_088A204C(T *arg0, const S *arg1) {
    arg0->unk_40 = *arg1;
}
