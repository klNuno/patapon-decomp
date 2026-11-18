#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x58];
    u8 unk_5C[0x200];
    u8 unk_25C[0x28];
    u8 unk_284[0x28];
} Sub_0888CB04;

typedef struct {
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
    u8 pad_374[0x3C];
    Sub_0888CB04 unk_3B0;
    u8 pad_65C[0x44];
    u8 unk_6A0[0x2D0];
    u8 unk_970[4];
} T0888CB04;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0885BDA0(void *, s32);
void func_0888C278(void *, s32);
void func_0888C784(void *);
void func_0888CA58(void *, s32);
void func_0888F570(T0888CB04 *);
void func_088A7774(void *, s32);
void func_089692D8(void *, s32);
void func_08976FC4(void *, s32);
extern u8 D_08A454B4[];
extern u8 D_08A454D0[];
extern u8 D_08A454E8[];
extern u8 D_08A454F8[];
extern u8 D_08A45544[];
extern u8 D_08A45580[];

T0888CB04 *func_0888CB04(T0888CB04 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A454B4;
        arg0->unk_58 = D_08A454D0;
        arg0->unk_7C = D_08A454E8;
        arg0->unk_CC = D_08A454F8;
        arg0->unk_370 = D_08A45544;
        func_0888F570(arg0);
        func_088A7774(arg0->unk_970, -1);
        func_08976FC4(arg0->unk_6A0, -1);
        if (&arg0->unk_3B0 != NULL) {
            arg0->unk_3B0.unk_00 = D_08A45580;
            func_0888C784(&arg0->unk_3B0);
            func_0888C278(arg0->unk_3B0.unk_284, -1);
            func_0888C278(arg0->unk_3B0.unk_25C, -1);
            func_08804000(arg0->unk_3B0.unk_5C, func_0888CA58, 0x20, 0x10);
            func_0885BDA0(&arg0->unk_3B0, 0);
        }
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
