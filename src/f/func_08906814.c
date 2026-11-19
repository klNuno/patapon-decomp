#include "common.h"

typedef struct {
    u8 unk_00[0x22D4];
    u8 unk_22D4[0x22D4];
    u8 pad_45A8[4];
    s32 unk_45AC;
} T;

typedef struct {
    u8 pad_00[0x14A0];
    T *unk_14A0;
} G_08873BB8;

extern G_08873BB8 *D_08AD1F14[];
void func_0881F120(void *, void *, s32);
void func_08852F00(void *, s32);

void func_08906814(void *arg0, void *arg1)
{
    G_08873BB8 *temp1 = D_08AD1F14[0];
    T *temp = (temp1 != NULL ? temp1 : NULL)->unk_14A0;

    if (temp->unk_45AC != 0) {
        func_0881F120(temp, temp->unk_22D4, 0x22D4);
        temp->unk_45AC = 0;
    }
    func_08852F00(arg1, 0);
}
