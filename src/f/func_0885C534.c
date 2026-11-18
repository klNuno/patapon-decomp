#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x238];
    u8 unk_23C[0x1100];
    u8 unk_133C[0x28];
    u8 unk_1364[4];
} S80_0885C534;

typedef struct {
    u8 pad_00[0x4C];
    void *unk_4C;
    u8 pad_50[0x30];
    S80_0885C534 unk_80;
} S_0885C534;

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_0885BA84(void *, s32);
void func_0885BDA0(void *, s32);
void func_0885C1A0(void *);
void func_0885C474(void *, s32);
void func_0885C5F0(void *);
void func_0885D70C(void *, s32);
extern u8 D_08A449CC[];
extern u8 D_08A44A18[];

S_0885C534 *func_0885C534(S_0885C534 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_4C = D_08A449CC;
        func_0885C5F0(arg0);
        if (&arg0->unk_80 != NULL) {
            arg0->unk_80.unk_00 = D_08A44A18;
            func_0885C1A0(&arg0->unk_80);
            func_0885BA84(arg0->unk_80.unk_1364, -1);
            func_0885BA84(arg0->unk_80.unk_133C, -1);
            func_08804000(arg0->unk_80.unk_23C, func_0885C474, 0x20, 0x88);
            func_0885BDA0(&arg0->unk_80, 0);
        }
        func_0885D70C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
