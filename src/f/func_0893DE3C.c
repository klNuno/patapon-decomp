#include "common.h"

typedef struct {
    u8 pad_00[0x50];
} E_0893DE3C;

typedef struct N_0893DE3C {
    struct N_0893DE3C *unk_00;
    struct N_0893DE3C *unk_04;
    E_0893DE3C *unk_08;
} N_0893DE3C;

typedef union {
    N_0893DE3C *unk_00;
    f32 f;
} I_0893DE3C;

typedef struct {
    E_0893DE3C *unk_00;
    s32 unk_04;
} V_0893DE3C;

typedef struct {
    N_0893DE3C *unk_00;
    N_0893DE3C *unk_04;
} L_0893DE3C;

typedef struct {
    u8 pad_00[0xA004];
    V_0893DE3C unk_A004;
    u8 pad_A00C[0xB820 - 0xA00C];
    L_0893DE3C unk_B820;
    N_0893DE3C *unk_B828;
    u32 unk_B82C;
} S_0893DE3C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} R_0893DE3C;

void func_0893DB40(s32 *, void *);
void func_0893DB48(s32 *, s32 *);
void func_0893DBC8(R_0893DE3C *, L_0893DE3C *, s32, s32);

void func_0893DE3C(S_0893DE3C *arg0) {
    I_0893DE3C it;
    I_0893DE3C pos;
    R_0893DE3C r;
    s32 b;
    s32 e;
    E_0893DE3C *p;
    V_0893DE3C *v;
    s32 *n;
    struct { N_0893DE3C *unk_00; } nn;
    N_0893DE3C *prev;
    N_0893DE3C *ps;
    E_0893DE3C **d;

    func_0893DB48(&b, (s32 *)&arg0->unk_B820);
    func_0893DB40(&e, &arg0->unk_B820);
    func_0893DBC8(&r, &arg0->unk_B820, b, e);
    p = arg0->unk_A004.unk_00;
    v = &arg0->unk_A004;
    if (p != v->unk_00 + arg0->unk_A004.unk_04) {
        it.unk_00 = (N_0893DE3C *)&arg0->unk_B820;
        if (p != v->unk_00 + arg0->unk_A004.unk_04) {
        n = &arg0->unk_A004.unk_04;
        do {
            nn.unk_00 = arg0->unk_B828->unk_00;
            pos = it;
            if (nn.unk_00 != arg0->unk_B828) {
                if (nn.unk_00->unk_00 != NULL) {
                    nn.unk_00->unk_00->unk_04 = nn.unk_00->unk_04;
                }
                if (nn.unk_00->unk_04 != NULL) {
                    nn.unk_00->unk_04->unk_00 = nn.unk_00->unk_00;
                }
                nn.unk_00->unk_00 = NULL;
                nn.unk_00->unk_04 = NULL;
            } else {
                nn.unk_00 = NULL;
            }
            ps = (*(volatile I_0893DE3C *)&pos).unk_00;
            prev = ps->unk_04;
            arg0->unk_B82C++;
            prev->unk_00 = nn.unk_00;
            ps->unk_04 = nn.unk_00;
            nn.unk_00->unk_00 = ps;
            nn.unk_00->unk_04 = prev;
            d = &nn.unk_00->unk_08;
            if (d != NULL) {
                *d = p;
            }
            p++;
        } while (p != v->unk_00 + *n);
        }
    }
}
