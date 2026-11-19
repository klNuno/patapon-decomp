#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    char *unk_14;
} Unk_08937268;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0889CC4C(char *, s32);

void func_08937268(Unk_08937268 *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    char *temp2 = arg0->unk_14 + 0xCF0;

    func_0889CC4C(temp2, *temp != 0);
    func_08852F00(arg1, 0);
}
