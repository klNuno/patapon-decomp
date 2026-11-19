#include "common.h"

extern u8 D_08A47344[];
extern u8 D_08A47354[];
void func_0880416C(void *);

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

T *func_0893DCE0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47344;
            if (arg0 != NULL) {
                arg0->unk_08 = D_08A47354;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
