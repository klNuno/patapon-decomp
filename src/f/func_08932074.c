#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} R;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
} Unk;

R *func_0885AB7C(s32, s32, s32);
extern s32 D_08AD91E0[];

s32 func_08932074(Unk *arg0, s32 arg1) {
    return func_0885AB7C(arg0->unk_54, 0, D_08AD91E0[arg1])->unk_0C;
}
