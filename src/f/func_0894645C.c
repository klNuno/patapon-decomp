#include "common.h"

typedef struct {
    u8 pad_00[8];
    void **unk_08;
} T0894645C;

extern void *D_08A47714[];
extern void *D_08A47724[];
void func_0880416C(void *);

T0894645C *func_0894645C(T0894645C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47714;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47724;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
