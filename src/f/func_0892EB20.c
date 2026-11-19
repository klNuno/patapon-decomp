#include "common.h"

void func_0880416C(void *);
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A47010[];
extern u8 D_08A4702C[];

void *func_0892EB20(void *arg0, s16 arg1) {
    void *volatile *temp = (void *volatile *)arg0;
    if (temp != NULL) {
        *temp = D_08A47010;
        if (temp != NULL) {
            *temp = D_08A4702C;
            if (temp != NULL) {
                *temp = D_08A45598;
                if (temp != NULL) {
                    *temp = D_08A4489C;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C((void *)temp);
        }
    }
    return (void *)temp;
}
