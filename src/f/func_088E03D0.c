#include "common.h"

void func_0880416C(void *);
void func_088E0398(void **, void *);
void func_088E03A0(void **, void *);
void func_088E0444(void **, void *, void *, void *);

void *func_088E03D0(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_088E03A0(&temp2, arg0);
        func_088E0398(&temp3, arg0);
        func_088E0444(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
