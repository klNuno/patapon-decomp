#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} T;

extern u8 D_08A48D40[];
void func_0880416C(void *);
void func_08913D24(void *, s32);

T *func_089C69CC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_0C = D_08A48D40;
        func_08913D24(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
