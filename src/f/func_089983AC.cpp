#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} A;
typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} B;
typedef struct {
    u8 pad_00[0xFB0];
    B *unk_FB0;
    u32 unk_FB4;
} C;
typedef struct {
    u8 pad_00[0x14A8];
    C unk_14A8;
} G;
typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x4A59C];
    A *unk_4A5B4;
    u8 pad_4A5B8[0x1798];
    u8 unk_4BD50;
    u8 pad_4BD51[0x1F];
    u8 unk_4BD70[4];
} T;

extern G *D_08AD1F14[];
s32 func_0899A900(s32);
s32 func_08999AB0(s32);
void func_089980A4(T *, s32);
extern s32 func_089C6964(void *, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_089B53D8(s32);
s32 func_088586E8(void);

void func_089983AC(T *arg0) {
    s32 temp;
    u32 temp2;
    s32 temp3;
    A **temp4;
    G *temp5;
    s32 temp8;
    u32 temp7;
    C *temp6;
    B *temp9;
    s32 temp10;

    temp = 0;
    temp2 = 0;
    temp3 = 0;
    temp4 = &arg0->unk_4A5B4;
    do {
        if ((u8)func_08999AB0(((A *)((u8 *)*temp4 + temp3))->unk_08) == 0) {
            return;
        }
        if (func_0899A900(((A *)((u8 *)*temp4 + temp3))->unk_08) != 0) {
            temp++;
            temp2++;
        } else {
            temp2++;
        }
        temp3 += 0x10;
    } while (temp2 < 3);
    if (temp > 0) {
        temp5 = D_08AD1F14[0];
        temp8 = 0;
        temp5 = temp5 != NULL ? temp5 : NULL;
        temp6 = &temp5->unk_14A8;
        temp7 = 0;
        if (temp5->unk_14A8.unk_FB4 != 0) {
            temp9 = temp6->unk_FB0;
            do {
                if (((B *)((u8 *)temp9 + (s32)temp7 * 0x28))->unk_24 != 0) {
                    temp8++;
                }
                temp7++;
            } while (temp7 < *(volatile u32 *)&temp6->unk_FB4);
        }
        temp10 = temp8 - temp;
        if (temp == 3 || temp10 == 0) {
            func_089980A4(arg0, 1);
            arg0->unk_4BD50 = 1;
            func_08878864(func_089B53D8(func_088586E8()), 0x210008, 2, 1.0f, 0.0f, 0.0f);
        } else {
            arg0->unk_14 = 2;
            func_089C6964(arg0->unk_4BD70, 1);
        }
    }
}
}
