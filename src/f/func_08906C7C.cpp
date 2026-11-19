#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
} Sub;

typedef struct {
    u8 pad_00[0x14A0];
    Sub *unk_14A0;
} G;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern G *D_08AD1F14[];

void func_08906C7C(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    G *g = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    *temp = g->unk_14A0->unk_258;
    func_08852F00(arg1, 0);
}
}
