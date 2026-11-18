#include "common.h"

extern "C" {

typedef struct E_0894E258 {
    struct E_0894E258 *unk_00;
    struct E_0894E258 *unk_04;
    u8 pad_08[0x10A8];
} E_0894E258;

class C_0894E258 {
public:
    u8 pad_00[8];
    virtual E_0894E258 *v08();
    virtual u32 v0C();
};

typedef struct S_0894E258 {
    E_0894E258 *unk_00;
    E_0894E258 *unk_04;
    void *unk_08;
    u8 unk_0C[0x19084];
    u8 *unk_19090;
    void *unk_19094;
    void *unk_19098;
    void *unk_1909C;
    s32 unk_190A0;
    u8 pad_190A4[0xC];
    u8 unk_190B0[0x10A8];
    f32 unk_1A158;
    void *unk_1A15C;
    s32 unk_1A160;
    u8 pad_1A164[8];
    s32 unk_1A16C;
    s32 unk_1A170;
    u8 pad_1A174[0xC];
    u8 unk_1A180[4];
} S_0894E258;

extern u8 D_08A47864[];
extern u8 D_08A47854[];
extern void *D_08AD1E28[];
extern u8 D_08A0431C[];
extern u8 D_08AD9D50[];
extern s32 D_08A0430C[];

void func_08912AF8(void *, s32);
void func_08931A78(void *);
s32 func_08868D9C(void *, s32, void *, s32);

S_0894E258 *func_0894E258(S_0894E258 *arg0) {
    E_0894E258 *p;
    E_0894E258 *prev;
    u32 i;

    arg0->unk_08 = D_08A47864;
    arg0->unk_08 = D_08A47854;
    arg0->unk_19090 = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((C_0894E258 *)arg0)->v08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_0894E258 *)arg0)->v0C() - 1);
    p->unk_04 = (E_0894E258 *)arg0;
    arg0->unk_04->unk_00 = (E_0894E258 *)arg0;
    for (i = 1; i < ((C_0894E258 *)arg0)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_1909C = arg0;
    arg0->unk_190A0 = 0;
    arg0->unk_19094 = &arg0->unk_19094;
    arg0->unk_19098 = &arg0->unk_19094;
    func_08912AF8(arg0->unk_190B0, 2);
    arg0->unk_1A158 = 0.6f;
    func_08931A78(arg0->unk_1A180);
    arg0->unk_1A170 = func_08868D9C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 1, D_08A0431C, 1);
    arg0->unk_1A16C = 0;
    arg0->unk_1A15C = D_08AD9D50;
    arg0->unk_1A160 = D_08A0430C[0];
    return arg0;
}

}
