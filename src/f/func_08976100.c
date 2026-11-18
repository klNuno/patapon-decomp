#include "common.h"

extern void *D_08AD1E28[];
extern s32 D_08A056E4[];

s32 func_0896CE18(void *, s32, s32, s32);

s32 func_08976100(u32 arg0, s32 arg1) {
    u8 *g;
    u8 *h;
    s32 a;
    s32 r;
    s32 x;

    if (arg1 == 0) {
        return 0;
    }
    g = D_08AD1E28[0] != NULL ? (u8 *)D_08AD1E28[0] : NULL;
    h = &g[0xEAA00];
    if (h == NULL) {
        return 0;
    }
    a = arg0 < 29 ? D_08A056E4[arg0] : 0;
    r = func_0896CE18(h, a, 0, 1);
    if (r == 0) {
        return 0;
    }
    r = func_0896CE18((void *)r, arg1, 0, 1);
    if (r == 0) {
        return 0;
    }
    x = **(s32 **)(r + 0xE8);
    return x != 0 ? x : 0;
}
