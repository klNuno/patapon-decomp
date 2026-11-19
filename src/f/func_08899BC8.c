#include "common.h"

typedef struct {
    u8 pad_00[8];
} L;

void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08864A30(L *);
void func_08864A68(L *, s32);

void func_08899BC8(void)
{
    L temp;

    func_08864A30(&temp);
    func_08814BB4(0);
    func_08814BB4(4);
    func_08814C0C(1);
    func_08864A68(&temp, -1);
}
