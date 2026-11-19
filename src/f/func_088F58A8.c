#include "common.h"

typedef struct {
    u8 pad_00[0x1DC];
    void *unk_1DC;
} T;

void func_0880416C(void *);
extern u8 D_08A46718[];

T *func_088F58A8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1DC = D_08A46718;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
