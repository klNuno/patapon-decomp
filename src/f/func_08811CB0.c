#include "common.h"

void func_08810A44(s32 *, s32);
void func_08810AB8(s32 *, s32 *);
s32 func_08810AF0(s32 *);
s32 func_08810C28(s32, s32);
s32 func_08810C38(s32 *);
void func_08811D7C(s32 *, s32);
s32 func_08811DB4(s32, s32);

void func_08811CB0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 mid;
    struct { s32 unk_00; } half;
    s32 len;

    len = func_08811DB4(arg1, arg2);
    while (len > 0) {
        func_08810AB8(&mid, &arg1);
        half.unk_00 = len / 2;
        func_08811D7C(&mid, half.unk_00);
        if (func_08810C28(func_08810C38(&mid), arg3) != 0) {
            func_08810A44(&arg1, func_08810AF0(&mid));
            len -= half.unk_00 + 1;
        } else {
            len = half.unk_00;
        }
    }
    func_08810AB8(arg0, &arg1);
}
