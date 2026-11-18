#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    void *unk_18;
} M16A0_0891F040;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} M60_0891F040;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    M60_0891F040 unk_60;
    u8 pad_AC[0x4];
    u8 unk_B0[0x14A0];
    u8 unk_1550[0x150];
    M16A0_0891F040 unk_16A0;
    u8 pad_16BC[0x4];
    u8 unk_16C0[1];
} S_0891F040;

extern u8 D_08A46C18[];
extern u8 D_08A44AD8[];
extern u8 D_08A44F44[];
void func_088F23D0(void *, s32);
void func_0885DE4C(void *);
void func_088857D0(void *, s32);
void func_0885C534(u8 *, s32);
void func_0886F084(void *, s32);
void func_0880416C(void *);

S_0891F040 *func_0891F040(S_0891F040 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A46C18;
        func_088F23D0(arg0->unk_16C0, -1);
        if (&arg0->unk_16A0 != NULL) {
            arg0->unk_16A0.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_16A0);
            arg0->unk_16A0.unk_0C = 0;
            arg0->unk_16A0.unk_14 = 0;
        }
        func_088857D0(arg0->unk_1550, -1);
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
