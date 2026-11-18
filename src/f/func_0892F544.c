#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_089334DC(void *, s32);

typedef struct {
    u8 pad_00[0x170];
    u8 unk_170[0x4];
} T_0892F544;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_0892F544;

void func_0892F544(S_0892F544 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    func_089334DC(((T_0892F544 *)func_0892AB90(arg0->unk_10, *temp))->unk_170, *temp2 == 1);
    func_08852F00(arg1, 0);
}
