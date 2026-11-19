#include "common.h"
typedef struct {
    u8 pad_00[0xC];
    u8 *unk_0C;
} S;
u8 *func_0880E2CC(S *arg0, u8 *arg1, u8 *arg2) {
    if (arg1 < arg2) {
        do {
            *arg1 = arg0->unk_0C[*arg1];
            arg1++;
        } while (arg1 < arg2);
    }
    return arg2;
}
