#include "common.h"

void func_0880416C(void *);
void func_08947B94(void **, void *);
void func_08947B9C(void **, void *);
void func_089477D8(void **, void *, void *, void *);

void *func_08947764(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_08947B9C(&temp2, arg0);
        func_08947B94(&temp3, arg0);
        func_089477D8(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
