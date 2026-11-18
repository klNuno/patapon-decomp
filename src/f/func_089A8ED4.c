#include "common.h"

void func_08820C24(char *, s32);
s32 sceHttpEnd(void);
s32 sceHttpInit(u32);
s32 sceHttpLoadSystemCookie(void);
s32 sceHttpSaveSystemCookie(void);
s32 sceHttpsEnd(void);
s32 sceHttpsInit(s32, s32, s32, s32);
s32 sceHttpsLoadDefaultCert(s32, s32);
s32 sceSslEnd(void);
s32 sceSslInit(u32);

extern char D_08A079F4[];
extern char D_08A07A24[];
extern char D_08A07A48[];
extern char D_08A07A6C[];
extern char D_08A07A8C[];
extern char D_08A07AB0[];
extern char D_08A07AD4[];
extern char D_08A07AF8[];
extern char D_08A07B28[];

static inline void unk_00(void) {
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
}

s32 func_089A8ED4(void) {
    s32 ret;
    s32 temp;

    ret = sceSslInit(0x28000);
    if (ret < 0) {
        func_08820C24(D_08A07A8C, ret);
        return ret;
    }
    ret = sceHttpInit(0x25800);
    if (ret < 0) {
        func_08820C24(D_08A07AB0, ret);
        unk_00();
        return ret;
    }
    ret = sceHttpsInit(0, 0, 0, 0);
    if (ret < 0) {
        func_08820C24(D_08A07AD4, ret);
        unk_00();
        return ret;
    }
    ret = sceHttpsLoadDefaultCert(0, 0);
    if (ret < 0) {
        func_08820C24(D_08A07AF8, ret);
        unk_00();
        return ret;
    }
    temp = sceHttpLoadSystemCookie();
    ret = temp;
    if (ret < 0) {
        func_08820C24(D_08A07B28, ret);
        unk_00();
        return ret;
    }
    return temp;
}
