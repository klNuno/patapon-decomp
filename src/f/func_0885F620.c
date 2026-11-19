#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} T;

void func_0880416C(void *);
extern u8 D_08A44A3C[];

T *func_0885F620(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_10 = D_08A44A3C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
