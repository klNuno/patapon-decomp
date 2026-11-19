#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    f32 *unk_14;
} S;

f32 func_0884EC00(S *arg0, s32 arg1, f32 arg2) {
    arg0->unk_14[arg1] = arg2;
    return arg2;
}
