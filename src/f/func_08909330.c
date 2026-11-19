#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} T;

extern u8 D_08A46820[];
void func_0880416C(void *);
void func_08980154(void *, s32);

T *func_08909330(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A46820;
        func_08980154(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
