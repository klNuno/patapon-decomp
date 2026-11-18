#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_088FF44C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E4524(s32, s32, s32);

void func_088FF44C(Obj_088FF44C *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    func_088E4524(func_088C6454(arg0->unk_10 + 0x506F0), *temp_s1, *temp_s0 != 0);
    func_08852F00(arg1, 0);
}
