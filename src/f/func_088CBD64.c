#include "common.h"

u32 *func_088CBF74(u32 *, void *, void *);
u32 *func_088CC0C4(u32 *, void *, void *);
void func_088CC1E0(u32 *, void *, void *);
void func_088CC32C(u32 *, void *, void *);

s32 func_088CBD64(u32 *arg0, void *arg1, void *arg2) {
    u32 w;
    u32 sub;

    while (1) {
        w = *arg0++;
        switch (w >> 24) {
        case 0xB:
            return 1;
        case 0xA:
            func_088CBD64(func_088CBF74(arg0 - 2, arg1, arg2), arg1, arg2);
            break;
        case 0x1:
            func_088CC1E0(arg0 - 2, arg1, arg2);
            break;
        case 0x2:
            func_088CBF74(arg0 - 2, arg1, arg2);
            break;
        case 0xA0:
        case 0xA1:
        case 0xA2:
        case 0xA3:
        case 0xA4:
        case 0xA5:
        case 0xA6:
        case 0xA7:
        case 0xB0:
            func_088CC32C(arg0 - 2, arg1, arg2);
            break;
        case 0x8:
        case 0x9:
            arg0 = func_088CBF74(arg0 - 2, arg1, arg2);
            break;
        case 0xE:
            sub = (w >> 16) & 0xFF;
            if (sub == 0x12) {
                return 1;
            }
            if (sub == 0x11) {
                func_088CBD64(func_088CC0C4(arg0 - 1, arg1, arg2), arg1, arg2);
                arg0++;
            }
            break;
        }
    }
}
