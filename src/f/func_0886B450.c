#include "common.h"

void func_0880416C(void *);
void func_0885C534(void *, s32);
extern u8 D_08A44F44[];

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x48];
    s32 unk_A8;
    u8 pad_AC[4];
    u8 unk_B0;
} T0886CB58;

void func_0886F084(T0886CB58 *, s32);

void *func_0886B450(T0886CB58 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A44F44;
        func_0885C534(&arg0->unk_B0, -1);
        if (&arg0->unk_60 != NULL) {
            arg0->unk_A8 = 0;
        }
        func_0886F084(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
