#include "common.h"

extern u8 *D_08AD1F14[];
extern char D_08A06B2C[];

s32 func_0887744C(u8 *, char *, s32);
u32 func_0885AB08(s32, s32);
s32 func_0885AB7C(s32, s32, u32);
s32 func_08822AD0(s32, s32);

s32 func_08998B34(s32 arg0, s32 arg1) {
    u8 *p;
    s32 h;
    u32 n;
    u32 i;
    s32 e;

    if (D_08AD1F14[0] != NULL) {
        p = D_08AD1F14[0];
    } else {
        p = NULL;
    }
    h = func_0887744C(p, D_08A06B2C, 0xF);
    n = func_0885AB08(h, 0);
    for (i = 0; i < n; i++) {
        e = func_0885AB7C(h, 0, i);
        if (func_08822AD0(e, arg1) == 0) {
            return e;
        }
    }
    return 0;
}
