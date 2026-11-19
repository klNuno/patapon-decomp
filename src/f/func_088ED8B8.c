#include "common.h"

typedef struct {
    u8 pad_00[0x45A8];
    s32 unk_45A8;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} U;

extern u8 *D_08AD1F14[];
void func_08852F00(void *, s32);

void func_088ED8B8(void *arg0, void *arg1)
{
    U *temp = (U *)D_08AD1F14[0];
    T *temp2 = (temp != NULL ? temp : NULL)->unk_14A0;
    temp2->unk_45A8 = 1;
    func_08852F00(arg1, 0);
}
