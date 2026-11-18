#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R089B84A4;

typedef struct {
    u8 pad_00[0x1498];
    u8 *unk_1498;
} G089B84A4;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
} A089B84A4;

typedef struct V089B84A4 {
    u8 pad_00[0x404];
    s32 *unk_404;
    u32 unk_408;

    void push(s32 v) {
        new (unk_404 + unk_408) s32(v);
        unk_408++;
    }
} V089B84A4;

extern G089B84A4 *D_08AD1F14[];
extern char *D_08A08AE4[];

s32 func_0887744C(G089B84A4 *, char *, s32);
u32 func_0885AB08(s32, s32);
R089B84A4 *func_0885AB7C(s32, s32, s32);
s32 func_08998D18(s32);
void func_08947BA8(s32, s32);

void func_089B84A4(A089B84A4 *arg0, V089B84A4 *arg1) {
    s32 *p;
    s32 **dp;
    s32 h;
    u8 *g;
    u32 n;
    u32 i;
    R089B84A4 *e;
    s32 k;

    p = arg1->unk_404;
    dp = &arg1->unk_404;
    if ((u32)p != (u32)(p + arg1->unk_408)) {
        u32 *sp = &arg1->unk_408;
        do {
            p++;
        } while (p != *dp + *sp);
    }
    arg1->unk_408 = 0;
    h = func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A08AE4[0], 1);
    g = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_1498 + 0x19CE0;
    n = func_0885AB08(h, 0);
    for (i = 0; i < n; i++) {
        e = func_0885AB7C(h, 0, i);
        k = e->unk_24;
        func_08947BA8(func_08998D18(arg0->unk_1064), k);
        if ((s8)g[k * 4 + 4] > 0) {
            arg1->push(e->unk_24);
        }
    }
}

}
