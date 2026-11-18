#include "common.h"

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 func_08852F24(void *);
void func_08852F48(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_0884FADC(void *arg0, void *arg1) {
    s32 temp;

    temp = func_08852EB8(arg1);
    if (temp == 0) {
        func_08852F48(arg1, *func_0885356C(arg1, 0, 1, 4));
        func_08852EDC(arg1, temp + 1);
    }
    if (func_08852F24(arg1) > 0) {
        func_08852F48(arg1, func_08852F24(arg1) - 1);
        return;
    }
    func_08852F48(arg1, 0);
    func_08852F00(arg1, 0);
}
