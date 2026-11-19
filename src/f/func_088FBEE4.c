#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} T;

typedef struct {
    u8 pad_00[0xEC];
    T *unk_EC;
} T2;

extern T2 *D_08AD2178[];
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

void func_088FBEE4(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    T2 *temp1 = D_08AD2178[0] != NULL ? D_08AD2178[0] : NULL;
    *temp = temp1->unk_EC->unk_18;
    func_08852F00(arg1, 0);
}
