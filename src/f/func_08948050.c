#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x48];
    s32 unk_A8;
    u8 pad_AC[0x4];
    u8 unk_B0[0x1620 - 0xB0];
    u8 unk_1620[0x33F0 - 0x1620];
    u8 unk_33F0[0x20];
    u8 unk_3410[4];
} Obj_08948050;

extern u8 D_08A47734[];
extern u8 D_08A44F44[];

void func_08948108(Obj_08948050 *);
void func_08949288(void *, s32);
void func_0894A878(void *, s32);
void func_089595BC(void *, s32);
void func_0885C534(u8 *, s32);
void func_0886F084(Obj_08948050 *, s32);
void func_0880416C(Obj_08948050 *);

Obj_08948050 *func_08948050(Obj_08948050 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A47734;
        func_08948108(arg0);
        func_08949288(arg0->unk_3410, -1);
        func_0894A878(arg0->unk_33F0, -1);
        func_089595BC(arg0->unk_1620, -1);
        if (arg0 != NULL) {
            arg0->unk_50 = D_08A44F44;
            func_0885C534(arg0->unk_B0, -1);
            if (arg0->unk_60 != NULL) {
                arg0->unk_A8 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
