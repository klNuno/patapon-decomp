#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} S088D386C_60;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} S088D386C_1660;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    S088D386C_60 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1464];
    u8 unk_1514[0x14C];
    S088D386C_1660 unk_1660;
    u8 pad_167C[4];
    u8 unk_1680[4];
} T088D386C;

extern u8 D_08A461DC[];
extern u8 D_08A44AD8[];
extern u8 D_08A44F44[];

void func_088D4300(void *, s32);
void func_0885DE4C(void *);
void func_088857D0(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T088D386C *, s32);
void func_0880416C(void *);

T088D386C *func_088D386C(T088D386C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A461DC;
        func_088D4300(arg0->unk_1680, -1);
        if (&arg0->unk_1660 != NULL) {
            arg0->unk_1660.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_1660);
            arg0->unk_1660.unk_0C = 0;
            arg0->unk_1660.unk_14 = 0;
        }
        func_088857D0(arg0->unk_1514, -1);
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
