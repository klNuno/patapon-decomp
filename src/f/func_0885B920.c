#include "common.h"

typedef struct {
    u8 pad_00[0x20];
} E_0885B920;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_0885B920;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xC];
    s32 unk_1C[0x88];
    E_0885B920 unk_23C[0x88];
    M_0885B920 unk_133C;
    M_0885B920 unk_1364;
} S_0885B920;

void func_0880416C(void *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0885BDE8(void *, void *);
void func_0885BE40(void *, void *);
void func_0885BE48(void *);
void func_0885C090(void *);
void func_0885C188(void *);
void func_0885C198(void *);
void func_0885C474(void *, s32);
extern u8 D_08A449F4[];
extern u8 D_08A44A0C[];
extern u8 D_08A44A18[];

S_0885B920 *func_0885B920(S_0885B920 *arg0, s16 arg1) {
    s32 i;
    E_0885B920 *temp;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44A18;
        func_0885C198(&arg0->unk_1364);
        func_0885C198(&arg0->unk_133C);
        func_0885C188(arg0->unk_10);
        func_0885C090(&arg0->unk_133C);
        func_0885C090(&arg0->unk_1364);
        for (i = 0; i < 0x88; i++) {
            temp = &arg0->unk_23C[i];
            func_0885BE48(temp);
            func_0885BE40(temp, &arg0->unk_1C[i]);
            func_0885BDE8(&arg0->unk_1364, temp);
        }
        func_0885C198(&arg0->unk_1364);
        if (&arg0->unk_1364 != NULL) {
            arg0->unk_1364.unk_24 = D_08A44A0C;
            func_0885C090(&arg0->unk_1364);
            func_0885C474(&arg0->unk_1364, -1);
        }
        if (&arg0->unk_133C != NULL) {
            arg0->unk_133C.unk_24 = D_08A44A0C;
            func_0885C090(&arg0->unk_133C);
            func_0885C474(&arg0->unk_133C, -1);
        }
        func_08804000(arg0->unk_23C, func_0885C474, 0x20, 0x88);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A449F4;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
