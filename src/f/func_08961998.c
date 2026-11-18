#include "common.h"

typedef struct {
    void *unk_00;
    void *unk_04;
} L_08961998;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0xFBC - 0x14];
    u8 unk_FBC[0x8CBC - 0xFBC];
    u8 unk_8CBC[0x28];
    u8 unk_8CE4[0x28];
    u8 unk_8D0C[0x4];
} M_08961998;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    u8 pad_24[0xC];
    s32 unk_30;
    s32 unk_34;
    L_08961998 unk_38;
    u8 pad_40[0x1C];
    void *unk_5C;
    u8 pad_60[0x10];
    M_08961998 unk_70;
    u8 pad_8D80[0x8DB0 - 0x70 - 0x8D10];
    u8 unk_8DB0;
    u8 pad_8DB1[3];
    s32 unk_8DB4;
} S_08961998;

extern u8 D_08A47974[];
extern u8 D_08A47AD4[];
extern u8 D_08A47B00[];
extern u8 D_08A47B44[];
void func_0895EFB8(S_08961998 *, s32);
void func_0895FDC0(L_08961998 *);
void func_0895FCC8(L_08961998 *);
void func_0885C520(M_08961998 *);
void func_08962724(void *);
void func_08962700(void);
void func_08962690(void);
void func_0880406C(void *, void (*)(void), void (*)(void), s32, s32);
void func_089625D0(void *);
void func_08962590(void *);
void func_0896232C(M_08961998 *);
void func_08962854(S_08961998 *);

S_08961998 *func_08961998(S_08961998 *arg0, s32 arg1, s32 arg2) {
    L_08961998 *l;
    M_08961998 *m;

    func_0895EFB8(arg0, arg1);
    arg0->unk_08 = D_08A47974;
    arg0->unk_20 = arg2;
    arg0->unk_08 = D_08A47B00;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_5C = D_08A47AD4;
    l = &arg0->unk_38;
    func_0895FDC0(l);
    l->unk_04 = l;
    l->unk_00 = l;
    func_0895FCC8(l);
    m = &arg0->unk_70;
    func_0885C520(m);
    m->unk_00 = D_08A47B44;
    func_08962724(&m->pad_04[0xC]);
    func_0880406C(m->unk_FBC, func_08962700, func_08962690, 0x20, 0x3E8);
    func_089625D0(m->unk_8CBC);
    func_089625D0(m->unk_8CE4);
    func_08962590(m->unk_8D0C);
    func_0896232C(m);
    m->unk_10 = 0x3E8;
    arg0->unk_8DB0 = 0;
    arg0->unk_8DB4 = 0x8DC0;
    arg0->unk_8DB0 = 0;
    func_08962854(arg0);
    return arg0;
}
