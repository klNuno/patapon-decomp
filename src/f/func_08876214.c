#include "common.h"

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u32 unk_28;
    u8 pad_2C[0x4];
} E_08876214;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x4];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x18];
    char unk_50[0x20];
    s32 unk_70;
    E_08876214 unk_74[1];
} S_08876214;

s32 func_0888AFAC(char *);
void func_08822B3C(char *, char *);

void func_08876214(S_08876214 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, char *arg6, char **arg7, u32 arg8) {
    u32 i;
    char *s;

    arg0->unk_20 = arg1;
    arg0->unk_28 = arg2;
    arg0->unk_2C = arg3;
    arg0->unk_30 = arg4;
    arg0->unk_34 = arg5;
    if (arg6 != NULL) {
        arg0->unk_70 = func_0888AFAC(arg6);
        func_08822B3C(arg0->unk_50, arg6);
    }
    for (i = 0; i < arg8; i++) {
        if (arg7[i] != NULL) {
            arg0->unk_74[i].unk_24 = 0;
            arg0->unk_74[i].unk_28 = i;
            s = arg7[i];
            arg0->unk_74[i].unk_20 = func_0888AFAC(s);
            func_08822B3C(arg0->unk_74[i].unk_00, s);
        }
    }
}
