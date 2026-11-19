#include "common.h"

void func_0880416C(void *);
void func_08807250(void *, s32);
extern u8 D_08A44544[];

typedef struct {
    void *unk_00;
} T;

T *func_088071F4(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44544;
        func_08807250(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
