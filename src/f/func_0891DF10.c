#include "common.h"

void func_089139A4(void *, s32, void *, s32);
void func_08913708(char *, s32);
extern void func_08913AE0(char *);
extern char D_089E6350[];

void func_0891DF10(char *arg0, s32 arg1, u8 arg2) {
    if (arg2 == 1) {
        func_089139A4(arg0 + 0x280, 0, D_089E6350, 1);
    }
    func_08913708(arg0 + 0x280, arg1);
    func_08913AE0(arg0 + 0x280);
}
