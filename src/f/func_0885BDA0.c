#include "common.h"

void func_0880416C(void *);
extern u8 D_08A449F4[];

typedef struct {
    u8 *unk_00;
} S;

S *func_0885BDA0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A449F4;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
