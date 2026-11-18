#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
    char unk_30[0x30];
} E;

typedef struct {
    u8 pad_00[0xC008];
    E *unk_C008;
    s32 unk_C00C;
} S0;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_088E16B4(S0 *arg0, char *arg1) {
    E *p;
    E *end;
    s32 i;
    u32 temp;

    p = arg0->unk_C008;
    end = p + arg0->unk_C00C;
    for (i = 0; p != end; p++, i++) {
        temp = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_30, arg1, (temp < p->unk_2C) ? p->unk_2C : temp) == 0) {
            return i;
        }
    }
    return -1;
}
