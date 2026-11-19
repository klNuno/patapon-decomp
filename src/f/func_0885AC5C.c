#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    u8 *unk_40;
} T;

extern u8 D_08A44934[];
void func_0880416C(void *);

T *func_0885AC5C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_40 = D_08A44934;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
