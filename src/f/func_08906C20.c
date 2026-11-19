#include "common.h"

typedef struct {
    u8 pad_00[0x258];
    s32 unk_258;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} S88ED230;

extern S88ED230 *D_08AD1F14[];
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

void func_08906C20(void *arg0, void *arg1) {
    s32 temp = *func_0885356C(arg1, 0, 1, 4);
    S88ED230 *temp1 = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp1->unk_14A0->unk_258 = temp;
    func_08852F00(arg1, 0);
}
