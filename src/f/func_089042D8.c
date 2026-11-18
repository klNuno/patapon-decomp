#include "common.h"

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_08990AFC(void *, f32, f32, f32);

typedef struct {
    u8 pad_00[0x506D0];
    u8 unk_506D0[4];
} Unk10;

typedef struct {
    u8 pad_00[0x10];
    Unk10 *unk_10;
} Unk;

void func_089042D8(Unk *arg0, void *arg1) {
    f32 *temp = func_0885356C(arg1, 0, 1, 4);
    f32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    f32 *temp3 = func_0885356C(arg1, 2, 1, 4);
    func_0885356C(arg1, 3, 1, 4);
    func_08990AFC(arg0->unk_10->unk_506D0, *temp, *temp2, *temp3);
    func_08852F00(arg1, 0);
}
