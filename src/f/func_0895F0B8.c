#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
} L_0895F0B8;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C[0x3E8];
} M_0895F0B8;

typedef struct {
    u8 pad_00[0x70];
    M_0895F0B8 unk_70;
} Q_0895F0B8;

typedef struct {
    u8 pad_00[0x10];
    Q_0895F0B8 *unk_10;
} R_0895F0B8;

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
    s32 unk_20;
    u8 unk_24[0x2C];
} P_0895F0B8;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x14];
    R_0895F0B8 *unk_20;
    u8 pad_24[0xC];
    u8 unk_30[0x28];
    void *unk_58;
    u8 pad_5C[4];
    P_0895F0B8 unk_60;
    s32 unk_B0;
    s32 unk_B4;
    void *unk_B8;
    s32 unk_BC;
    u8 pad_C0[0xC];
    void *unk_CC;
    s32 unk_D0;
    u8 unk_D4;
    u8 pad_D5[3];
    s32 unk_D8;
    s32 unk_DC;
    s32 unk_E0;
    L_0895F0B8 unk_E4;
    u8 pad_EC[0x1C];
    void *unk_108;
    s32 unk_10C;
    s32 unk_110;
    s32 unk_114;
    s32 unk_118;
    s32 unk_11C;
    s32 unk_120;
    s32 unk_124;
    s32 unk_128;
    s32 unk_12C;
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    s32 unk_13C;
    s32 unk_140;
    s32 unk_144;
    s32 unk_148;
    s32 unk_14C;
    s32 unk_150;
    s32 unk_154;
    s32 unk_158;
    s32 unk_15C;
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16C;
    s32 unk_170;
    s32 unk_174;
    s32 unk_178;
    s32 unk_17C;
    s32 unk_180;
    u8 pad_184[0xC];
    void *unk_190;
    s32 *unk_194;
    s32 unk_198;
    s32 unk_19C;
    s32 unk_1A0;
    u8 unk_1A4;
} S_0895F0B8;

extern u8 D_08A47974[];
extern u8 D_08A47A44[];
extern u8 D_08A47A60[];
extern u8 D_08A47A78[];
extern u8 D_08A47A88[];
extern u8 D_08A47AD4[];
extern u8 D_08A47AE0[];
extern u8 D_08A47AF0[];

void func_0895EFB8(S_0895F0B8 *, s32);
void func_088CE4F4(void *, s32);
void func_0895FEA4(P_0895F0B8 *, S_0895F0B8 *);
void func_0895FDE4(void *);
void func_0895FDC0(L_0895F0B8 *);
void func_0895FCC8(L_0895F0B8 *);
s32 *func_0896285C(Q_0895F0B8 *, S_0895F0B8 *);
void func_08960284(S_0895F0B8 *);

S_0895F0B8 *func_0895F0B8(S_0895F0B8 *arg0, s32 arg1, R_0895F0B8 *arg2) {
    P_0895F0B8 *p;
    L_0895F0B8 *l;
    Q_0895F0B8 *q;
    M_0895F0B8 *m;
    s32 *r;
    s32 n;
    s32 i;

    func_0895EFB8(arg0, arg1);
    arg0->unk_08 = D_08A47974;
    arg0->unk_20 = arg2;
    func_088CE4F4(arg0->unk_30, 0);
    p = &arg0->unk_60;
    func_0895FEA4(p, arg0);
    p->unk_1C = D_08A47AF0;
    p->unk_20 = 0;
    func_0895FDE4(p->unk_24);
    arg0->unk_CC = D_08A47AE0;
    arg0->unk_B0 = 0;
    arg0->unk_B4 = 0;
    arg0->unk_B8 = arg0;
    arg0->unk_BC = 0;
    arg0->unk_08 = D_08A47A44;
    arg0->unk_58 = D_08A47A60;
    arg0->unk_60.unk_1C = D_08A47A78;
    arg0->unk_CC = D_08A47A88;
    arg0->unk_D8 = -1;
    arg0->unk_D0 = 0;
    arg0->unk_D4 = 0;
    arg0->unk_DC = -1;
    arg0->unk_E0 = 0;
    arg0->unk_108 = D_08A47AD4;
    l = &arg0->unk_E4;
    func_0895FDC0(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0895FCC8(l);
    arg0->unk_10C = 0;
    arg0->unk_110 = 0;
    arg0->unk_114 = 0;
    arg0->unk_118 = 0;
    arg0->unk_11C = 0;
    arg0->unk_120 = 0;
    arg0->unk_124 = 0;
    arg0->unk_128 = 0;
    arg0->unk_12C = 0;
    arg0->unk_130 = 0;
    arg0->unk_134 = 0;
    arg0->unk_138 = 0;
    arg0->unk_13C = 0;
    arg0->unk_140 = 0;
    arg0->unk_144 = 0;
    arg0->unk_148 = 0;
    arg0->unk_14C = 0;
    arg0->unk_150 = 0;
    arg0->unk_154 = 0;
    arg0->unk_158 = 0;
    arg0->unk_15C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 0;
    arg0->unk_170 = 0;
    arg0->unk_190 = D_08A47AE0;
    arg0->unk_174 = 0;
    arg0->unk_178 = 0;
    arg0->unk_17C = 0;
    arg0->unk_180 = 0;
    arg0->unk_194 = 0;
    arg0->unk_198 = 0x1E;
    arg0->unk_19C = 0;
    arg0->unk_1A0 = 0;
    arg0->unk_1A4 = 0;
    q = arg0->unk_20->unk_10;
    if (q != NULL) {
        r = func_0896285C(q, arg0);
        m = &q->unk_70;
        arg0->unk_194 = r;
        n = -1;
        for (i = 0; i < 0x3E8; i++) {
            if (&m->unk_1C[i] == r) {
                n = i;
            }
        }
        arg0->unk_D8 = n;
    }
    func_08960284(arg0);
    return arg0;
}
