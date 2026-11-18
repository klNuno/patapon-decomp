#include "common.h"

s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, u8 *);
void func_08853450(void *, s32);
void func_088533F8(void *, s32);
void func_08852F00(void *, s32);

void func_088FC078(void *arg0, void *arg1) {
    u8 sp10[0x100];

    func_0885356C(arg1, 1, 1, 4);
    func_0885356C(arg1, 2, 1, 4);
    func_0885356C(arg1, 3, 1, 4);
    func_08853894(arg1, sp10);
    func_0885356C(arg1, 0, 1, 4);
    func_08853450(arg1, 0);
    func_088533F8(arg1, 0);
    func_08852F00(arg1, 0);
}
