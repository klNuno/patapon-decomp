#include "common.h"

void func_0880416C(void *);
void func_0880DCAC(void *, s32);
extern u8 D_08A44668[];

typedef struct {
    void *unk_00;
} T;

T *func_0880F2B4(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44668;
        func_0880DCAC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
