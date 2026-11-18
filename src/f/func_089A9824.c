#include "common.h"

s32 sceUtilityUnloadModule(s32);
void func_08820C24(char *, s32);
extern char D_08A07F04[];
extern char D_08A07F4C[];
extern char D_08A07F94[];
extern char D_08A07FE4[];
extern char D_08A08034[];
extern char D_08A0807C[];

s32 func_089A9824(void) {
    s32 ret;

    ret = sceUtilityUnloadModule(0x106);
    if (ret < 0) {
        func_08820C24(D_08A07F04, ret);
    }
    ret = sceUtilityUnloadModule(0x105);
    if (ret < 0) {
        func_08820C24(D_08A07F4C, ret);
    }
    ret = sceUtilityUnloadModule(0x104);
    if (ret < 0) {
        func_08820C24(D_08A07F94, ret);
    }
    ret = sceUtilityUnloadModule(0x103);
    if (ret < 0) {
        func_08820C24(D_08A07FE4, ret);
    }
    ret = sceUtilityUnloadModule(0x102);
    if (ret < 0) {
        func_08820C24(D_08A08034, ret);
    }
    ret = sceUtilityUnloadModule(0x100);
    if (ret < 0) {
        func_08820C24(D_08A0807C, ret);
    }
    return ret;
}
