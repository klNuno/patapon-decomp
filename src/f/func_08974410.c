#include "common.h"

typedef struct T T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T1;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
} U;

void func_08974448(T *arg0, T1 *arg1, f32 arg2);

void func_08974410(T *arg0, const U *arg1, f32 arg2) {
    T1 temp;
    f32 temp1 = arg1->unk_34;
    f32 temp0 = arg1->unk_30;

    temp.unk_00 = temp0;
    temp.unk_04 = temp1;
    temp.unk_08 = 0.0f;
    func_08974448(arg0, &temp, arg2);
}
