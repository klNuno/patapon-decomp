#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} S_0887CC94_60;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    void *unk_18;
} S_0887CC94_1C;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    S_0887CC94_60 unk_60;
    u8 pad_AC[4];
    u8 unk_B0[0x1550 - 0xB0];
    u8 unk_1550[0x157C - 0x1550];
    u8 unk_157C[0x1590 - 0x157C];
    u8 unk_1590[0x23730 - 0x1590];
    u8 unk_23730[0x2463C - 0x23730];
    S_0887CC94_1C unk_2463C;
    S_0887CC94_1C unk_24658;
    S_0887CC94_1C unk_24674;
    u8 unk_24690[4];
} T_0887CC94;

extern u8 D_08A45270[];
extern u8 D_08A44AD8[];
extern u8 D_08A44F44[];

void func_0897A794(void *);
void func_08955C30(void *);
void func_0896D244(void *, s32);
void func_0885DE4C(void *);
void func_0897A728(void *, s32);
void func_089553C0(void *, s32);
void func_0887C68C(void *, s32);
void func_088CE04C(void *, s32);
void func_0885C534(void *, s32);
void func_0886F084(T_0887CC94 *, s32);
void func_0880416C(void *);

T_0887CC94 *func_0887CC94(T_0887CC94 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_50 = D_08A45270;
        func_0897A794(arg0->unk_23730);
        func_08955C30(arg0->unk_1590);
        func_0896D244(arg0->unk_24690, -1);
        if (&arg0->unk_24674 != NULL) {
            arg0->unk_24674.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_24674);
            arg0->unk_24674.unk_0C = 0;
            arg0->unk_24674.unk_14 = 0;
        }
        if (&arg0->unk_24658 != NULL) {
            arg0->unk_24658.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_24658);
            arg0->unk_24658.unk_0C = 0;
            arg0->unk_24658.unk_14 = 0;
        }
        if (&arg0->unk_2463C != NULL) {
            arg0->unk_2463C.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_2463C);
            arg0->unk_2463C.unk_0C = 0;
            arg0->unk_2463C.unk_14 = 0;
        }
        func_0897A728(arg0->unk_23730, -1);
        func_089553C0(arg0->unk_1590, -1);
        func_0887C68C(arg0->unk_157C, -1);
        func_088CE04C(arg0->unk_1550, -1);
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
