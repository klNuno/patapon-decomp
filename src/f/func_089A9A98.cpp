#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0xC];
    s32 unk_1510;
    u8 unk_1514[0xC];
    u8 unk_1520[0x166C - 0x1520];
    u8 unk_166C[0x1A6C - 0x166C];
    s32 unk_1A6C;
    u8 pad_1A70[2];
    bool unk_1A72;
} S;

extern char D_08A080C8[];
extern char D_08A080E4[];

void func_08885840(void *, s32);
s32 func_08822BC4(char *);
char *func_088860C0(void *);
char *func_088860D0(void *);
s32 func_08822BDC(char *, char *, s32);
void func_08822B3C(void *, char *);
void func_08822918(void *, char *);
s32 func_0887ED88(s32, s32);
s32 func_0887ED98(s32, s32);
void func_0893F4EC(void *);
void func_0893F4C0(void *, void *, s32, s32, s32);
void func_0893F518(void *, s32);

s32 func_089A9A98(S *arg0) {
    char *str;
    s32 n;

    switch (arg0->unk_1A6C) {
    case 1:
        func_08885840(arg0->unk_1520, arg0->unk_1500);
        str = D_08A080C8;
        n = func_08822BC4(str);
        if (func_088860C0(arg0->unk_1520) != NULL && func_08822BDC(str, func_088860D0(arg0->unk_1520), n) == 0) {
            func_08822B3C(arg0->unk_166C, func_088860D0(arg0->unk_1520) + n);
            func_08822918(arg0->unk_166C, D_08A080E4);
            func_08822918(arg0->unk_166C, func_088860C0(arg0->unk_1520) + 0x58);
            arg0->unk_1A6C = 2;
        }
        break;
    case 2:
        if (func_0887ED88(arg0->unk_1500, 0x2000) != 0) {
            func_0893F4EC(arg0->unk_1514);
            func_0893F4C0(arg0->unk_1514, arg0->unk_166C, 0x4000, 0x10, 0x200);
            arg0->unk_1510 = 0;
            func_0893F518(arg0->unk_1514, 0);
            arg0->unk_1A72 = 0;
        }
        if (func_0887ED88(arg0->unk_1500, 0x4000) != 0) {
            func_0893F4EC(arg0->unk_1514);
        }
        if (func_0887ED98(arg0->unk_1500, 0x8000) != 0) {
            arg0->unk_1A72 = !arg0->unk_1A72;
            func_0893F518(arg0->unk_1514, arg0->unk_1A72);
        }
        break;
    }
    return 0x10000;
}

}
