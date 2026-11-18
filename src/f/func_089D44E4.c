#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Unk1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[8];
    void *unk_18;
    u8 pad_1C[0x10];
    u8 unk_2C;
    u8 pad_2D[3];
    s32 unk_30;
} Unk;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_0898ABB8(void *, f32, s32, s32);
void func_08878864(s32, s32, f32, f32, s32, f32);
void func_08985884(f32, s32, s32, Unk1 *);

void func_089D44E4(Unk *arg0) {
    Unk1 temp;
    f32 temp2;
    f32 temp4;
    s32 temp3;

    func_0898ABB8(arg0->unk_18, 0.0f, 4, 0);
    temp3 = func_089B53D8(func_088586E8());
    func_08878864(temp3, arg0->unk_30, 1.0f, 0.0f, 2, 0.0f);
    {
        f32 temp5 = arg0->unk_08;
        temp2 = temp5 <= -20.0f ? 20.0f + temp5 : temp5;
    }
    temp4 = arg0->unk_0C - 20.0f;
    temp.unk_00 = temp2;
    temp.unk_04 = temp4;
    func_08985884(5.0f, arg0->unk_04, 0x77, &temp);
    arg0->unk_2C = 0;
}
