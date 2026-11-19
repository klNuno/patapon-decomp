#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} S_0891BFFC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E_0891BFFC;

typedef struct {
    u8 pad_00[0x25C];
    s32 unk_25C;
    u8 pad_260[0x1AC8 - 0x260];
    u32 unk_1AC8;
    E_0891BFFC unk_1ACC[0x100];
    s32 unk_22CC;
} M_0891BFFC;

typedef struct {
    u8 pad_00[0x1A0EC];
    u32 unk_1A0EC;
} P_0891BFFC;

typedef struct {
    u8 pad_00[0x1498];
    P_0891BFFC *unk_1498;
    u8 pad_149C[0x4];
    M_0891BFFC *unk_14A0;
} W_0891BFFC;

typedef struct {
    u8 pad_00[0x42820];
    W_0891BFFC *unk_42820;
} G_0891BFFC;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R_0891BFFC;

typedef struct {
    u8 pad_00[0x4C08];
    s32 unk_4C08;
} A_0891BFFC;

extern G_0891BFFC *D_08AD1E28[];
extern u8 *D_08AD1F14[];
extern char D_08A00A44[];
void func_08945E64(void *);
void func_08945EC4(void *, s32);
void func_08947C8C(S_0891BFFC *, u32);
void func_08945F18(void *, s32, s32);
void func_08945FEC(S_0891BFFC *, s32, s32);
s32 func_0887744C(u8 *, char *, s32);
s32 func_0885AB7C(s32, s32, s32);
void func_0881F5C0(void *, s32, s32);

void func_0891BFFC(A_0891BFFC *arg0) {
    S_0891BFFC s;
    M_0891BFFC *m;
    W_0891BFFC *w;
    u32 i;
    s32 n;
    u32 temp;
    s32 temp2;
    P_0891BFFC *p;
    u32 *c;

    func_08945E64(&s);
    w = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820;
    m = w->unk_14A0;
    if (arg0->unk_4C08 == 1) {
        for (i = 0; i < 0x100U; i++) {
            func_08947C8C(&s, i);
        }
        if (m->unk_25C != -1) {
            func_08945FEC(&s, ((R_0891BFFC *)func_0885AB7C(func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A00A44, 1), 0, *(s32 *)&m->unk_25C))->unk_24, 1);
            m->unk_25C = -1;
        }
        for (i = 0; i < m->unk_1AC8; i++) {
            n = m->unk_1ACC[i].unk_04;
            if (n > 0) {
                func_08945F18(&s, m->unk_1ACC[i].unk_00, n);
            } else if (n < 0) {
                func_08945FEC(&s, m->unk_1ACC[i].unk_00, n);
            }
        }
        p = w->unk_1498;
        temp = *(volatile u32 *)&p->unk_1A0EC;
        temp2 = m->unk_22CC;
        *(volatile u32 *)&p->unk_1A0EC = temp + temp2;
        c = &w->unk_1498->unk_1A0EC;
        if (*c > 99999U) {
            *c = 99999;
        }
    }
    func_0881F5C0(m->unk_1ACC, 0, 0x800);
    m->unk_1AC8 = 0;
    m->unk_22CC = 0;
    func_08945EC4(&s, -1);
}
