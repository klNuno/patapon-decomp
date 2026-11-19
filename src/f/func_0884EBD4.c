#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    f32 *unk_14;
} S;

f32 func_0884EBD4(S *arg0, s32 arg1) {
    return arg0->unk_14[arg1];
}
