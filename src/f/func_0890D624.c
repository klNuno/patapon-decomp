#include "common.h"

void func_0880416C(void *);
void func_0890D610(void **, void *);
void func_0890D618(void **, void *);
void func_0890D698(void **, void *, void *, void *);

void *func_0890D624(void *arg0, s16 arg1) {
    void *temp;
    void *temp2;
    void *temp3;

    if (arg0 != NULL) {
        func_0890D618(&temp2, arg0);
        func_0890D610(&temp3, arg0);
        func_0890D698(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
