#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u8 unk_50[1];
} T_089B98CC;

typedef struct {
    u8 pad_00[0x20];
    T_089B98CC **unk_20;
    u8 pad_24[4];
} E_089B98CC;

typedef struct {
    u8 pad_00[0xFB0];
    E_089B98CC *unk_FB0;
} H_089B98CC;

typedef struct {
    u8 pad_00[0x14A8];
    H_089B98CC unk_14A8;
} G_089B98CC;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068;
    u8 unk_1069;
    u8 unk_106A;
    u8 pad_106B;
    s32 unk_106C;
    u8 pad_1070[0x2614 - 0x1070];
    u8 unk_2614[0x2A18 - 0x2614];
    s32 *unk_2A18;
    u32 unk_2A1C;
    u8 pad_2A20[0x3280 - 0x2A20];
    s32 unk_3280;
} A_089B98CC;

extern G_089B98CC *D_08AD1F14[];

void func_089B9590(A_089B98CC *);
void func_089B9708(A_089B98CC *, u8 *);
void func_089BA300(A_089B98CC *, u32);
void func_089BA5A4(A_089B98CC *);
s32 func_08998080(s32, s32);
s32 func_0899A8E0(s32);
s32 func_0899A92C(s32);
s32 func_0899A91C(s32);
s32 func_0893D94C(s32, u8 *);

void func_089B98CC(A_089B98CC *arg0, s32 arg1) {
    G_089B98CC *g;
    H_089B98CC *h;
    u32 i;
    E_089B98CC **pe;
    s32 **pd;
    u32 j;

    arg0->unk_1069 = 1;
    arg0->unk_106A = 0;
    arg0->unk_106C = arg1;
    func_089B9590(arg0);
    arg0->unk_3280 = 0;
    func_089B9708(arg0, arg0->unk_2614);
    func_089BA300(arg0, 0);
    func_089BA5A4(arg0);
    if (func_0899A8E0(func_08998080(arg0->unk_1064, arg0->unk_106C)) == 0 &&
        func_0899A92C(func_08998080(arg0->unk_1064, arg0->unk_106C)) == 0) {
        return;
    }
    g = D_08AD1F14[0];
    g = g != NULL ? g : NULL;
    h = &g->unk_14A8;
    i = 0;
    if (i < arg0->unk_2A1C) {
        pe = &h->unk_FB0;
        j = 0;
        pd = &arg0->unk_2A18;
        do {
            if (func_0893D94C(func_0899A91C(func_08998080(arg0->unk_1064, arg0->unk_106C)),
                              (*(*pe)[*(s32 *)((u8 *)*pd + j)].unk_20)->unk_50) == 0) {
                func_089BA300(arg0, i);
                return;
            }
        j += 4;
        } while (++i < arg0->unk_2A1C);
    }
}
