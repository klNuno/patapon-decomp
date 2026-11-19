#include "common.h"

void func_0880416C(void *);
extern u8 D_08A47F74[];
extern u8 D_08A46A0C[];

void *func_08975D5C(void *arg0, s16 arg1) {
    void *volatile *temp = (void *volatile *)arg0;
    if (temp != NULL) {
        *temp = D_08A47F74;
        if (temp != NULL) {
            *temp = D_08A46A0C;
        }
        if (arg1 > 0) {
            func_0880416C((void *)temp);
        }
    }
    return (void *)temp;
}
