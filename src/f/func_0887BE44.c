#include "common.h"

void func_08865EE0(void *);
void func_088665C0(void *);
extern void func_0887BFD4(char *, s32, s32);
extern u8 D_08A45224[];
extern u8 D_08A45230[];
extern u8 D_08A4523C[];

char *func_0887BE44(char *arg0, s32 arg1) {
    *(void **)(arg0 + 0x5D10) = D_08A45224;
    *(s32 *)(arg0 + 0x0) = arg1;
    *(s32 *)(arg0 + 0x4) = 0;
    func_088665C0(arg0 + 0x10);
    *(u8 *)(arg0 + 0x5C30) = 1;
    *(void **)(arg0 + 0x5C50) = D_08A4523C;
    *(s32 *)(arg0 + 0x5C34) = 0;
    *(s32 *)(arg0 + 0x5C38) = 0;
    *(void **)(arg0 + 0x5C70) = D_08A45230;
    *(s32 *)(arg0 + 0x5C54) = 0;
    *(s32 *)(arg0 + 0x5C58) = 0;
    func_08865EE0(arg0 + 0x5C80);
    func_0887BFD4(arg0, 0, 0);
    return arg0;
}
