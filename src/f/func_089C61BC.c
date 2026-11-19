#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *volatile unk_10;
} T;

void func_0880416C(void *);
extern u8 D_08A48CF0[];
extern u8 D_08A44A3C[];

T *func_089C61BC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_10 = D_08A48CF0;
        if (arg0 != NULL) {
            arg0->unk_10 = D_08A44A3C;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
