#include "common.h"

void func_08940544(s32 *, void *, s32, s32);
void func_0894065C(s32 *, void *);
void func_08940664(s32 *, void *);
void func_08941528(void *, s32, void *);

s32 func_08945358(u8 *arg0)
{
    s32 temp;
    s32 temp2;
    s32 temp3;
    s32 temp4;

    func_08940664(&temp2, arg0 + 0x380);
    func_0894065C(&temp3, arg0 + 0x380);
    func_08940544(&temp, arg0 + 0x380, temp2, temp3);
    func_0894065C(&temp4, arg0 + 0x380);
    func_08941528(arg0 + 0x380, temp4, arg0 + 0x3C4);
    return 1;
}
