#include "common.h"

void func_0880416C(void *);
void func_0891F3C4(void **, void *);
void func_0891F3CC(void **, void *);
void func_0891F44C(void **, void *, void *, void *);

void *func_0891F3D8(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_0891F3CC(&temp2, arg0);
        func_0891F3C4(&temp3, arg0);
        func_0891F44C(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
