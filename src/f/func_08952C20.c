#include "common.h"
void func_08952C20(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 *temp = arg1;
    do {
        s32 temp1 = *arg0;
        *arg0++ = *temp;
        *temp = temp1;
        if (arg0 == arg1) {
            ++temp;
            if (temp == arg2) {
                return;
            }
            arg1 = temp;
        } else {
            ++temp;
            if (temp == arg2) {
                temp = arg1;
            }
        }
    } while (1);
}
