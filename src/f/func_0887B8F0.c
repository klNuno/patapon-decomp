#include "common.h"

void func_0881C7E4(s32);
void func_088226BC(char *, char *, ...);
s32 func_088356D8(char *);
void func_0887B980(u8 *, s32);
void func_0887B9F0(u8 *);
s32 sceKernelChangeThreadPriority(s32, s32);
s32 sceKernelGetThreadId(void);
extern char D_089F9748[];

void func_0887B8F0(u8 *arg0) {
    char sp10[0x100];

    if (*arg0 == 0) {
        *arg0 = 1;
        sceKernelChangeThreadPriority(sceKernelGetThreadId(), 0x13);
        func_088226BC(sp10, D_089F9748, 0x40, 0x40, 0x20, 0x40);
        if (func_088356D8(sp10) == 0) {
            func_0881C7E4(1);
        } else {
            func_0887B980(arg0, 0);
            func_0887B9F0(arg0);
        }
    }
}
