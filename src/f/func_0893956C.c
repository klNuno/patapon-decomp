#include "common.h"

void func_08939648(char *arg0, char *arg1, char *arg2);
s32 func_08939678(s32 *arg0);
void func_08939680(s32, s32, void (*)(void));
void func_089396F4(void);
s32 func_089396FC(s32, s32);
void func_08939738(s32 *arg0, s32 arg1);
void func_08939740(s32 *arg0, s32 *arg1);
f32 *func_0893974C(f32 *arg0, f32 *arg1);
s32 func_0893975C(s32 *arg0, s32 *arg1);

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

void func_0893956C(T *arg0) {
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
    if (func_0893975C(&temp3.unk_00, &temp4.unk_00) != 0) {
        func_0893974C(&temp0.unk_00_f32, &temp4.unk_00_f32);
        return;
    }
    func_08939740(&temp5, &arg0->unk_00);
    func_08939738(&temp6, (s32)arg0);
    arg0->unk_0C -= func_089396FC(temp5, temp6);
    func_08939680(temp3.unk_00, temp4.unk_00, func_089396F4);
    p = func_08939678(&temp3.unk_00);
    func_08939648(arg0->unk_08, (char *)p, (char *)func_08939678(&temp4.unk_00));
    func_0893974C(&temp0.unk_00_f32, &temp4.unk_00_f32);
}
