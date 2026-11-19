#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} S;

extern u8 D_08A450AC[];
void func_0893B9F8(S *, s32);
void func_0880416C(void *);

S *func_088704B8(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A450AC;
        func_0893B9F8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
