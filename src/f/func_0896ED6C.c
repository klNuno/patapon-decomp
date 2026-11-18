#include "common.h"

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
    u8 unk_BE;
    u8 unk_BF;
} U;

typedef struct {
    u8 pad_00[4];
    U *unk_04;
} T;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} S;

T *func_08852FFC(s32);
extern s32 func_08853004(s32);
s32 *func_0884EBA0(s32, s32);
extern s32 func_088586E8(void);
extern u32 func_089B5464(s32);
void func_0896FF28(S *, s32, f32);

void func_0896ED6C(S *arg0)
{
    T *temp = func_08852FFC(arg0->unk_04);
    s32 temp2 = func_08853004(arg0->unk_04);
    U *temp3 = temp->unk_04;
    u8 *temp4;
    s32 temp5;

    if (((temp3->unk_BD >> 7) & 1) != 0) {
        temp4 = &temp3->unk_BE;
        if ((*temp4 & 1) != 0) {
            *temp4 &= 0xFE;
            temp5 = -1;
            if (((temp->unk_04->unk_BF >> 4) & 1) == 1) {
                if (*func_0884EBA0(temp2, 0x20) > 0) {
                    temp5 = *func_0884EBA0(temp2, 0x20) & 1;
                }
            } else {
                temp5 = func_089B5464(func_088586E8()) & 1;
            }
            if (temp5 >= 0) {
                if (temp5 == 0) {
                    func_0896FF28(arg0, 0x140004, 0.0f);
                } else {
                    func_0896FF28(arg0, 0x140003, 0.0f);
                }
            }
        }
    }
}
