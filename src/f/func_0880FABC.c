#include "common.h"

s32 func_0880DF7C(s32);
s32 func_0880DFA4(s32);
s32 func_0880DFC4(s32 arg0);
extern s32 *func_0880ECF4(s32);
extern s32 func_0880ED14(s32);

void func_0880FABC(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *temp = arg2;
    s32 *temp2 = arg1;
    s32 temp3 = arg0;

    if (func_0880DFC4(temp3) == 0) {
        *temp2 = func_0880DFA4(temp3);
        *temp = (u8)func_0880ED14(temp3);
    } else {
        *temp2 = func_0880DF7C(temp3);
        *temp = *func_0880ECF4(temp3);
    }
}
