#include "common.h"

typedef struct { f32 unk_00, unk_04; } Unk1;
typedef struct {
    s32 unk_00, unk_04;
    u32 unk_08;
    s32 unk_0C;
    Unk1 unk_10;
    f32 unk_18;
} T1;
typedef struct { s32 unk_00; u32 unk_04; T1 *unk_08; } T;
typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
} T2;
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
extern s32 func_08985828(s32, s32);
void func_08985884(f32, s32, s32, Unk1 *);
f32 fabsf(f32);

void func_089D3BC4(T *arg0) {
    Unk1 temp0;
    T1 *temp1;
    u32 i, temp2;
    T2 *temp3;
    f32 temp4;

    i = 0;
    if (i < arg0->unk_04) {
        temp2 = 0;
        do {
            temp1 = (T1 *)((u8 *)arg0->unk_08 + temp2);
            if ((temp3 = (T2 *)func_08985828(arg0->unk_00, temp1->unk_00), temp1->unk_04 == temp3->unk_4C)) {
                temp3 = (T2 *)func_08985828(arg0->unk_00, temp1->unk_00);
                if (!(fabsf(temp3->unk_54 - (f32)temp1->unk_08) > 0.001f)) {
                    temp4 = temp1->unk_18;
                    if (temp4 > 0.0f) {
                        f32 temp5 = temp1->unk_10.unk_04;
                        f32 temp6 = temp1->unk_10.unk_00;
                        temp0.unk_00 = temp6;
                        temp0.unk_04 = temp5;
                        func_08985884(temp4, arg0->unk_00, temp1->unk_0C, &temp0);
                    } else {
                        func_08878864(func_089B53D8(func_088586E8()), temp1->unk_0C, 2, 1.0f, 0.0f, 0.0f);
                    }
                }
            }
            i++;
            temp2 += sizeof(T1);
        } while (i < arg0->unk_04);
    }
}
