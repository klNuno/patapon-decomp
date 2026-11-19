#include "common.h"

void func_0880416C(void *);
void func_088F23D0(void *, s32);
void func_0891A9A0(void *, s32);
extern u8 D_08A46B5C[];

typedef struct {
    u8 pad_00[0x6D0];
    u8 *unk_6D0;
    u8 pad_6D4[0xC];
    u8 unk_6E0[1];
} T;

T *func_0891AC70(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_6D0 = D_08A46B5C;
        func_088F23D0(arg0->unk_6E0, -1);
        func_0891A9A0(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
