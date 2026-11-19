#include "common.h"

typedef struct {
    u8 pad_00[0x390];
    s32 unk_390;
    s32 unk_394;
} T;

s32 func_0885AB7C(s32, s32, s32);
s32 func_0887744C(u8 *, char *, s32);
extern char D_08A03438[];
extern u8 *D_08AD1F14[];

void func_08937878(T *arg0)
{
    u8 *p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    s32 temp = func_0887744C(p, D_08A03438, 0xF);

    arg0->unk_390 = func_0885AB7C(temp, 0, 0);
    arg0->unk_394 = func_0885AB7C(temp, 1, 0);
}
