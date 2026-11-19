#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0x50];
} S;

f32 func_0897CD20(const S *arg0, s32 arg1) {
    return arg0[arg1].unk_00;
}
