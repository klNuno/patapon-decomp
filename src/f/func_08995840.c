#include "common.h"

typedef struct Obj_089794B0 Obj_089794B0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 unk_10[0x90];
    u8 unk_A0[0x4];
} Obj_08995840;

extern Obj_089794B0 *D_08AD1E28[];
extern char D_08A06A30[];
extern char D_08A06A40[];

void func_08865FE4(void *, s32);
s32 func_08868CAC(Obj_089794B0 *, s32, char *, s32);

void func_08995840(Obj_08995840 *arg0, s32 arg1) {
    Obj_089794B0 *temp;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4(arg0->unk_10, func_08868CAC(temp, 0xA, D_08A06A30, 1));
    func_08865FE4(arg0->unk_A0, func_08868CAC(temp, 0xA, D_08A06A40, 1));
    arg0->unk_0C = arg1 == -1 ? 2 : arg1;
}
