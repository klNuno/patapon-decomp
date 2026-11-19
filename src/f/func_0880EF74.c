#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[2];
} S;

const s8 *func_0880EF74(void *arg0, const s8 *arg1, const s8 *arg2, S *arg3)
{
    if (arg1 < arg2) {
        do {
            arg3->unk_00 = *arg1;
            arg1++;
            arg3++;
        } while (arg1 < arg2);
    }
    return arg2;
}
