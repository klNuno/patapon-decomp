#include "common.h"

extern u8 D_08A47854[];
extern u8 D_08A47864[];
void func_0880416C(void *);

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

T *func_0894E5D4(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47854;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47864;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
