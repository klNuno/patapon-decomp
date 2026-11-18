#include "common.h"

typedef struct M {
    u8 pad_00[0x48];
    s32 unk_48;
} M;

typedef struct S {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    M unk_60;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1470];
    u8 unk_1520[4];
} S;

extern u8 D_08A44D9C[];
extern u8 D_08A44F44[];
void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886F084(void *, s32);
void func_088AC398(void *, s32);

S *func_0886DB10(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A44D9C;
        func_088AC398(arg0->unk_1520, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
