#include "common.h"

s32 func_08810E50(s32 *arg0);
s32 *func_08811B94(s32 *arg0, s32 *arg1);
s32 *func_08811BA4(s32 *arg0);
s32 func_08811BB8(char *arg0, u16 *arg1);
void func_08811BC8(s32 *, s32);
s32 *func_08811C18(s32 *arg0, s32 *arg1);
s32 func_08811C28(s32, s32);

void func_08811AC8(s32 *arg0, s32 arg1, s32 arg2, u16 *arg3) {
    s32 temp;
    s32 temp2;
    struct { s32 unk_00; } temp3;

    temp = func_08811C28(arg1, arg2);
    while (temp > 0) {
        func_08811C18(&temp2, &arg1);
        temp3.unk_00 = temp / 2;
        func_08811BC8(&temp2, temp3.unk_00);
        if (func_08811BB8((char *)func_08810E50(&temp2), arg3) != 0) {
            func_08811B94(&arg1, func_08811BA4(&temp2));
            temp -= temp3.unk_00 + 1;
        } else {
            temp = temp3.unk_00;
        }
    }
    func_08811C18(arg0, &arg1);
}
