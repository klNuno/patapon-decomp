#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
void func_08853450(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, char *);

void func_08851BB4(void *arg0, void *arg1) {
    char temp[0x100];

    func_08853894(arg1, temp);
    func_0885356C(arg1, 0, 1, 4);
    func_08853450(arg1, 0);
    func_088533F8(arg1, 0);
    func_08852F00(arg1, 0);
}
}
