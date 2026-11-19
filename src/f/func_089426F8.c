#include "common.h"

void func_0880416C(void *);
extern u8 D_08A47500[];
extern u8 D_08A45598[];
extern u8 D_08A4489C[];

void *func_089426F8(void *arg0, s16 arg1) {
    u8 *volatile *temp = (u8 *volatile *)arg0;
    if (temp != NULL) {
        *temp = D_08A47500;
        if (temp != NULL) {
            *temp = D_08A45598;
            if (temp != NULL) {
                *temp = D_08A4489C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
