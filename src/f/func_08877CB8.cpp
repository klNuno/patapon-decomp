#include "common.h"

extern "C" {

typedef struct E_08877CB8 {
    struct E_08877CB8 *unk_00;
    void *unk_04;
    u8 pad_08[0x18];
} E_08877CB8;

class V_08877CB8 {
public:
    u8 pad_00[0x8];
    virtual E_08877CB8 *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    E_08877CB8 *unk_00;
    E_08877CB8 *unk_04;
    void *unk_08;
    u8 unk_0C[0x804];
    u32 unk_810;
    void *unk_814;
    void *unk_818;
    void *unk_81C;
    s32 unk_820;
} M_08877CB8;

typedef struct {
    void *unk_00;
    u8 unk_04[0xA24];
} W_08877CB8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    u8 unk_14[0xB0];
    u8 unk_C4[0x580];
    u8 unk_644[0x348];
    u8 unk_98C[0x22C];
    u8 unk_BB8[0x125C];
    W_08877CB8 unk_1E14;
    u8 unk_283C;
    s32 unk_2840;
    u8 unk_2844[0x634];
    u8 unk_2E78[0x220];
    u8 unk_3098;
    u8 pad_3099[0x3];
    u8 unk_309C[0x604];
    u8 *unk_36A0;
    s32 unk_36A4;
    M_08877CB8 unk_36A8;
    u8 pad_3ECC[0x0];
} T_08877CB8;

typedef struct {
    u8 pad_00[0x3ECC];
    u8 unk_3ECC[0x44];
    u8 *unk_3F10;
    s32 unk_3F14;
} U_08877CB8;

extern u8 D_08A44F28[];
extern u8 D_08A4515C[];
extern u8 D_08A4514C[];

s32 func_08858BC0(void);
void func_0897BA58(void *, s32, void *);
void func_088A3FA4(void *);
void func_0897C9A8(void *);
void func_08983FC4(void *);
void func_08979A30(void *, s32, void *);
void func_08877FCC(void *, s8);
void func_0892304C(void *, void *);
void func_089D5890(void *);
void func_088780DC(void *);

T_08877CB8 *func_08877CB8(T_08877CB8 *arg0) {
    M_08877CB8 *m;
    E_08877CB8 *p;
    E_08877CB8 *e;
    u32 i;
    W_08877CB8 *w;
    struct {
        s8 unk_00;
    } h;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 1.0f;
    func_0897BA58(arg0->unk_14, func_08858BC0(), arg0->unk_C4);
    func_088A3FA4(arg0->unk_C4);
    func_0897C9A8(arg0->unk_644);
    func_08983FC4(arg0->unk_98C);
    func_08979A30(arg0->unk_BB8, func_08858BC0(), &arg0->unk_1E14);
    w = &arg0->unk_1E14;
    w->unk_00 = D_08A44F28;
    func_08877FCC(w->unk_04, h.unk_00);
    arg0->unk_283C = 0;
    arg0->unk_2840 = 0x80;
    func_0892304C(arg0->unk_2844, arg0);
    func_089D5890(arg0->unk_2E78);
    arg0->unk_3098 = 0;
    arg0->unk_36A0 = (u8 *)(((u32)arg0->unk_309C & 3) + (u32)arg0 + 0x309C);
    arg0->unk_36A4 = 0;
    arg0->unk_36A8.unk_08 = D_08A4515C;
    m = &arg0->unk_36A8;
    arg0->unk_36A8.unk_08 = D_08A4514C;
    arg0->unk_36A8.unk_810 = ((u32)m->unk_0C + 3) & ~3;
    p = ((V_08877CB8 *)m)->unk_08();
    m->unk_00 = p;
    m->unk_04 = p + (((V_08877CB8 *)m)->unk_0C() - 1);
    p->unk_04 = m;
    m->unk_04->unk_00 = (E_08877CB8 *)m;
    for (i = 1; i < ((V_08877CB8 *)m)->unk_0C(); i++) {
        e = p;
        p++;
        e->unk_00 = p;
        p->unk_04 = e;
    }
    m->unk_81C = m;
    m->unk_820 = 0;
    m->unk_814 = &m->unk_814;
    m->unk_818 = &m->unk_814;
    ((U_08877CB8 *)arg0)->unk_3F10 = (u8 *)(((u32)((U_08877CB8 *)arg0)->unk_3ECC & 3) + (u32)arg0 + 0x3ECC);
    ((U_08877CB8 *)arg0)->unk_3F14 = 0;
    func_088780DC(arg0);
    return arg0;
}

}
