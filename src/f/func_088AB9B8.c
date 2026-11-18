#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[4];
    V *unk_04;
} T_088AB738;

typedef struct {
    u8 pad_00[0x3E8];
    u8 unk_3E8[1];
} T;

typedef struct {
    u8 pad_00[0x36B10];
    T *unk_36B10;
} U;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    U *unk_14;
} W;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
T_088AB738 *func_088BCF50(s32);
void func_088D6204(void *, s32, V *, f32);

void func_088AB9B8(W *arg0, void *arg1)
{
    V temp;
    s32 *temp2 = func_0885356C(arg1, 0, 1, 4);
    s32 *temp3 = func_0885356C(arg1, 1, 1, 4);
    f32 *temp4;
    V *temp5;
    T *temp6;
    f32 temp7;
    f32 temp8;

    func_0885356C(arg1, 2, 1, 4);
    temp4 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    temp5 = &func_088BCF50(arg0->unk_10)->unk_04[*temp3];
    temp6 = arg0->unk_14->unk_36B10;
    temp7 = temp5->unk_04;
    temp8 = temp5->unk_00;
    temp.unk_00 = temp8;
    temp.unk_04 = temp7;
    func_088D6204(temp6->unk_3E8, *temp2, &temp, *temp4);
    func_08852F00(arg1, 0);
}
