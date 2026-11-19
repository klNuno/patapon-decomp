#include "common.h"

s32 func_08852EB8(s32);
void func_08852EDC(s32, s32);
extern void func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);

void func_088EB660(void *arg0, s32 arg1) {
    s32 temp = func_08852EB8(arg1);
    if (temp == 0) {
        func_0885356C(arg1, 0, 1, 4);
        ++temp;
        func_08852EDC(arg1, temp);
    }
    if (temp == 1) {
        func_08852F00(arg1, 0);
    }
}
