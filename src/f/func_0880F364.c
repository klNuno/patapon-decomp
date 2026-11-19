#include "common.h"

s32 func_08811458(void *arg0, u16 *arg1);

typedef struct {
    u16 unk_00;
    u8 pad_02[2];
} T;

void func_0880F364(u8 *arg0, u16 arg1)
{
    T temp;
    temp.unk_00 = arg1;
    func_08811458(arg0 + 0x20, &temp.unk_00);
}
