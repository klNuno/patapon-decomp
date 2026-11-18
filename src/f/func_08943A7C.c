#include "common.h"

typedef struct {
    s32 unk_00;
} I_08944568;

typedef struct Obj_08943A7C {
    struct Obj_08943A7C *unk_00;
    struct Obj_08943A7C *unk_04;
    u8 pad_08[0x1C - 0x8];
    u8 *unk_1C;
    s32 unk_20;
    u8 *unk_24;
} Obj_08943A7C;

void func_0880416C(void *);
void func_08943B54(void *);
s32 func_08943EE8(I_08944568 *, I_08944568 *);
void func_08943F3C(I_08944568 *, void *, I_08944568);
void func_08943FA4(I_08944568 *, I_08944568 *, s32);
void func_08943FCC(I_08944568 *, void *);
void func_08943FD4(I_08944568 *, void *);
extern u8 D_08A4762C[];
extern u8 D_08A47638[];

Obj_08943A7C *func_08943A7C(Obj_08943A7C *arg0, s16 arg1) {
    I_08944568 sp1C;
    I_08944568 sp18;
    I_08944568 sp14;
    I_08944568 sp10;

    if (arg0 != NULL) {
        arg0->unk_24 = D_08A4762C;
        func_08943FD4(&sp1C, arg0);
        func_08943FCC(&sp18, arg0);
        while (func_08943EE8(&sp1C, &sp18) != 0) {
            func_08943FA4(&sp10, &sp1C, 0);
            func_08943F3C(&sp14, arg0, sp10);
        }
        arg0->unk_20 = 0;
        arg0->unk_04 = arg0;
        arg0->unk_00 = arg0;
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47638;
            func_08943B54(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
