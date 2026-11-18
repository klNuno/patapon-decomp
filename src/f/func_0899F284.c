#include "common.h"

typedef struct Obj_089794B0 Obj_089794B0;

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20[0x90];
    u8 unk_B0[4];
} Struct_0899F284;

void func_08865FE4(void *, s32);
s32 func_08868CAC(Obj_089794B0 *, s32, char *, s32);
extern char D_08A06E84[];
extern char D_08A06E94[];
extern Obj_089794B0 *D_08AD1E28[];

void func_0899F284(Struct_0899F284 *arg0) {
    Obj_089794B0 *temp;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4(arg0->unk_20, func_08868CAC(temp, 0xA, D_08A06E84, 1));
    func_08865FE4(arg0->unk_B0, func_08868CAC(temp, 0xA, D_08A06E94, 1));
}
