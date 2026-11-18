#include "common.h"

typedef struct V_089ADA00 {
    f32 unk_00;
    f32 unk_04;
} V_089ADA00;

typedef struct B_089ADA00 {
    u8 pad_00[0xAA];
    u8 unk_AA;
} B_089ADA00;

typedef struct C_089ADA00 {
    u8 pad_00[0x4];
    B_089ADA00 *unk_04;
} C_089ADA00;

typedef struct W_089ADA00 {
    u8 pad_00[0x36B60];
    s32 unk_36B60;
} W_089ADA00;

typedef struct A_089ADA00 {
    u8 pad_00[0x4];
    W_089ADA00 *unk_04;
} A_089ADA00;

s32 func_088BCF70(s32 *);
void func_088CF75C(s32, V_089ADA00 *, s32);
void func_088CF594(s32, s32, s32);
void func_088CFD24(s32, f32, s32, s32);
s32 func_088A88C0(void);
C_089ADA00 *func_0884E644(s32);

void func_089ADA00(A_089ADA00 *arg0) {
    s32 h;
    V_089ADA00 v;
    C_089ADA00 *c;

    h = func_088BCF70(&arg0->unk_04->unk_36B60);
    v.unk_00 = 1.0f;
    v.unk_04 = 0.0f;
    func_088CF75C(h, &v, 1);
    func_088CF594(h, 4, 1);
    func_088CFD24(h, 0.5f, 1, 4);
    c = func_0884E644(func_088A88C0());
    c->unk_04->unk_AA |= 8;
    c->unk_04->unk_AA &= ~4;
}
