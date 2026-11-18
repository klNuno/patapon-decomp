#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08904DB4;

typedef struct {
    u8 pad_00[0xB0];
    s32 unk_B0;
    u8 pad_B4[4];
    s32 unk_B8;
    u8 pad_BC[0x10];
    s32 unk_CC;
    u8 pad_D0[0x10];
    u8 unk_E0;
} Obj_08904DB4_R;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_088C6474(void *);
Obj_08904DB4_R *func_0898FBAC(void *, s32);

void func_08904DB4(Obj_08904DB4 *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;
    Obj_08904DB4_R *temp_v0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    temp_v0 = func_0898FBAC(func_088C6474(arg0->unk_10 + 0x506F0), *temp_s1);
    if (temp_v0 != NULL) {
        temp_v0->unk_CC = *temp_s0;
        temp_v0->unk_B0 = 0;
        temp_v0->unk_E0 = 1;
        temp_v0->unk_B8 = 0;
    }
    func_08852F00(arg1, 0);
}
