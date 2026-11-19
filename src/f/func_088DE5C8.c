#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    s32 unk_506F0;
    u8 pad_506F4[0xB21F0 - 0x506F4];
    s32 unk_B21F0;
} T;

extern int func_08864FC0(s32);
s32 func_088C6494(void *);
void func_0892E67C(void *, s32, s32);
void func_08997A70(void *, s32);
extern void *D_08AD8DD8[];

void func_088DE5C8(T *arg0, s32 arg1)
{
    void *temp;

    func_08864FC0(func_088C6494(&arg0->unk_506F0));
    func_08997A70(&arg0->unk_B21F0, arg1);
    temp = D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL;
    func_0892E67C(temp, arg1, 0);
}
