#include "common.h"

extern u8 *D_08AD6838[];
void func_088B06CC(s16 *, const u8 *);

s16 *func_088B04C4(s32 arg0, s16 *arg1)
{
    u8 *temp = D_08AD6838[0];
    if (temp == NULL) {
        *arg1 = 0;
        return arg1;
    }
    func_088B06CC(arg1, temp + (arg0 << 6));
    return arg1;
}
