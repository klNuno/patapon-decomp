#include "common.h"

typedef struct H_0886D4AC H_0886D4AC;

char *func_0886CBF4(char *);
void func_0886D568(char *, char *);
H_0886D4AC *func_0886D4AC(H_0886D4AC *, s16);

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    char unk_10[0x10];
} S;

void func_088C5AD0(S *arg0) {
    s32 temp[4];

    func_0886CBF4((char *)temp);
    func_0886D568((char *)temp, arg0->unk_10);
    func_0886D4AC((H_0886D4AC *)temp, -1);
    arg0->unk_0C = 0;
}
