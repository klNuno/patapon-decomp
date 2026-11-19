#include "common.h"

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_08866620(void *, s16);
void func_0887C2F8(void *);
extern u8 D_08A45224[];

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x5C70];
    u8 unk_5C80[0x90];
    u8 *unk_5D10;
} T;

T *func_0887BECC(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_5D10 = D_08A45224;
        func_0887C2F8(arg0);
        func_08865F78(arg0->unk_5C80, -1);
        func_08866620(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
