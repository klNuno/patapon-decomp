#include "common.h"

extern u8 D_08A443BC[];
void func_0880416C(void *);
void func_08806998(u8 **, s16);

u8 **func_08806A9C(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A443BC;
        func_08806998(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
