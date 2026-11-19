#include "common.h"

typedef struct {
    u8 pad_00[0x22CC];
    s32 unk_22CC;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} G;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern G *D_08AD1F14[];

void func_088EC5AC(void *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_22CC;
    func_08852F00(arg1, 0);
}
