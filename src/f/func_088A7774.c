#include "common.h"

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
    u8 pad_374[0xFC];
    u8 unk_470[0x4];
} Obj_088A7774;

extern u8 D_08A45A4C[];
extern u8 D_08A45A68[];
extern u8 D_08A45A80[];
extern u8 D_08A45A90[];
extern u8 D_08A45ADC[];

void func_0880416C(void *);
void func_088A8F74(void *, s32);
void func_089692D8(void *, s32);

Obj_088A7774 *func_088A7774(Obj_088A7774 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A45A4C;
        arg0->unk_58 = D_08A45A68;
        arg0->unk_7C = D_08A45A80;
        arg0->unk_CC = D_08A45A90;
        arg0->unk_370 = D_08A45ADC;
        func_088A8F74(arg0->unk_470, -1);
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
