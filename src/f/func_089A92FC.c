#include "common.h"

void func_08820C24(char *, s32);
s32 sceHttpEnd(void);
s32 sceHttpSaveSystemCookie(void);
s32 sceHttpsEnd(void);
s32 sceNetApctlTerm(void);
s32 sceNetInetTerm(void);
s32 sceNetResolverTerm(void);
s32 sceNetTerm(void);
s32 sceSslEnd(void);
extern char D_08A079CC[];
extern char D_08A079F4[];
extern char D_08A07A24[];
extern char D_08A07A48[];
extern char D_08A07A6C[];
extern char D_08A07BD0[];
extern char D_08A07BFC[];
extern char D_08A07C24[];

void func_089A92FC(void) {
    s32 ret;

    ret = sceHttpSaveSystemCookie();
    if (ret < 0) {
        func_08820C24(D_08A079F4, ret);
    }
    ret = sceHttpsEnd();
    if (ret < 0) {
        func_08820C24(D_08A07A24, ret);
    }
    ret = sceHttpEnd();
    if (ret < 0) {
        func_08820C24(D_08A07A48, ret);
    }
    ret = sceSslEnd();
    if (ret < 0) {
        func_08820C24(D_08A07A6C, ret);
    }
    ret = sceNetApctlTerm();
    if (ret < 0) {
        func_08820C24(D_08A079CC, ret);
    }
    ret = sceNetResolverTerm();
    if (ret < 0) {
        func_08820C24(D_08A07BD0, ret);
    }
    ret = sceNetInetTerm();
    if (ret < 0) {
        func_08820C24(D_08A07BFC, ret);
    }
    ret = sceNetTerm();
    if (ret < 0) {
        func_08820C24(D_08A07C24, ret);
    }
}
