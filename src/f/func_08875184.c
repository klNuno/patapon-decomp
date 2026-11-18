#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x30];
} B_08875184;

typedef struct {
    u8 pad_00[0x68];
    B_08875184 *unk_68;
    s32 unk_6C;
} A_08875184;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_08875184(A_08875184 *arg0, char *arg1) {
    B_08875184 *p;
    B_08875184 *end;
    s32 i;
    u32 len;

    p = arg0->unk_68;
    end = p + arg0->unk_6C;
    for (i = 0; p != end; p++, i++) {
        len = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_30, arg1, (len < p->unk_2C) ? p->unk_2C : len) == 0) {
            return i;
        }
    }
    return -1;
}
