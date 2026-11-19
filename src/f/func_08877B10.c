#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3_0887DD74;
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4_0887DD74;
typedef struct {
    f32 unk_00[4][4];
} M_08933578;
typedef M_08933578 Mtx;
typedef M_08933578 M;
typedef V4_0887DD74 V4;
typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} A;
typedef struct {
    u8 pad_00[4];
    V4_0887DD74 unk_04;
} B;
typedef struct {
    V4_0887DD74 unk_00;
    V4_0887DD74 unk_10;
} C;

extern A D_089DD748[];
extern B D_089DD52C[];
M *func_08877760(M *arg0, const f32 *arg1, const V4 *arg2);
void func_088554A0(M_08933578 *, M_08933578 *, M_08933578 *);
void func_08866B54(Mtx *, s32, void *);
void *func_08866B80(Mtx *, s32);
void func_088651A4(void *, M *, void *, s32, s32);

void func_08877B10(void *arg0, s32 arg1, Mtx *arg2, V4_0887DD74 *arg3, void *arg4) {
    C temp;
    V3_0887DD74 temp2;
    struct {
        Mtx unk_00;
        u8 pad_40[4];
    } temp3;
    Mtx temp4;
    Mtx temp5;
    V4_0887DD74 temp6;
    A *temp7;
    B *temp8;
    f32 temp9;
    f32 temp10;
    f32 temp12;
    f32 temp13;
    f32 temp14;
    f32 temp11;

    temp7 = &D_089DD748[arg1];
    temp.unk_00.unk_00 = temp7->unk_08;
    temp8 = &D_089DD52C[temp7->unk_00];
    temp.unk_00.unk_04 = temp7->unk_0C;
    temp9 = temp8->unk_04.unk_08;
    temp10 = temp8->unk_04.unk_0C;
    temp.unk_00.unk_08 = temp9;
    temp.unk_00.unk_0C = temp10;
    temp12 = temp8->unk_04.unk_00;
    temp13 = arg3->unk_00;
    temp14 = temp8->unk_04.unk_04;
    temp12 += temp13;
    temp.unk_10.unk_00 = temp12;
    temp13 = arg3->unk_04;
    temp14 += temp13;
    temp11 = temp7->unk_10;
    temp.unk_10.unk_04 = temp14;
    temp.unk_10.unk_08 = temp9;
    temp.unk_10.unk_0C = temp10;
    if (0.0f != temp11) {
        temp6.unk_0C = 1.0f;
        temp6.unk_00 = 0.0f;
        temp6.unk_04 = 0.0f;
        temp6.unk_08 = 0.0f;
        temp2.unk_00 = 0.0f;
        temp2.unk_04 = 0.0f;
        temp2.unk_08 = 3.1415927f * temp11 / 180.0f;
        func_088554A0(&temp4, arg2, func_08877760(&temp5, &temp2.unk_00, &temp6));
        func_08866B54(&temp3.unk_00, 0, func_08866B80(&temp4, 0));
        func_08866B54(&temp3.unk_00, 1, func_08866B80(&temp4, 1));
        func_08866B54(&temp3.unk_00, 2, func_08866B80(&temp4, 2));
        func_08866B54(&temp3.unk_00, 3, func_08866B80(&temp4, 3));
        arg2 = &temp3.unk_00;
    }
    func_088651A4(&temp, arg2, arg4, temp7->unk_04, 1);
}
