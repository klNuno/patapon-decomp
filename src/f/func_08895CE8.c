#include "common.h"

typedef struct S0 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} S0;

typedef struct E0 {
    u8 pad_00[0x30];
} E0;

typedef struct T0 {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[4];
    u8 unk_378[0x384 - 0x378];
    void *unk_384;
    u8 pad_388[0x18];
    s32 unk_3A0;
    u8 unk_3A4;
    u8 pad_3A5[3];
    s32 unk_3A8;
    u8 pad_3AC[0x10];
    u8 unk_3BC[0x620 - 0x3BC];
    S0 unk_620;
    u8 pad_648[0x8];
    u8 unk_650[0x910 - 0x650];
    u8 unk_910[4];
    u8 unk_914[0xA20 - 0x914];
    u8 unk_A20[0xCE0 - 0xA20];
    s32 unk_CE0;
    u8 pad_CE4[0xC];
    u8 unk_CF0[0x12C0 - 0xCF0];
    u8 unk_12C0[0x1380 - 0x12C0];
    u8 unk_1380[0x13D4 - 0x1380];
    u8 unk_13D4[0x13F8 - 0x13D4];
    s32 unk_13F8;
    u8 pad_13FC[0x1424 - 0x13FC];
    u8 unk_1424[0x1448 - 0x1424];
    E0 unk_1448[3];
    s32 unk_14D8;
} T0;

extern u8 D_089FA45C[];
extern u8 D_08A456C0[];
extern u8 D_08A456DC[];
extern u8 D_08A456F4[];
extern u8 D_08A45704[];
extern u8 D_08A45750[];
extern u8 D_08A45784[];

s32 func_0893D430(s32 *);
void func_08969254(T0 *, s32, s32);
void func_0888C500(void *);
void func_088986B8(void *);
void func_08896560(S0 *);
void func_08896468(S0 *);
void func_08976744(void *);
void func_08870E50(void *);
void func_089761C8(void *);
void func_0889CAA4(void *, s32, s32, T0 *);
void func_088A0150(void *, s32, s32, s32, T0 *);
s32 func_0893D3EC(void *);
void func_0893C530(void *, s32);
void func_088763F8(void *);
void func_088763E8(void *);
void func_08876338(void *);
void func_0889667C(T0 *);

T0 *func_08895CE8(T0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    E0 *p;
    S0 *s;
    s32 k;

    k = arg1;
    func_08969254(arg0, arg2, func_0893D430(&k));
    arg0->unk_08 = D_08A456C0;
    arg0->unk_58 = D_08A456DC;
    arg0->unk_7C = D_08A456F4;
    arg0->unk_CC = D_08A45704;
    arg0->unk_370 = D_08A45750;
    arg0->unk_3A0 = 0;
    arg0->unk_3A4 = 0;
    func_0888C500(arg0->unk_3BC);
    func_088986B8(&arg0->unk_3A8);
    s = &arg0->unk_620;
    s->unk_24 = D_08A45784;
    func_08896560(s);
    s->unk_04 = s;
    s->unk_00 = s;
    func_08896468(s);
    func_08976744(arg0->unk_650);
    func_08870E50(arg0->unk_914);
    func_089761C8(arg0->unk_910);
    func_08976744(arg0->unk_A20);
    arg0->unk_CE0 = 0;
    func_0889CAA4(arg0->unk_CF0, arg3, 0, arg0);
    func_088A0150(arg0->unk_12C0, arg2, arg1, arg3, arg0);
    func_0893C530(arg0->unk_1380, func_0893D3EC(arg0->unk_378));
    arg0->unk_13F8 = -1;
    func_088763F8(arg0->unk_1424);
    p = arg0->unk_1448;
    do {
        func_088763E8(p);
        p++;
    } while (p < arg0->unk_1448 + 3);
    func_08876338(arg0->unk_13D4);
    arg0->unk_14D8 = 0;
    arg0->unk_384 = D_089FA45C;
    arg0->unk_3A8 = arg4;
    func_0889667C(arg0);
    return arg0;
}
