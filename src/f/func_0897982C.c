#include "common.h"

void func_08979908(char *arg0, char *arg1, char *arg2);
s32 func_08979938(s32 *arg0);
void func_08979940(s32, s32, void (*)(void));
void func_089799B4(void);
s32 func_089799BC(s32, s32);
void func_089799F8(s32 *arg0, s32 arg1);
void func_08979A00(s32 *arg0, s32 *arg1);
f32 *func_08979A0C(f32 *arg0, f32 *arg1);
s32 func_08979A1C(s32 *arg0, s32 *arg1);

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

void func_0897982C(T *arg0) {
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
    if (func_08979A1C(&temp3.unk_00, &temp4.unk_00) != 0) {
        func_08979A0C(&temp0.unk_00_f32, &temp4.unk_00_f32);
        return;
    }
    func_08979A00(&temp5, &arg0->unk_00);
    func_089799F8(&temp6, (s32)arg0);
    arg0->unk_0C -= func_089799BC(temp5, temp6);
    func_08979940(temp3.unk_00, temp4.unk_00, func_089799B4);
    p = func_08979938(&temp3.unk_00);
    func_08979908(arg0->unk_08, (char *)p, (char *)func_08979938(&temp4.unk_00));
    func_08979A0C(&temp0.unk_00_f32, &temp4.unk_00_f32);
}
