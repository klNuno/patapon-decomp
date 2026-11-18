#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 *unk_18;
} B0896C9E4;

typedef struct {
    u8 pad_00[0xA4];
    u8 *unk_A4;
} C0896C9E4;

typedef struct {
    u8 pad_00[0x1C];
    u8 *unk_1C;
    u8 pad_20[4];
    u8 unk_24[0x2C];
    C0896C9E4 unk_50;
    u8 pad_F8[0x10];
    B0896C9E4 unk_108;
} T0896C9E4;

extern u8 D_08A44AD8[];
extern u8 D_08A47EA0[];
extern u8 D_08A47EB0[];
extern u8 D_08A47ECC[];
extern u8 D_08A47ED8[];

void func_0880416C(void *);
void func_0885DE4C(B0896C9E4 *);
void func_08867784(u8 *, s32);
void func_088683A8(T0896C9E4 *, s32);
void func_0896C7E4(C0896C9E4 *, s32);
void func_0896CAB8(T0896C9E4 *);

T0896C9E4 *func_0896C9E4(T0896C9E4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_1C = D_08A47EA0;
        arg0->unk_50.unk_A4 = D_08A47EB0;
        func_0896CAB8(arg0);
        if (&arg0->unk_108 != NULL) {
            arg0->unk_108.unk_18 = D_08A44AD8;
            func_0885DE4C(&arg0->unk_108);
            arg0->unk_108.unk_0C = 0;
            arg0->unk_108.unk_14 = 0;
        }
        if (&arg0->unk_50 != NULL) {
            arg0->unk_50.unk_A4 = D_08A47ECC;
            func_0896C7E4(&arg0->unk_50, 0);
        }
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47ED8;
            func_08867784(arg0->unk_24, -1);
            func_088683A8(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
