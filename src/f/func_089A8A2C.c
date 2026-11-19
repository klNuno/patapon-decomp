#include "common.h"

void func_0880416C(void *);
extern u8 D_08A486F8[];

typedef struct {
    u8 pad_00[0x18];
    void *unk_18;
} T;

T *func_089A8A2C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_18 = D_08A486F8;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
