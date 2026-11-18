#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    f32 unk_0C;
} B;
typedef struct {
    u8 pad_00[0x44];
    B unk_44;
    u8 pad_54[0xC];
    s32 unk_60;
} C;
typedef struct {
    u8 pad_00[0x204];
    C **unk_204;
    s32 unk_208;
} D;
typedef struct {
    u8 pad_00[0x420];
    D unk_420;
} E;
typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[4];
    E *unk_28;
} A;

s32 func_089282AC(void *, s32 *);

void func_08927EF8(A *arg0) {
    E *temp = arg0->unk_28;
    C **temp2 = temp->unk_420.unk_204;
    D *temp3 = &temp->unk_420;
    C ***temp4 = &temp3->unk_204;
    s32 *temp5;
    f32 temp8, temp7, temp6;

    if ((u32)temp2 != (u32)(temp2 + temp->unk_420.unk_208)) {
        temp5 = &temp3->unk_208;
        do {
            C *temp9 = *temp2;
            if (temp9 != NULL) {
                B *temp10 = &temp9->unk_44;
                if (temp9->unk_44.unk_04 == arg0->unk_18) {
                    f32 temp11 = temp10->unk_0C;
                    if (!(temp11 < 0.01f)) {
                        s32 temp12 = 1;
                        temp6 = arg0->unk_20;
                        temp7 = arg0->unk_1C;
                        temp8 = temp11 * (f32)(s32)(temp6 / temp11);
                        if (!(temp7 <= temp6)) {
                            temp12 = 0;
                        }
                        if ((temp12 ^ 1) == 0) {
loop:
                            if (!(temp8 > temp6)) {
                                if (temp8 > temp7) {
                                    func_089282AC(arg0, &temp9->unk_60);
                                }
                                temp8 += temp10->unk_0C;
                                goto loop;
                            }
                        }
                    }
                }
            }
            ++temp2;
        } while (temp2 != *temp4 + *temp5);
    }
}
