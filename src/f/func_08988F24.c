#include "common.h"

void func_0881F120(void *, void *, s32);
extern f32 D_08A061D8[];
extern f32 D_08A061E0[];
extern f32 D_08A061E4[];
extern u8 D_08A48088[];
extern u8 D_08A48094[];
extern u8 D_08A480A0[];
extern u8 D_08A482EC[];
extern f32 D_08A061D0[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk0_08988F24;

typedef struct {
    u8 *volatile unk_00;
    Unk0_08988F24 unk_04;
    s32 *unk_10;
} Unk8_08988F24;

typedef struct {
    Unk8_08988F24 *unk_00;
    s32 unk_04;
    Unk8_08988F24 unk_08;
    u8 *unk_1C;
} Unk1210_08988F24;

typedef struct {
    u8 pad_00[0x2780];
    Unk1210_08988F24 unk_2780;
} Unk_08988F24;

typedef struct {
    u8 pad_00[0x87280];
    u8 unk_87280[1];
} T_08988F24;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} G_08988F24;

typedef struct {
    T_08988F24 *unk_00;
    u8 pad_04[0x2C];
    G_08988F24 unk_30[2];
    s32 unk_50;
} S_08988F24;

void func_0897EE84(Unk_08988F24 *arg0, Unk1210_08988F24 *arg1);
void func_0897EF6C(s32, s32);
void func_0897EF74(s32, s32);
s32 func_089AE5A4(s32);

s32 func_08988F24(S_08988F24 *arg0) {
    Unk1210_08988F24 src;
    Unk1210_08988F24 x;
    volatile Unk0_08988F24 t1;
    Unk0_08988F24 temp;
    Unk8_08988F24 *temp2;
    Unk8_08988F24 *b;
    s32 temp3;
    s32 i;
    u8 *p;

    src.unk_04 = 0;
    t1.unk_00 = D_08A061D0[0];
    t1.unk_04 = D_08A061D0[1];
    t1.unk_08 = D_08A061D8[0];
    src.unk_1C = D_08A480A0;
    b = &src.unk_08;
    if (b != NULL) {
        b->unk_00 = D_08A48094;
        b->unk_00 = D_08A482EC;
        b->unk_04 = *(const Unk0_08988F24 *)&t1;
        b->unk_10 = (s32 *)arg0;
    }
    src.unk_00 = b;
    p = arg0->unk_00->unk_87280;
    x.unk_1C = D_08A480A0;
    x.unk_04 = 0;
    if (&src != &x) {
        if (src.unk_00 != NULL) {
            if ((temp3 = src.unk_04) != 0) {
                temp2 = &x.unk_08;
                x.unk_04 = temp3;
                if (temp2 != NULL) {
                    temp.unk_00 = D_08A061D8[1];
                    temp.unk_04 = D_08A061E0[0];
                    temp.unk_08 = D_08A061E4[0];
                    temp2->unk_00 = D_08A48094;
                    temp2->unk_00 = D_08A48088;
                    temp2->unk_04 = temp;
                    temp2->unk_10 = &x.unk_04;
                }
                x.unk_00 = temp2;
            } else {
                func_0881F120(&x.unk_08, &src.unk_08, 0x14);
                x.unk_00 = &x.unk_08;
            }
        } else {
            x.unk_00 = NULL;
            x.unk_04 = 0;
        }
    }
    func_0897EE84((Unk_08988F24 *)func_089AE5A4((s32)p), &x);
    i = arg0->unk_50;
    if (arg0->unk_30[i].unk_00 >= 0) {
        func_0897EF6C(func_089AE5A4((s32)arg0->unk_00->unk_87280), arg0->unk_30[i].unk_08);
        func_0897EF74(func_089AE5A4((s32)arg0->unk_00->unk_87280), arg0->unk_30[arg0->unk_50].unk_00);
    } else {
        func_0897EF6C(func_089AE5A4((s32)arg0->unk_00->unk_87280), 0);
    }
    return 0;
}
