#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[4];
    u8 unk_30[1];
} T;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088CE530(void *, s32);
extern u8 D_08A46CA0[];

T *func_0892086C(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A46CA0;
        func_08865F78(arg0->unk_30, -1);
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
