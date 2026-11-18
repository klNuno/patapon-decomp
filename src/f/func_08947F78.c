#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510[0x100];
    s32 unk_1610;
    u8 pad_1614[0x1620 - 0x1614];
    u8 unk_1620[0x33E0 - 0x1620];
    s32 unk_33E0;
    u8 pad_33E4[0x33F0 - 0x33E4];
    u8 unk_33F0[0x3410 - 0x33F0];
    u8 unk_3410[0x1AC74 - 0x3410];
    s32 unk_1AC74;
    s32 unk_1AC78;
    u8 unk_1AC7C;
    u8 pad_1AC7D[3];
    s32 unk_1AC80;
} Obj_08947F78;

void func_0886E47C(void *, s32, void *, s32, s32);
void func_0881F5C0(void *, s32, s32);
void func_08959040(void *);
void func_0894A83C(void *, void *);
void func_08948E78(void *);
void func_08949768(void *, s32);
void func_0894A1FC(void *, void *);
extern u8 D_08A47734[];
extern s32 D_08A03F80[];
extern u8 D_08A03F84[];

Obj_08947F78 *func_08947F78(Obj_08947F78 *arg0, s32 arg1, void *arg2) {
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A47734;
    func_0881F5C0(arg0->unk_1510, 0, 0x100);
    arg0->unk_1610 = 0xFFFFFF;
    func_08959040(arg0->unk_1620);
    arg0->unk_33E0 = 0;
    func_0894A83C(arg0->unk_33F0, arg2);
    func_08948E78(arg0->unk_3410);
    arg0->unk_1AC74 = 0;
    arg0->unk_1AC78 = 0;
    arg0->unk_1AC7C = 1;
    arg0->unk_1AC80 = 0;
    func_08949768(arg0->unk_3410, D_08A03F80[0]);
    func_0894A1FC(arg0->unk_3410, D_08A03F84);
    return arg0;
}
