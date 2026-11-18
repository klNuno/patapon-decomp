#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} S1;

typedef struct {
    u8 pad_00[0x44];
    f32 unk_44;
    f32 unk_48;
} R;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0x4C];
    V4 unk_90;
    V4 unk_A0;
    V4 unk_B0;
    V4 unk_C0;
    u8 unk_D0[0x10];
    s32 unk_E0;
    u8 unk_E4[0x84];
    f32 unk_168;
    u8 pad_16C[4];
    u8 unk_170[0x260];
    f32 unk_3D0;
    f32 unk_3D4;
} S;

extern u8 *D_08AD1F14[];

R *func_0885AB7C(s32, s32, s32);
S1 *func_08877444(u8 *);
void func_08856F00(void *);
void func_088A03B4(void *);
extern s32 func_089278C8(s32);
void func_088A0A68(S *, s32, s32);

void func_088A0400(S *arg0) {
    R *r;

    arg0->unk_90.unk_00 = 0.0f;
    arg0->unk_90.unk_04 = 0.0f;
    arg0->unk_90.unk_08 = 0.0f;
    arg0->unk_90.unk_0C = 1.0f;
    arg0->unk_A0.unk_00 = arg0->unk_90.unk_00;
    arg0->unk_A0.unk_04 = arg0->unk_90.unk_04;
    arg0->unk_A0.unk_08 = arg0->unk_90.unk_08;
    arg0->unk_A0.unk_0C = arg0->unk_90.unk_0C;
    arg0->unk_B0.unk_00 = 0.0f;
    arg0->unk_B0.unk_04 = 0.0f;
    arg0->unk_B0.unk_08 = 0.0f;
    arg0->unk_B0.unk_0C = 1.0f;
    arg0->unk_C0.unk_00 = 0.0f;
    arg0->unk_C0.unk_04 = 0.0f;
    arg0->unk_C0.unk_08 = 0.0f;
    arg0->unk_C0.unk_0C = 1.0f;
    arg0->unk_168 = 1.0f;
    r = func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_1C, 0, 0);
    arg0->unk_3D0 = r->unk_44;
    arg0->unk_3D4 = r->unk_48;
    func_08856F00(arg0->unk_D0);
    arg0->unk_E0 = -1;
    func_088A03B4(arg0->unk_E4);
    func_089278C8((s32)arg0->unk_170);
    if (arg0->unk_40 != 0) {
        func_088A0A68(arg0, 1, 1);
    }
}
