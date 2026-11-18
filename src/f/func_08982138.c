#include "common.h"

typedef struct {
    f32 unk_00[3];
} PMF;

typedef struct {
    void *unk_00;
    PMF unk_04;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
} D;

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
    u8 pad_D90[4];
} X;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
    u8 unk_40[0x190];
    u8 unk_1D0[0x190];
    D unk_360;
    D unk_37C;
    u8 pad_398[8];
    u8 unk_3A0[0x60];
    u8 unk_400[0xD10];
    u8 unk_1110[0xC80];
    u8 unk_1D90[0x1280];
    X unk_3010;
    s32 unk_3DA4;
    u8 pad_3DA8[0xC];
    u8 unk_3DB4[0x94];
    u8 *unk_3E48;
    s32 unk_3E4C;
} S;

extern u8 D_08A48158[];
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern f32 D_08A05C60[];
extern f32 D_08A05C68[];
extern f32 D_08A05C70[];
extern f32 D_08A05C74[];
void func_0880406C(void *, void *, void *, s32, s32);
void func_088CE4F4(S *, s32);
void func_08913614(void *);
void func_08952CE0(void *);
void func_089741D8(void *);
void func_089822F4(void *);
void func_08982360(void *);

S *func_08982138(S *arg0, s32 arg1) {
    PMF m;
    PMF n;
    X *x;

    func_088CE4F4(arg0, -0x8000);
    arg0->unk_28 = D_08A48158;
    arg0->unk_2C = arg1;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    func_089741D8(arg0->unk_40);
    func_089741D8(arg0->unk_1D0);
    m.unk_00[0] = D_08A05C60[0];
    m.unk_00[1] = D_08A05C60[1];
    m.unk_00[2] = D_08A05C68[0];
    arg0->unk_360.unk_00 = arg0;
    arg0->unk_360.unk_04 = m;
    arg0->unk_360.unk_10 = 0;
    arg0->unk_360.unk_14 = 0;
    arg0->unk_360.unk_18 = 0;
    n = *(PMF *)&D_08A05C68[1];
    arg0->unk_37C.unk_00 = arg0;
    arg0->unk_37C.unk_04 = n;
    arg0->unk_37C.unk_10 = 0;
    arg0->unk_37C.unk_14 = 0;
    arg0->unk_37C.unk_18 = 0;
    func_08913614(arg0->unk_3A0);
    func_0880406C(arg0->unk_400, func_08982360, func_089822F4, 0x1A0, 8);
    func_0880406C(arg0->unk_1110, func_089741D8, func_08952CE0, 0x190, 8);
    func_0880406C(arg0->unk_1D90, func_089741D8, func_08952CE0, 0x190, 8);
    x = &arg0->unk_3010;
    x->unk_00 = D_08A44C14;
    x->unk_00 = D_08A44C60;
    x->unk_D88 = (u8 *)(((u32)x->unk_04 & 3) + (u32)x + 4);
    x->unk_D8C = 0;
    x->unk_00 = D_08A44CAC;
    arg0->unk_3DA4 = 0;
    arg0->unk_3E48 = (u8 *)(((u32)arg0->unk_3DB4 & 3) + (u32)arg0 + 0x3DB4);
    arg0->unk_3E4C = 0;
    return arg0;
}
