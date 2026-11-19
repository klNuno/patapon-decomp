#include "common.h"

typedef struct N_0888BEC8 {
    struct N_0888BEC8 *unk_00;
    struct N_0888BEC8 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} N_0888BEC8;

typedef struct {
    N_0888BEC8 *unk_00;
} T;

s32 func_0888BFF4(N_0888BEC8 *);

void func_0888C3A4(T *arg0, N_0888BEC8 *arg1, N_0888BEC8 *arg2) {
    volatile struct {
        N_0888BEC8 *unk_00;
        u8 pad_04[4];
    } temp;

    temp.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2) {
        if (func_0888BFF4(arg2) != 0) {
            arg1->unk_20--;
        }
    }
    *arg0 = *(T *)&temp;
}
