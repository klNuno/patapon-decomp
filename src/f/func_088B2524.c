#include "common.h"

void func_0880416C(void *);
extern u8 D_08A45C3C[];
extern u8 D_08A45C4C[];

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

T *func_088B2524(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A45C3C;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A45C4C;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
