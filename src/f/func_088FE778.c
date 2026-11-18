#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
    s32 unk_28;
    s32 unk_2C;
} A_088FE778;

extern s32 D_089E3D98[][5];

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088DDFA0(s32, u32);
s32 func_088DE128(s32);
void func_088FDFA8(A_088FE778 *, void *);
void func_088FE198(A_088FE778 *, void *);
void func_088FE2F4(A_088FE778 *, void *);

void func_088FE778(A_088FE778 *arg0, void *arg1) {
    s32 *a;

    if (func_08852EB8(arg1) == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        arg0->unk_2C = func_088DE128(arg0->unk_10);
        arg0->unk_28 = *a;
        if (arg0->unk_2C < 0 || arg0->unk_2C == arg0->unk_28) {
            func_088DDFA0(arg0->unk_10, arg0->unk_28);
            func_08852F00(arg1, 0);
            return;
        }
        switch (D_089E3D98[arg0->unk_2C][arg0->unk_28]) {
        case 0:
            func_088DDFA0(arg0->unk_10, arg0->unk_28);
            if (arg0->unk_2C == 1 && arg0->unk_28 == 0) {
                func_08852EDC(arg1, 0xE);
            } else if (arg0->unk_28 == 1 && arg0->unk_2C == 0) {
                func_08852EDC(arg1, 0x10);
            } else {
                func_08852F00(arg1, 0);
                return;
            }
            break;
        case 1:
            func_08852EDC(arg1, 0);
            break;
        case 2:
            if ((u32)arg0->unk_2C < 2) {
                func_08852EDC(arg1, 6);
            } else {
                func_08852EDC(arg1, 0xA);
            }
            break;
        }
    }
    func_088FE198(arg0, arg1);
    func_088FE2F4(arg0, arg1);
    func_088FDFA8(arg0, arg1);
}
