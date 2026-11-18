#include "common.h"

void func_0881F120(void *, void *, s32);
extern f32 D_08A05B20[];
extern f32 D_08A05B28[];
extern f32 D_08A05B2C[];
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

void func_089B0EEC(Unk1210 *, Unk1210 *);

void func_0897EE84(Unk *arg0, Unk1210 *arg1) {
    Unk1210 x;
    Unk0 temp;
    Unk8 *temp2;
    s32 temp3;

    x.unk_1C = D_08A480A0;
    x.unk_04 = 0;
    if (arg1 != &x) {
        if (arg1->unk_00 != NULL) {
            if ((temp3 = arg1->unk_04) != 0) {
                temp2 = &x.unk_08;
                x.unk_04 = temp3;
                if (temp2 != NULL) {
                    temp.unk_00 = D_08A05B20[1];
                    temp.unk_04 = D_08A05B28[0];
                    temp.unk_08 = D_08A05B2C[0];
                    temp2->unk_00 = D_08A48094;
                    temp2->unk_00 = D_08A48088;
                    temp2->unk_04 = temp;
                    temp2->unk_10 = &x.unk_04;
                }
                x.unk_00 = temp2;
            } else {
                func_0881F120(&x.unk_08, &arg1->unk_08, 0x14);
                x.unk_00 = &x.unk_08;
            }
        } else {
            x.unk_00 = NULL;
            x.unk_04 = 0;
        }
    }
    func_089B0EEC(&arg0->unk_2780, &x);
}
