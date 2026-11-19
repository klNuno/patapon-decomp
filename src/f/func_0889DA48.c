#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} S_0889DB24;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x38];
} T;

extern u8 *D_08AD1F14[];
S_0889DB24 *func_08877444(u8 *);
s32 func_0885AB7C(s32, s32, s32);

s32 func_0889DA48(void *arg0, s32 arg1) {
    return ((T *)func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_0C, 0, 0))[arg1].unk_44 > 0;
}
