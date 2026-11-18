#include "common.h"

typedef struct {
    f32 unk_00[3];
} V3_0898F2D8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} R_0898F2D8;

typedef struct {
    u8 unk_00[0x40];
    s32 unk_40;
    s32 unk_44;
    f32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    u8 unk_60[0x20];
} S_0898F2D8;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    S_0898F2D8 unk_10;
    void *unk_90;
    u8 pad_94[0xC];
    R_0898F2D8 unk_A0;
    s32 unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
    s32 unk_CC;
    s32 unk_D0;
    V3_0898F2D8 unk_D4;
    u8 unk_E0;
    void *unk_E4;
} T_0898F2D8;

extern u8 D_08A44B70[];
extern u8 D_08A484B4[];
void func_08864F08(void *, void *);
void func_0898F430(void *, void *);

T_0898F2D8 *func_0898F2D8(T_0898F2D8 *arg0, T_0898F2D8 *arg1) {
    S_0898F2D8 *s;
    R_0898F2D8 *r;

    arg0->unk_E4 = D_08A484B4;
    arg0->unk_00 = arg1->unk_00;
    s = &arg0->unk_10;
    arg0->unk_90 = D_08A44B70;
    func_08864F08(s, &arg1->unk_10);
    s->unk_40 = arg1->unk_10.unk_40;
    s->unk_44 = arg1->unk_10.unk_44;
    s->unk_48 = arg1->unk_10.unk_48;
    s->unk_4C = arg1->unk_10.unk_4C;
    s->unk_50 = arg1->unk_10.unk_50;
    s->unk_54 = arg1->unk_10.unk_54;
    s->unk_58 = arg1->unk_10.unk_58;
    s->unk_5C = arg1->unk_10.unk_5C;
    func_0898F430(s->unk_60, arg1->unk_10.unk_60);
    arg0->unk_A0.unk_00 = arg1->unk_A0.unk_00;
    arg0->unk_A0.unk_04 = arg1->unk_A0.unk_04;
    arg0->unk_A0.unk_08 = arg1->unk_A0.unk_08;
    arg0->unk_A0.unk_0C = arg1->unk_A0.unk_0C;
    r = &arg0->unk_A0;
    if (arg0->unk_A0.unk_08 != 0) {
        (*r->unk_0C)++;
    }
    arg0->unk_B0 = arg1->unk_B0;
    arg0->unk_B4 = arg1->unk_B4;
    arg0->unk_B8 = arg1->unk_B8;
    arg0->unk_BC = arg1->unk_BC;
    arg0->unk_C0 = arg1->unk_C0;
    arg0->unk_C4 = arg1->unk_C4;
    arg0->unk_C8 = arg1->unk_C8;
    arg0->unk_CC = arg1->unk_CC;
    arg0->unk_D0 = arg1->unk_D0;
    arg0->unk_D4 = arg1->unk_D4;
    arg0->unk_E0 = arg1->unk_E0;
    return arg0;
}
