#include "common.h"

typedef struct {
    u8 pad_00[0x314];
    u8 unk_314[1];
} T;

void func_0880416C(void *);
void *func_088CF060(void *, s16);
T *func_088CF1EC(T *arg0, s16 arg1);

T *func_088CF250(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_088CF060(arg0->unk_314, 0);
            func_088CF1EC(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
