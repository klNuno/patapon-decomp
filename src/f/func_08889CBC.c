#include "common.h"

void func_0880416C(void *);
void func_08889CA8(void **, void *);
void func_08889CB0(void **, void *);
void func_08889D30(void **, void *, void *, void *);

void *func_08889CBC(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_08889CB0(&temp2, arg0);
        func_08889CA8(&temp3, arg0);
        func_08889D30(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
