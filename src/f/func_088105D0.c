#include "common.h"

void func_0880416C(s32 *);
void func_08810658(s32, s32, s32);
s32 *func_08810674(s32 *);
s32 func_08810698(s32 *);
void func_088106BC(s32 *);

s32 *func_088105D0(s32 *arg0, s16 arg1) {
    s32 temp_s0;

    if (arg0 != NULL) {
        func_088106BC(arg0);
        if (*arg0 != 0) {
            temp_s0 = func_08810698(arg0);
            func_08810658(temp_s0, *arg0, *func_08810674(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
