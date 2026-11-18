#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510[0x4];
} Obj_089A8D48;

typedef struct {
    u8 pad_00[0xB4];
    s32 unk_B4;
    s32 unk_B8;
    f32 unk_BC;
    f32 unk_C0;
} Obj_089A8D48_2;

extern s32 D_08A48704[];
extern char D_08A0797C[];

s32 func_08858B9C(void);
void func_0886E47C(void *, s32, void *, s32, s32);
void func_089A9DEC(void *, s32, s32);
void func_089A9E84(void *, char *);

Obj_089A8D48 *func_089A8D48(Obj_089A8D48 *arg0, s32 arg1, Obj_089A8D48_2 *arg2) {
    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A48704;
    func_089A9DEC(arg0->unk_1510, func_08858B9C(), 0x800000);
    arg2->unk_B4 = 10;
    arg2->unk_B8 = 1;
    arg2->unk_BC = 0.2f;
    arg2->unk_C0 = 0.5f;
    func_089A9E84(arg0->unk_1510, D_08A0797C);
    return arg0;
}
