#include "common.h"

void func_0880416C(void *);
extern u8 D_08A46874[];
extern u8 D_08A46884[];

void *func_088FD5A8(void *arg0, s16 arg1) {
    void *volatile *temp = (void *volatile *)arg0;
    if (temp != NULL) {
        *temp = D_08A46874;
        if (temp != NULL) {
            *temp = D_08A46884;
        }
        if (arg1 > 0) {
            func_0880416C((void *)temp);
        }
    }
    return (void *)temp;
}
