#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} T;

extern void func_0880416C(void *);
extern u8 D_08A47938[];
extern u8 D_08A47948[];

T *func_08959558(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47938;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47948;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
