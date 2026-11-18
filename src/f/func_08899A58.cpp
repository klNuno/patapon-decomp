#include "common.h"

extern "C" {

class O_08899A58 {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2(s32);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    O_08899A58 *unk_08;
    s32 unk_0C;
} E_08899A58;

typedef struct {
    E_08899A58 *unk_00;
    s32 unk_04;
} V_08899A58;

typedef struct {
    u8 pad_00[0x3D8];
    V_08899A58 unk_3D8;
    u8 pad_3E0[8];
    u8 unk_3E8[0x2B70];
    u8 unk_2F58;
    u8 pad_2F59[3];
    s32 unk_2F5C[12];
} A_08899A58;

typedef struct {
    u8 pad_00[0x92F4];
    s32 unk_92F4;
    s32 unk_92F8;
} R_08899A58;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} S_08899A58;

typedef struct {
    u8 pad_00[0x14A0];
    S_08899A58 *unk_14A0;
} G_08899A58;

extern G_08899A58 *D_08AD1F14[];

void func_088D5CAC(void *, s32);
R_08899A58 *func_08899E18(A_08899A58 *, s32);

void func_08899A58(A_08899A58 *arg0, s32 arg1) {
    E_08899A58 *p;
    V_08899A58 *vp;
    s32 *sz;
    s32 i;
    S_08899A58 *s;
    s32 v;

    p = arg0->unk_3D8.unk_00;
    vp = &arg0->unk_3D8;
    if ((u32)p != (u32)(p + arg0->unk_3D8.unk_04)) {
        sz = &arg0->unk_3D8.unk_04;
        do {
            p->unk_08->v2(arg1);
            p++;
        } while (p != vp->unk_00 + *sz);
    }
    for (i = 0; i < 12; i++) {
        if (arg0->unk_2F5C[i] > 0) {
            arg0->unk_2F5C[i]--;
        }
    }
    func_088D5CAC(arg0->unk_3E8, arg1);
    s = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
    v = func_08899E18(arg0, 0)->unk_92F4;
    if (v > 0) {
        s->unk_04 = v;
    }
    v = func_08899E18(arg0, 1)->unk_92F4;
    if (v > 0) {
        s->unk_08 = v;
    }
    v = func_08899E18(arg0, 0)->unk_92F8;
    if (v > 0) {
        s->unk_10 = v;
    }
    v = func_08899E18(arg0, 1)->unk_92F8;
    if (v > 0) {
        s->unk_0C = v;
    }
    arg0->unk_2F58 = 0;
}

}
