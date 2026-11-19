#include "common.h"

u32 func_0898C4A4(s32 arg0, const s32 *arg1, u32 arg2) {
    u32 temp = 0;
    u32 temp1 = 0;

    if (arg2 != 0) {
        do {
            if (arg0 == *arg1) {
                temp++;
                temp1++;
            } else {
                temp1++;
            }
            arg1++;
        } while (temp1 < arg2);
    }
    return temp;
}
