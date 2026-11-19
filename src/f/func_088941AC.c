#include "common.h"

typedef struct T0 {
    u8 pad_00[4];
    s32 unk_04;
} T0;

typedef struct N N;

typedef union {
    s32 unk_00;
    f32 unk_00f;
} I;

void func_08891FF4(s32 *, s32 *, s32);
s32 func_08891FEC(s32 *);
void func_08891C84(T0 *, N *);
f32 *func_08891FDC(f32 *arg0, f32 *arg1);

void func_088941AC(T0 *arg0) {
    f32 temp3;
    volatile I temp2;
    volatile I temp1;
    s32 temp0;

    temp2.unk_00 = arg0->unk_04;
    temp1.unk_00f = temp2.unk_00f;
    func_08891FF4(&temp0, (s32 *)&temp1, 0);
    func_08891C84(arg0, (N *)func_08891FEC(&temp0));
    func_08891FDC(&temp3, (f32 *)&temp1);
}
