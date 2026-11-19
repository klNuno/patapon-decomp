#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} T;

extern u8 D_08A48514[];
void func_0880416C(void *);
void func_08909B74(void *, s32);

T *func_08990040(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A48514;
        func_08909B74(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
