#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08; } T1;
typedef struct {
    u8 pad_00[0x144];
    char unk_144[0x10];
    T1 unk_154, unk_160;
    void *unk_16C;
} T;
extern void func_08974068(char *, f32);
f32 func_0897412C(char *);
void func_08974CC4(T1 *, void *, T1 *, f32);

void func_0897470C(T *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    T1 temp0, temp1;
    f32 temp2, temp3, temp4, temp5, temp6, temp7, temp8;

    arg0->unk_16C = NULL;
    if (0.0f == arg4) {
        arg0->unk_160.unk_00 = arg1;
        arg0->unk_160.unk_04 = arg2;
        arg0->unk_160.unk_08 = arg3;
        arg0->unk_154.unk_00 = arg1;
        arg0->unk_154.unk_04 = arg2;
        arg0->unk_154.unk_08 = arg3;
        func_08974068(arg0->unk_144, arg4);
        return;
    }
    if (*(void *volatile *)&arg0->unk_16C == NULL) {
        temp2 = func_0897412C(arg0->unk_144);
        temp5 = arg0->unk_160.unk_08;
        temp8 = arg0->unk_154.unk_08;
        temp8 -= temp5;
        temp4 = arg0->unk_160.unk_04;
        temp7 = arg0->unk_154.unk_04;
        temp7 -= temp4;
        temp3 = arg0->unk_160.unk_00;
        temp6 = arg0->unk_154.unk_00;
        temp6 -= temp3;
        temp6 *= temp2;
        temp0.unk_00 = temp3 + temp6;
        temp7 *= temp2;
        temp8 *= temp2;
        temp0.unk_04 = temp4 + temp7;
        temp0.unk_08 = temp5 + temp8;
    } else {
        func_08974CC4(&temp0, arg0->unk_16C, &temp1, func_0897412C(arg0->unk_144));
    }
    arg0->unk_160.unk_00 = temp0.unk_00;
    arg0->unk_160.unk_04 = temp0.unk_04;
    arg0->unk_160.unk_08 = temp0.unk_08;
    arg0->unk_154.unk_00 = arg1;
    arg0->unk_154.unk_04 = arg2;
    arg0->unk_154.unk_08 = arg3;
    func_08974068(arg0->unk_144, arg4);
}
