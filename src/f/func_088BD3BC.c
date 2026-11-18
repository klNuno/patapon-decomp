#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x30];
} T088BD3BC_E;

typedef struct {
    u8 pad_00[0x3008];
    T088BD3BC_E *unk_3008;
    s32 unk_300C;
} T088BD3BC;

s32 func_0881F08C(void *, char *, u32);
u32 func_08822BC4(char *);

s32 func_088BD3BC(T088BD3BC *arg0, char *arg1) {
    T088BD3BC_E *p;
    T088BD3BC_E *end;
    s32 i;
    u32 len;

    p = arg0->unk_3008;
    end = p + arg0->unk_300C;
    for (i = 0; p != end; p++, i++) {
        len = func_08822BC4(arg1);
        if (func_0881F08C(p->unk_30, arg1, (len < p->unk_2C) ? p->unk_2C : len) == 0) {
            return i;
        }
    }
    return -1;
}
