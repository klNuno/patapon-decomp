#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} T;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} U;

typedef union {
    void *unk_00;
    f32 unk_00f;
} V;

s32 func_0898CF14(void *);

void func_0898D0B4(V *arg0, U *arg1, T *arg2) {
    volatile V temp[2];
    temp[0].unk_00 = arg2;
    if (arg2 != NULL) {
        temp[0].unk_00 = arg2->unk_04;
    }
    if ((void *)arg1 != (void *)arg2 && func_0898CF14(arg2) != 0) {
        arg1->unk_20--;
    }
    arg0->unk_00f = temp[0].unk_00f;
}
