#include "common.h"

u32 func_088B06CC(u16 *arg0, const u16 *arg1)
{
    u16 temp = *arg1;
    u32 temp2 = 0;

    if (temp != 0) {
        do {
            *arg0 = temp;
            if (temp2 >= 0x180U) {
                arg0--;
                break;
            }
            temp = *++arg1;
            arg0++;
            temp2++;
        } while (temp != 0);
    }
    *arg0 = 0;
    return temp2;
}
