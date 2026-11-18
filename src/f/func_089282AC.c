#include "common.h"

void func_0892835C(void *, s32 *);
void func_08928828(void *, s32 *);
void func_089288E4(void *, s32 *);
void func_08928A7C(void *, s32 *);
void func_08928B70(void *, s32 *);

s32 func_089282AC(void *arg0, s32 *arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    switch (*arg1) {
    case 0:
        func_0892835C(arg0, arg1);
        break;
    case 1:
        func_08928828(arg0, arg1);
        break;
    case 2:
        func_089288E4(arg0, arg1);
        break;
    case 3:
        func_08928A7C(arg0, arg1);
        break;
    case 4:
        func_08928B70(arg0, arg1);
        break;
    }
    return 1;
}
