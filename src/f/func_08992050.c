#include "common.h"

void func_0880416C(void *);
extern u8 D_08A48544[];
extern u8 D_08A48560[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];

u8 *volatile *func_08992050(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[0] = D_08A48544;
        if (arg0 != NULL) {
            arg0[0] = D_08A48560;
            if (arg0 != NULL) {
                arg0[0] = D_08A45598;
                if (arg0 != NULL) {
                    arg0[0] = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
