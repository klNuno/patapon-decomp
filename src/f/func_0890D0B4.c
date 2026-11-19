#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} T;

extern T D_089E4D38[];

s32 func_0890D0B4(s32 arg0) {
    return D_089E4D38[arg0].unk_00;
}
