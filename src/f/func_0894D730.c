#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Unk;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0xC0];
    Unk unk_D0;
    u8 pad_E0[0x10];
    u32 unk_F0;
    u32 unk_F4;
} Unk2;

extern f32 D_08A04290[];
extern f32 D_08A04294[];
extern f32 D_08A04298[];
extern f32 D_08A0429C[];
extern char D_089E9494[];
extern char D_089E949C[];
s32 func_08814C0C(s32);
void func_08814E2C(s32, u32, s32, char *, u8 *);
void func_0886575C(Unk *, s32, s32);
extern s32 func_08865870(void);

void func_0894D730(Unk2 *arg0, f32 arg1) {
    Unk temp = arg0->unk_D0;

    if (arg0->unk_F4 >= 4U) {
        u32 temp2 = (arg0->unk_F0 & 1) * 4;
        temp.unk_00 = D_08A04290[temp2];
        temp.unk_04 = D_08A04294[temp2];
        temp.unk_08 = D_08A04298[temp2];
        *(volatile f32 *)&temp.unk_0C = D_08A0429C[temp2];
    }
    temp.unk_0C = arg1;
    func_0886575C(&temp, 1, 1);
    func_08814C0C(9);
    func_08814E2C(2, 0x800980, 5, D_089E9494, arg0->unk_10);
    func_08814E2C(0, 0x800980, 1, D_089E9494, arg0->unk_10);
    func_08865870();
    func_0886575C(&temp, 1, 1);
    func_08814C0C(9);
    func_08814E2C(2, 0x800980, 5, D_089E949C, arg0->unk_10);
    func_08814E2C(0, 0x800980, 1, D_089E949C, arg0->unk_10);
    func_08865870();
}
