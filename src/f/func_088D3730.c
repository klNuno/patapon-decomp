#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    f32 unk_48, unk_4C;
} A;
typedef struct {
    u8 pad_00[0xB4];
    s32 unk_B4, unk_B8;
    f32 unk_BC, unk_C0;
} B;
typedef struct {
    u8 pad_00[0x50];
    u8 *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[0x14C];
    s32 unk_1660, unk_1664;
    u8 unk_1668;
    u8 pad_1669[3];
    s32 unk_166C, unk_1670, unk_1674;
    u8 *unk_1678;
    u8 unk_167C;
    u8 pad_167D[3];
    char unk_1680[0x6E0];
    A *unk_1D60;
    u8 pad_1D64[0x1C];
    f32 unk_1D80, unk_1D84, unk_1D88, unk_1D8C;
    u8 pad_1D90[0x1E0];
    f32 unk_1F70, unk_1F74;
    s32 unk_1F78, unk_1F7C, unk_1F80, unk_1F84;
} T;

extern u8 D_089FBA9C[], D_08A44AD8[], D_08A461DC[];
void func_0886E47C(void *, s32, void *, s32, s32);
void func_08885768(void *);
s32 func_08858BCC(void);
void func_088D4290(void *, s32);
void func_088D435C(void *, s32);
void func_088D4724(char *, s32);
void func_08885C28(void *, void *);
void func_088D43C8(void *, f32, f32);

T *func_088D3730(T *arg0, s32 arg1, B *arg2) {
    s32 temp;
    A *temp2;
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A461DC;
    func_08885768(arg0->unk_1514);
    temp = func_08858BCC();
    arg0->unk_1678 = D_08A44AD8;
    arg0->unk_1674 = 0;
    arg0->unk_1660 = 0;
    arg0->unk_1664 = 0;
    arg0->unk_1668 = 0;
    arg0->unk_1670 = 0;
    arg0->unk_166C = temp;
    func_088D4290(arg0->unk_1680, 1);
    arg0->unk_167C = 0;
    arg0->unk_1F70 = 0.5f;
    arg0->unk_1F74 = 12.0f;
    arg0->unk_1F78 = 0;
    arg0->unk_1F7C = 0;
    arg0->unk_1F84 = 0;
    arg0->unk_1F80 = 0;
    arg0->unk_1510 = 1;
    func_088D435C(arg0->unk_1680, 3);
    func_088D4724(arg0->unk_1680, arg0->unk_1F7C);
    func_08885C28(arg0->unk_1514, D_089FBA9C);
    arg0->unk_1D80 = 240.0f;
    arg0->unk_1D84 = 300.0f;
    arg0->unk_1D88 = 480.0f;
    arg0->unk_1D8C = 58.0f;
    temp2 = arg0->unk_1D60;
    temp2->unk_48 = 480.0f;
    temp2->unk_4C = 58.0f;
    func_088D43C8(arg0->unk_1680, arg0->unk_1F74, arg0->unk_1F74);
    arg2->unk_B4 = 10;
    arg2->unk_B8 = 1;
    arg2->unk_BC = 0.2f;
    arg2->unk_C0 = 0.5f;
    return arg0;
}
