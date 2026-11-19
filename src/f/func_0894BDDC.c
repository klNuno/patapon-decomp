#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} S_0894BDDC;

extern s32 D_08AD99C4[];

void func_0894BDDC(S_0894BDDC *arg0, s32 arg1) {
    arg0->unk_24 = arg1;
    D_08AD99C4[0] = arg1;
}
