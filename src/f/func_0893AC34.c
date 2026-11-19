#include "common.h"

void func_0880416C(void *);
void func_0893AF68(void *);
u8 *func_0893A850(u8 *, s16);

typedef struct {
    u8 pad_00[4];
    u8 unk_04[1];
} T;

T *func_0893AC34(T *arg0, s16 arg1) {
    u8 *temp;

    if (arg0 != NULL) {
        func_0893AF68(arg0);
        temp = arg0->unk_04;
        if (temp != NULL) {
            func_0893A850(temp, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
