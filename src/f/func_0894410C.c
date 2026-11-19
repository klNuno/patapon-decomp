#include "common.h"

typedef struct {
    void *unk_00;
} T;

void func_0880416C(void *);
extern u8 D_08A47648[];

T *func_0894410C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47648;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
