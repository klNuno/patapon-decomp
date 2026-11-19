#include "common.h"

#pragma divbyzerocheck on
typedef struct {
    u8 pad_00[0xC8];
    u32 unk_C8, unk_CC, unk_D0;
} S_0895C09C;
void func_0895BB40(S_0895C09C *);
void func_0895BB48(S_0895C09C *);

void func_0895BFFC(S_0895C09C *arg0) {
    func_0895BB40(arg0);
    ++arg0->unk_CC;
    arg0->unk_D0 = (arg0->unk_D0 + 1) % arg0->unk_C8;
    func_0895BB48(arg0);
}
