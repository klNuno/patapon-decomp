#include "common.h"

typedef struct S8 {
    s32 unk_00;
    s32 unk_04;
} S8;

typedef struct S {
    u8 pad_00[0x8];
    S8 *unk_08;
} S;

s32 func_08852EA8(char *arg0);
void func_08820C24(char *, s32, s32);
extern char D_089F8804[];

s32 func_08852C5C(S *arg0, s32 arg1, s32 arg2) {
    s32 ret = 0;

    if (func_08852EA8((char *)arg0) & 4) {
        func_08820C24(D_089F8804, arg2, arg1);
    }
    switch (arg2) {
    case 0:
        ret = arg0->unk_08->unk_00 + arg1;
        break;
    case 1:
        ret = arg0->unk_08->unk_04 + arg1;
        break;
    }
    arg0->unk_08->unk_04 = ret;
    return ret;
}
