#include "common.h"

typedef struct {
    u8 pad_00[0x55428];
    s32 unk_55428;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0891A7A8(s32, s32);
s32 func_0891C1BC(s32);

void func_088EAE50(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 0, 4);
    s32 temp2 = func_0891C1BC(arg0->unk_14->unk_55428);
    func_0891A7A8(temp2, *temp);
    func_08852F00(arg1, 0);
}
