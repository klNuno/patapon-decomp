#include "common.h"

typedef struct B_088901E4 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C[5];
} B_088901E4;

typedef struct C_088901E4 {
    u8 pad_00[0xC];
    B_088901E4 unk_0C;
    u8 pad_2C[0x14];
    s32 unk_40;
    u8 pad_44[0x10];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    u8 pad_70[0x10];
} C_088901E4;

typedef struct D_088901E4 {
    u8 pad_00[4];
    s32 unk_04;
} D_088901E4;

typedef struct A_088901E4 {
    u8 pad_00[0x690];
    u8 unk_690;
    u8 pad_691[0x970 - 0x691];
    u8 unk_970[0xD20 - 0x970];
    u8 unk_D20[0xDA0 - 0xD20];
    D_088901E4 *unk_DA0;
    u8 pad_DA4[0x14CE - 0xDA4];
    u8 unk_14CE;
} A_088901E4;

s32 func_0888E128(void *);
void func_0888E130(void *, s32);
s32 func_0888E218(void *, C_088901E4 *);
s32 func_0888F7B4(A_088901E4 *, s32);
void func_088A8600(void *, s32);
void func_088A865C(void *, B_088901E4 *);
void func_088A86A0(D_088901E4 *, s32, s32);
void func_088A87E8(void *, void *);
void func_088A87F0(D_088901E4 *);

s32 func_088901E4(A_088901E4 *arg0, s32 *arg1) {
    B_088901E4 b;
    C_088901E4 c;
    u8 buf[0x80];
    D_088901E4 *d;
    D_088901E4 *e;
    s32 i;

    if (arg0->unk_690 == 0) {
        return 0;
    }
    d = arg0->unk_DA0;
    if (d != NULL) {
        func_088A87F0(d);
    } else if (func_0888F7B4(arg0, 1) != 0) {
        func_0888F7B4(arg0, 1);
    }
    b.unk_04 = 0;
    b.unk_0C[0] = 0;
    b.unk_00 = 0;
    b.unk_0C[1] = 1;
    b.unk_0C[2] = 2;
    b.unk_0C[3] = 3;
    b.unk_0C[4] = 4;
    for (i = 0; i < 5; i++) {
        if (arg1[i] >= 0) {
            b.unk_0C[i] = arg1[i];
        }
    }
    {
        B_088901E4 *p = &c.unk_0C;
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_0C[0] = 0;
        p->unk_0C[1] = 1;
        p->unk_0C[2] = 2;
        p->unk_0C[3] = 3;
        p->unk_0C[4] = 4;
    }
    c.unk_6C = -1;
    c.unk_40 = 0;
    c.unk_54 = 0;
    c.unk_58 = 0;
    c.unk_5C = 0;
    c.unk_60 = 0;
    c.unk_64 = 0;
    c.unk_68 = 0;
    func_088A8600(&c, 0);
    if (d != NULL) {
        func_088A865C(d, &b);
        func_088A86A0(d, d->unk_04, 1);
    } else {
        func_088A865C(&c, &b);
        func_0888E130(arg0->unk_D20, func_0888E218(buf, &c));
        if (func_0888E128(arg0->unk_D20) != 0) {
            func_088A87E8((void *)func_0888E128(arg0->unk_D20), arg0->unk_970);
        }
        e = arg0->unk_DA0;
        func_088A86A0(e, e->unk_04, 1);
    }
    arg0->unk_14CE = 0;
    return 1;
}
