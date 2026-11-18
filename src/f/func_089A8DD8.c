#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
    u8 pad_4C[0x4];
} Sub_089A8DD8;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    Sub_089A8DD8 unk_60;
    u8 unk_B0[0x1510 - 0xB0];
    u8 unk_1510[0x4];
} S_089A8DD8;

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_0886F084(void *, s32);
void func_089A9E08(void *, s32);
extern u8 D_08A44F44[];
extern s32 D_08A48704[];

S_089A8DD8 *func_089A8DD8(S_089A8DD8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A48704;
        func_089A9E08(arg0->unk_1510, -1);
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
