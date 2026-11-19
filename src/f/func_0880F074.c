#include "common.h"

void func_0880416C(void *);
extern u8 D_08A44690[];

typedef struct {
    void *unk_00;
} T;

void func_0880DCAC(T *, s16);

T *func_0880F074(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44690;
        func_0880DCAC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
