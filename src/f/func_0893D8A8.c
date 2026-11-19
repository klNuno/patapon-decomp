#include "common.h"

s8 *func_0893D8A8(s8 *arg0, const s8 *arg1) {
    s32 temp0 = -1;
    s32 temp1 = 0;

    if (*arg1 != 0) {
        do {
            s8 temp2 = arg1[temp1];

            if (temp2 == '.') {
                temp0 = temp1;
            }
            arg0[temp1] = temp2;
            ++temp1;
        } while (arg1[temp1] != 0);
    }
    arg0[temp0] = 0;
    return arg0;
}
