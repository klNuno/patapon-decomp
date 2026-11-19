#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x1A0F0];
    u16 unk_1A0F0;
} A;

typedef struct {
    u8 pad_00[0x1498];
    A *unk_1498;
} T;

extern T *D_08AD1F14[];

void func_08906CD8(void *arg0, void *arg1) {
    u16 temp = *(u16 *)func_0885356C(arg1, 0, 1, 4);
    T *t = D_08AD1F14[0];
    (t != NULL ? t : NULL)->unk_1498->unk_1A0F0 = temp;
    func_08852F00(arg1, 0);
}
