#include "common.h"

typedef struct {
    u8 pad_00[0x08];
    u8 *unk_08;
} T;

extern u8 D_08A48F0C[];
void func_0880416C(void *);

T *func_089D0534(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A48F0C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
