#include "common.h"

extern u8 D_089FB8B8[];

s32 func_088CBF40(s32 *arg0, s32 arg1) {
    s32 temp = *arg0;
    if (temp != 0) {
        if (D_089FB8B8[0] != 0) {
            temp += arg1;
            *arg0 = temp;
        } else {
            temp -= arg1;
            *arg0 = temp;
        }
    }
    return temp;
}
