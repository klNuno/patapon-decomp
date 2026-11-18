#include "common.h"

void func_0881F120(void *, void *, s32);
extern f32 D_08A061D8[];
extern f32 D_08A061E0[];
extern f32 D_08A061E4[];
extern u8 D_08A48088[];
extern u8 D_08A48094[];
extern u8 D_08A480A0[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk0;

typedef struct {
    u8 *volatile unk_00;
    Unk0 unk_04;
    s32 *unk_10;
} Unk8;

typedef struct {
    Unk8 *unk_00;
    s32 unk_04;
    Unk8 unk_08;
    u8 *unk_1C;
} Unk1210;

typedef struct {
    u8 pad_00[0x2780];
    Unk1210 unk_2780;
} Unk;

typedef struct {
    u8 pad_00[0x87280];
    u8 unk_87280[1];
} T;

typedef struct {
    T *unk_00;
    u8 pad_04[0x4C];
    s32 unk_50;
} S;

extern s32 D_08ADB470[];
void func_0897EE84(Unk *arg0, Unk1210 *arg1);
extern s32 func_089801AC(s32);
extern s32 func_08988484(s32);
void func_08989458(S *);
s32 func_089AE5A4(s32);

s32 func_08989130(S *arg0) {
    Unk1210 src;
    Unk1210 x;
    Unk0 temp;
    Unk8 *temp2;
    s32 temp3;
    u8 *p;

    func_08989458(arg0);
    src.unk_00 = NULL;
    src.unk_04 = 0;
    src.unk_1C = D_08A480A0;
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
    func_0897EE84((Unk *)func_089AE5A4((s32)p), &x);
    D_08ADB470[arg0->unk_50] = 0;
    func_08988484((s32)arg0);
    func_089801AC((s32)arg0);
    return 0;
}
