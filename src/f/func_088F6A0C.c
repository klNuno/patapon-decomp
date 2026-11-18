#include "common.h"

void func_088F6AE8(char *arg0, char *arg1, char *arg2);
s32 func_088F6B18(s32 *arg0);
void func_088F6B20(s32, s32, void (*)(s32));
void func_088F6B94(s32 arg0);
s32 func_088F6B9C(s32, s32);
void func_088F6BD8(s32 *arg0, s32 arg1);
void func_088F6BE0(s32 *arg0, s32 *arg1);
f32 *func_088F6BEC(f32 *arg0, f32 *arg1);
s32 func_088F6BFC(s32 *arg0, s32 *arg1);

typedef union {
    s32 unk_00;
    f32 unk_00_f32;
} I;
typedef struct {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0C;
} T;

void func_088F6A0C(T *arg0) {
    I temp0;
    I temp1;
    I temp2;
    I temp3;
    I temp4;
    s32 temp5;
    s32 temp6;
    s32 p;

    temp2.unk_00 = (s32)arg0;
    temp4 = temp2;
    temp1.unk_00 = arg0->unk_00;
    temp3 = temp1;
    if (func_088F6BFC(&temp3.unk_00, &temp4.unk_00) != 0) {
        func_088F6BEC(&temp0.unk_00_f32, &temp4.unk_00_f32);
        return;
    }
    func_088F6BE0(&temp5, &arg0->unk_00);
    func_088F6BD8(&temp6, (s32)arg0);
    arg0->unk_0C -= func_088F6B9C(temp5, temp6);
    func_088F6B20(temp3.unk_00, temp4.unk_00, func_088F6B94);
    p = func_088F6B18(&temp3.unk_00);
    func_088F6AE8(arg0->unk_08, (char *)p, (char *)func_088F6B18(&temp4.unk_00));
    func_088F6BEC(&temp0.unk_00_f32, &temp4.unk_00_f32);
}
