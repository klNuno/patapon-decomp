#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T;

s32 func_088A646C(void *arg0, const volatile T *arg1, const volatile T *arg2) {
    s32 temp = arg1->unk_04;
    s32 tmp = arg2->unk_04;

    return tmp < temp;
}
