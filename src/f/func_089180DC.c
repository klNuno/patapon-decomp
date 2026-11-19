#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} B;

typedef struct {
    u8 pad_00[0x1498];
    B *unk_1498;
    u8 pad_149C[0x2460 - 0x149C];
    u8 unk_2460[0x247C - 0x2460];
    s32 unk_247C;
} G;

typedef struct {
    u8 pad_00[0x24438];
    u8 unk_24438[0x34E74 - 0x24438];
    u8 unk_34E74;
} S;

extern G *D_08AD1F14[];

void sceKernelDcacheWritebackAll(void);
void func_08918548(S *, s32);
s32 func_089A8B74(void *, s32);
void func_089D0E50(void *, s32, s32, s32, s32);
void func_089D1904(void *, s32, s32);

void func_089180DC(S *arg0, s32 arg1, s32 arg2) {
    B *bb;
    s32 b;
    G *g;
    s32 a;
    u8 *p;
    s32 c;
    s32 d;

    sceKernelDcacheWritebackAll();
    switch (arg2) {
    case 0:
        g = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
        bb = *(B *volatile *)&g->unk_1498;
        a = *(volatile s32 *)&g->unk_247C;
        b = bb->unk_04;
        if (a == b) {
            func_08918548(arg0, 2);
        } else if (a != 0 && b != 0) {
            func_08918548(arg0, 2);
        } else {
            func_08918548(arg0, 0xB);
            p = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_2460;
            c = func_089A8B74(p, 0x40000);
            d = func_089A8B74(p, 0x40018);
            func_089D0E50(arg0->unk_24438, c, d, 1, func_089A8B74(p, 0x20000));
            func_089D1904(arg0->unk_24438, 1, 0);
        }
        break;
    case 1:
    case -1:
        func_08918548(arg0, 0);
        break;
    case 2:
        arg0->unk_34E74 = 1;
        break;
    }
}
