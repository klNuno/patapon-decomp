#include "common.h"

typedef struct {
    s32 unk_00;
    u8 *unk_04;
} S_088B4948;

extern u8 D_08A45D14[];

S_088B4948 *func_088B4948(S_088B4948 *arg0, s32 arg1) {
    arg0->unk_04 = D_08A45D14;
    arg0->unk_00 = arg1;
    return arg0;
}
