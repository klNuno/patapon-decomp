#include "common.h"

void func_0880416C(void *);
void func_088D6BA8(void **, void *);
void func_088D6BB0(void **, void *);
void func_088D6C30(void **, void *, void *, void *);

void *func_088D6BBC(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_088D6BB0(&temp2, arg0);
        func_088D6BA8(&temp3, arg0);
        func_088D6C30(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
