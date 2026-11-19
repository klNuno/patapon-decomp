#include "common.h"

typedef struct {
    u8 pad_00[0x848C];
    u8 unk_848C;
} T;

void func_088D9A70(u8 *);
void func_088D9A2C(u8 *, u8 *);
void func_08870834(u8 *, s32);

void func_088D99E8(T *arg0)
{
    u8 temp[0x10];

    func_088D9A70(temp);
    func_088D9A2C(temp, &arg0->unk_848C);
    func_08870834(temp, -1);
}
