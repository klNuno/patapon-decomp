#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    char *unk_0C;
} T;

extern void func_088D35D4(char *, s32, s32);

void func_088D1EF0(T *arg0)
{
    s32 temp2 = *(volatile s32 *)&arg0->unk_04;
    s32 temp1 = *(volatile s32 *)&arg0->unk_00;
    func_088D35D4(arg0->unk_0C, temp1, temp2);
}
