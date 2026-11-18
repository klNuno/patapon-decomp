#include "common.h"

typedef struct {
    u8 pad_00[0x12160];
    s32 unk_12160;
} S_0891831C;

void func_08917E20(char *, s32, s32);
void func_08918478(char *);
void func_08918548(char *, s32);
void func_089D5138(s32 *);
void func_089D5140(s32 *);
s32 func_089D527C(s32 *);
s32 func_089D5294(s32 *);

void func_0891831C(S_0891831C *arg0, s32 arg1) {
    func_089D5140(&arg0->unk_12160);
    if (func_089D5294(&arg0->unk_12160) == 3) {
        func_08917E20((char *)arg0, arg1, 0);
    }
    if (func_089D527C(&arg0->unk_12160) != 0) {
        func_089D5138(&arg0->unk_12160);
        func_08918548((char *)arg0, 0);
        func_08918478((char *)arg0);
    }
}
