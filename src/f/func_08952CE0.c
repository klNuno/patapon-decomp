#include "common.h"

extern u8 D_08A47EE8[];
void func_0880416C(void *);
typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
} S;

void func_08865F78(void *, s32);


S *func_08952CE0(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_80 = D_08A47EE8;
        func_08865F78(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
