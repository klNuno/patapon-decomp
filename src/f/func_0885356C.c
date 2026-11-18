#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s8 *unk_04;
} T0885356C_R;

typedef struct {
    s8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
} T0885356C_E;

typedef struct {
    u8 pad_00[0x98];
    T0885356C_E unk_98[16];
} T0885356C_B;

typedef struct {
    u8 pad_00[0x8];
    T0885356C_R *unk_08;
    u8 pad_0C[0x354];
    s32 unk_360;
} T0885356C_S;

void func_088539FC(T0885356C_S *, s32);
void func_08853450(T0885356C_S *, s32);

void func_0885356C(T0885356C_S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    T0885356C_E *e = &((T0885356C_B *)arg0)[arg0->unk_360].unk_98[arg1];

    if (arg2 == 1) {
        e->unk_00 = *arg0->unk_08->unk_04++;
    } else {
        e->unk_00 = 0;
    }
    switch (arg3) {
    case 1:
        e->unk_04 = *(u8 *)arg0->unk_08->unk_04;
        arg0->unk_08->unk_04 += 1;
        break;
    case 2:
        func_088539FC(arg0, 2);
        e->unk_04 = *(u16 *)arg0->unk_08->unk_04;
        arg0->unk_08->unk_04 += 2;
        break;
    case 4:
        func_088539FC(arg0, 4);
        e->unk_04 = *(s32 *)arg0->unk_08->unk_04;
        arg0->unk_08->unk_04 += 4;
        break;
    }
    func_08853450(arg0, arg1);
}
