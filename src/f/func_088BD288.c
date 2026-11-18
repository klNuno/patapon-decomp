#include "common.h"

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

typedef struct {
    u32 unk_00;
    u8 pad_04[0x54];
    s32 unk_58;
    u8 pad_5C[0x4];
} E88BD288;

typedef struct {
    u8 pad_00[0x3008];
    E88BD288 *unk_3008;
    s32 unk_300C;
} S88BD288;

s32 func_088BD288(S88BD288 *arg0, char *arg1) {
    E88BD288 *p;
    E88BD288 *end;
    u32 temp;
    u32 len;

    p = arg0->unk_3008;
    end = p + arg0->unk_300C;
    for (; p != end; p++) {
        temp = func_08822BC4(arg1);
        len = (temp < p->unk_00) ? p->unk_00 : temp;
        if (func_0881F08C((u8 *)p + 4, arg1, len) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
