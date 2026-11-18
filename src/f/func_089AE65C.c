#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    u8 unk_5C[0x14];
    u8 unk_70[0x90];
    u8 unk_100[0x10];
    u8 unk_110[0x6D0];
    u8 unk_7E0[4];
} S_089AE65C;

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088F23D0(void *, s32);
void func_089458C8(void *, s32);
void func_089757B8(void *, s32);
void func_089B3344(void *, s32);
extern u8 D_08A4883C[];

S_089AE65C *func_089AE65C(S_089AE65C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_58 = D_08A4883C;
        func_088F23D0(arg0->unk_7E0, -1);
        func_088F23D0(arg0->unk_110, -1);
        func_089458C8(arg0->unk_100, -1);
        func_08865F78(arg0->unk_70, -1);
        func_089757B8(arg0->unk_5C, -1);
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
