#include "common.h"

void func_088A284C(void *, void *);
void func_088A2C90(void *, void *);
void func_088A2D78(void *, void *);
void func_088A2E3C(void *, void *);
void func_088A3060(void *, void *);

s32 func_088A2688(void *arg0, s32 *arg1, void *arg2) {
    switch (*arg1) {
    case 0x64:
    case 0x65:
    case 0x66:
        break;
    case 9:
        func_088A3060(arg0, arg2);
        break;
    case 0x25:
        func_088A2D78(arg0, arg2);
        break;
    case 2:
    case 0x16:
        func_088A2E3C(arg0, arg2);
        break;
    case 0x1A:
        func_088A284C(arg0, arg2);
        break;
    case 0x1C:
        func_088A2C90(arg0, arg2);
        break;
    case 0x27:
        func_088A2E3C(arg0, arg2);
        break;
    case 1:
    case 0:
        break;
    }
    return *arg1;
}
