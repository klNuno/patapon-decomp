#include "common.h"

typedef struct {
    u32 unk_00;
    u8 unk_04[0x54];
    s32 unk_58;
    u8 pad_5C[0x4];
} E_088E1558;

typedef struct {
    u8 pad_00[0xC008];
    E_088E1558 *unk_C008;
    s32 unk_C00C;
} S_088E1558;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_088E1558(S_088E1558 *arg0, char *arg1) {
    E_088E1558 *p;
    E_088E1558 *end;
    u32 len;

    p = arg0->unk_C008;
    end = p + arg0->unk_C00C;
    for (; p != end; p++) {
        len = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_04, arg1, (len < p->unk_00) ? p->unk_00 : len) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
