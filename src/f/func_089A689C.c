#include "common.h"

extern u8 D_08A486A4[];
extern u8 D_08A486C0[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];
void func_0880416C(void *);

void *volatile *func_089A689C(void *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A486A4;
        if (arg0 != NULL) {
            *arg0 = D_08A486C0;
            if (arg0 != NULL) {
                *arg0 = D_08A45598;
                if (arg0 != NULL) {
                    *arg0 = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
