#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} T0;

typedef union {
    s32 unk_00;
    f32 unk_04;

} U;

void func_08963D38(T0 *, s32);
f32 *func_08964090(f32 *arg0, f32 *arg1);
s32 func_089640A0(s32 *);
void func_089640A8(s32 *, s32 *, s32);

void func_08965590(T0 *arg0) {
    f32 temp;
    volatile U temp2;
    U temp3;
    s32 temp4;

    temp2.unk_00 = arg0->unk_04;
    temp3.unk_04 = temp2.unk_04;
    func_089640A8(&temp4, &temp3.unk_00, 0);
    func_08963D38(arg0, func_089640A0(&temp4));
    func_08964090(&temp, &temp3.unk_04);
}
