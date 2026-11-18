#include "common.h"

void func_0881F120(void *, void *, s32);
extern f32 D_08A084E0[];
extern f32 D_08A084E8[];
extern u8 D_08A48088[];
extern u8 D_08A48094[];

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
} Unk1210;

typedef struct {
    u8 pad_00[0x1210];
    Unk1210 unk_1210;
} Unk;

void func_089B0EEC(Unk *arg0, Unk1210 *arg1) {
    Unk0 temp;
    Unk8 *temp2;
    s32 temp3;
    if (arg1 != &arg0->unk_1210) {
        if (arg1->unk_00 != NULL) {
            if ((temp3 = arg1->unk_04) != 0) {
                temp2 = &arg0->unk_1210.unk_08;
                arg0->unk_1210.unk_04 = temp3;
                if (temp2 != NULL) {
                    temp.unk_00 = D_08A084E0[0];
                    temp.unk_04 = D_08A084E0[1];
                    temp.unk_08 = D_08A084E8[0];
                    temp2->unk_00 = D_08A48094;
                    temp2->unk_00 = D_08A48088;
                    temp2->unk_04 = temp;
                    temp2->unk_10 = &arg0->unk_1210.unk_04;
                }
                arg0->unk_1210.unk_00 = temp2;
            } else {
                func_0881F120(&arg0->unk_1210.unk_08, &arg1->unk_08, 0x14);
                arg0->unk_1210.unk_00 = &arg0->unk_1210.unk_08;
            }
        } else {
            arg0->unk_1210.unk_00 = NULL;
            arg0->unk_1210.unk_04 = 0;
        }
    }
}
