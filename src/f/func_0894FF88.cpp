#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1010];
    u32 *unk_1010;
    u8 pad_1014[0x34];
    u32 unk_1048;
} E_0894FF88;

struct N_0894FF88 {
    N_0894FF88 *unk_00;
    N_0894FF88 *unk_04;
    u8 pad_08[0x8];
    E_0894FF88 unk_10;
    int eq(N_0894FF88 *o) { return this == o; }
    bool ne(N_0894FF88 *o) { return !(bool)eq(o); }
};

struct I_0894FF88 {
    N_0894FF88 *unk_00;
};

typedef struct {
    u8 pad_00[0x19094];
    N_0894FF88 *unk_19094;
    N_0894FF88 *unk_19098;
    N_0894FF88 *unk_1909C;
    s32 unk_190A0;
    u8 pad_190A4[0xC];
    u8 unk_190B0[0x10D0];
    u8 unk_1A180[0x4];
} S_0894FF88;

void func_08931F2C(u8 *);
void func_08912EFC(void *, s32);
void func_08950380(E_0894FF88 *, s32);

void func_0894FF88(S_0894FF88 *arg0, s32 arg1) {
    I_0894FF88 it;
    N_0894FF88 *end;
    E_0894FF88 *e;
    N_0894FF88 *cur;
    N_0894FF88 *fr;
    N_0894FF88 *p;
    s32 keep;
    N_0894FF88 *nx;

    func_08931F2C(arg0->unk_1A180);
    func_08912EFC(arg0->unk_190B0, arg1);
    it.unk_00 = arg0->unk_19094;
    end = (N_0894FF88 *)&arg0->unk_19094;
    while (it.unk_00->ne(end)) {
        e = &it.unk_00->unk_10;
        func_08912EFC(e, arg1);
        keep = 1;
        if (e->unk_1010 != NULL && e->unk_1048 < *e->unk_1010) {
            keep = 0;
        }
        if (keep) {
            cur = it.unk_00;
            it.unk_00 = it.unk_00->unk_00;
            arg0->unk_190A0--;
            func_08950380(&cur->unk_10, keep);
            fr = arg0->unk_1909C;
            nx = cur->unk_00;
            cur->unk_04->unk_00 = nx;
            p = nx->unk_04;
            nx->unk_04 = cur->unk_04;
            cur->unk_04 = fr->unk_04;
            fr->unk_04->unk_00 = cur;
            fr->unk_04 = p;
            p->unk_00 = fr;
        } else {
            it.unk_00 = it.unk_00->unk_00;
        }
    }
}

}
