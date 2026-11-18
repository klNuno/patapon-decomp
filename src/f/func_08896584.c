#include "common.h"

typedef struct S0 {
    u8 pad_00[0x24];
    void *unk_24;
} S0;

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
    u8 pad_374[0x620 - 0x374];
    S0 unk_620;
    u8 pad_648[0x8];
    u8 unk_650[0xA20 - 0x650];
    u8 unk_A20[0xCF0 - 0xA20];
    u8 unk_CF0[0x12C0 - 0xCF0];
    u8 unk_12C0[0x1380 - 0x12C0];
    u8 unk_1380[4];
} T0;

extern u8 D_08A456C0[];
extern u8 D_08A456DC[];
extern u8 D_08A456F4[];
extern u8 D_08A45704[];
extern u8 D_08A45750[];
extern u8 D_08A45784[];

void func_08897968(T0 *);
void func_0893C570(void *, s32);
void func_088A01AC(void *, s32);
void func_0889CB40(void *, s32);
void func_08976FC4(void *, s32);
void func_08896468(S0 *);
void func_088963F8(S0 *, s32);
void func_089692D8(void *, s32);
void func_0880416C(void *);

T0 *func_08896584(T0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A456C0;
        arg0->unk_58 = D_08A456DC;
        arg0->unk_7C = D_08A456F4;
        arg0->unk_CC = D_08A45704;
        arg0->unk_370 = D_08A45750;
        func_08897968(arg0);
        func_0893C570(arg0->unk_1380, -1);
        func_088A01AC(arg0->unk_12C0, -1);
        func_0889CB40(arg0->unk_CF0, -1);
        func_08976FC4(arg0->unk_A20, -1);
        func_08976FC4(arg0->unk_650, -1);
        if (&arg0->unk_620 != NULL) {
            arg0->unk_620.unk_24 = D_08A45784;
            func_08896468(&arg0->unk_620);
            func_088963F8(&arg0->unk_620, -1);
        }
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
