#include "common.h"

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0x1F0C];
    u8 unk_3410[0x17870];
    s32 unk_1AC80;
} S;

s32 func_0887ED88(s32, s32);
void func_0894832C(S *);
void func_08949388(void *, s32);
s32 func_0894A1E4(void *);

void func_089488F8(S *arg0) {
    func_08949388(arg0->unk_3410, arg0->unk_1500);
    if (func_0894A1E4(arg0->unk_3410) != 0) {
        func_0894832C(arg0);
        arg0->unk_1AC80 = 1;
    }
    if (func_0887ED88(arg0->unk_1500, 0x4000) != 0) {
        arg0->unk_1AC80 = 1;
    }
}
