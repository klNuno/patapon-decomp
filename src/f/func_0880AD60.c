#include "common.h"

s32 func_0880ADB8(void);

s32 func_0880AD60(s32 *arg0) {
    s32 temp = *arg0;
    s32 temp2 = func_0880ADB8();
    return temp == temp2 ? ~func_0880ADB8() : temp;
}
