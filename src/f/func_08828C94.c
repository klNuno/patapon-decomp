#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

void func_08854F60(f32, V4 *, V4 *);
void func_08854CD8(V4 *, V4 *, V4 *);

V4 *func_08828C94(f32 arg0, V4 *arg1, V4 *arg2, V4 *arg3, V4 *arg4, V4 *arg5) {
    V4 temp1;
    V4 temp2;
    V4 temp3;
    V4 temp4;
    V4 temp5;
    V4 temp6;
    V4 temp7;
    V4 temp8;
    V4 temp9;
    V4 temp10;
    V4 temp11;
    V4 temp12;
    V4 temp13;
    f32 temp14;
    f32 temp16;
    f32 temp15;
    f32 temp17;
    f32 temp18;
    f32 temp19;
    f32 temp20;

    temp16 = arg0 * arg0;
    temp14 = 1.0f - arg0;
    temp15 = 3.0f * temp14;
    func_08854F60(arg0 * temp16, &temp8, arg4);
    temp6.unk_00 = temp8.unk_00;
    temp6.unk_04 = temp8.unk_04;
    temp6.unk_08 = temp8.unk_08;
    temp6.unk_0C = temp8.unk_0C;
    func_08854F60(temp15 * temp16, &temp12, arg3);
    temp5 = temp12;
    func_08854F60(arg0 * (temp15 * temp14), &temp10, arg2);
    temp4.unk_00 = temp10.unk_00;
    temp4.unk_04 = temp10.unk_04;
    temp4.unk_08 = temp10.unk_08;
    temp4.unk_0C = temp10.unk_0C;
    func_08854F60(temp14 * (temp14 * temp14), &temp9, arg1);
    temp3.unk_00 = temp9.unk_00;
    temp3.unk_04 = temp9.unk_04;
    temp3.unk_08 = temp9.unk_08;
    temp3.unk_0C = temp9.unk_0C;
    func_08854CD8(&temp11, &temp3, &temp4);
    temp2.unk_00 = temp11.unk_00;
    temp2.unk_04 = temp11.unk_04;
    temp2.unk_08 = temp11.unk_08;
    temp2.unk_0C = temp11.unk_0C;
    func_08854CD8(&temp13, &temp2, &temp5);
    temp1.unk_00 = temp13.unk_00;
    temp1.unk_04 = temp13.unk_04;
    temp1.unk_08 = temp13.unk_08;
    temp1.unk_0C = temp13.unk_0C;
    func_08854CD8(&temp7, &temp1, &temp6);
    temp17 = temp7.unk_04;
    temp18 = temp7.unk_08;
    temp19 = temp7.unk_0C;
    temp20 = temp7.unk_00;

    arg5->unk_00 = temp20;
    arg5->unk_04 = temp17;
    arg5->unk_08 = temp18;
    arg5->unk_0C = temp19;
    return arg5;
}
