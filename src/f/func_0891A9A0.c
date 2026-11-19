#include "common.h"

typedef struct {
    u8 pad_00[0x6D0];
    void *unk_6D0;
} T;

extern u8 D_08A46B48[];
void func_088F23D0(void *, s32);
void func_0880416C(void *);

T *func_0891A9A0(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_6D0 = D_08A46B48;
        func_088F23D0(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
