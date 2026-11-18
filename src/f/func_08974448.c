#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08; } T1;
typedef struct {
    u8 pad_00[0xE0];
    char unk_E0[0x10];
    T1 unk_F0, unk_FC;
    void *unk_108;
} T;
extern void func_08974068(char *, f32);
f32 func_0897412C(char *);
void func_08974CC4(T1 *, void *, T1 *, f32);

void func_08974448(T *arg0, T1 *arg1, f32 arg2) {
    T1 temp0, temp1;
    f32 temp2, temp3, temp4, temp5, temp6, temp7, temp8;

    if (0.0f == arg2) {
        arg0->unk_FC.unk_00 = arg1->unk_00;
        arg0->unk_FC.unk_04 = arg1->unk_04;
        arg0->unk_FC.unk_08 = arg1->unk_08;
        arg0->unk_F0.unk_00 = arg1->unk_00;
        arg0->unk_F0.unk_04 = arg1->unk_04;
        arg0->unk_F0.unk_08 = arg1->unk_08;
        func_08974068(arg0->unk_E0, arg2);
        return;
    }
    if (arg0->unk_108 == NULL) {
        temp2 = func_0897412C(arg0->unk_E0);
        temp5 = arg0->unk_FC.unk_08;
        temp8 = arg0->unk_F0.unk_08;
        temp8 -= temp5;
        temp4 = arg0->unk_FC.unk_04;
        temp7 = arg0->unk_F0.unk_04;
        temp7 -= temp4;
        temp3 = arg0->unk_FC.unk_00;
        temp6 = arg0->unk_F0.unk_00;
        temp6 -= temp3;
        temp6 *= temp2;
        temp0.unk_00 = temp3 + temp6;
        temp7 *= temp2;
        temp8 *= temp2;
        temp0.unk_04 = temp4 + temp7;
        temp0.unk_08 = temp5 + temp8;
    } else {
        func_08974CC4(&temp0, arg0->unk_108, &temp1, func_0897412C(arg0->unk_E0));
    }
    arg0->unk_FC.unk_00 = temp0.unk_00;
    arg0->unk_FC.unk_04 = temp0.unk_04;
    arg0->unk_FC.unk_08 = temp0.unk_08;
    arg0->unk_F0.unk_00 = arg1->unk_00;
    arg0->unk_F0.unk_04 = arg1->unk_04;
    arg0->unk_F0.unk_08 = arg1->unk_08;
    func_08974068(arg0->unk_E0, arg2);
}
