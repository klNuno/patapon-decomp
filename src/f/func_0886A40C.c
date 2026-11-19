#include "common.h"

typedef struct {
    u8 pad_00[0x84];
    void *unk_84;
} T;

void func_0880416C(void *);
extern u8 D_08A44CF8[];

T *func_0886A40C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_84 = D_08A44CF8;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
