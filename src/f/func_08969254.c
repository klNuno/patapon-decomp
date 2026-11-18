#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x370 - 0xD0];
    void *unk_370;
    s32 unk_374;
    u8 pad_378[0x390 - 0x378];
    s32 unk_390;
} Obj_08969254;

s32 func_0893D388(s32 *);
void func_08967630(Obj_08969254 *);
void func_0896936C(Obj_08969254 *);
extern u8 D_08A47DF4[];
extern u8 D_08A47E10[];
extern u8 D_08A47E28[];
extern u8 D_08A47E38[];
extern u8 D_08A47E84[];

Obj_08969254 *func_08969254(Obj_08969254 *arg0) {
    s32 sp1C;

    func_08967630(arg0);
    arg0->unk_390 = 0;
    arg0->unk_08 = D_08A47DF4;
    arg0->unk_58 = D_08A47E10;
    arg0->unk_7C = D_08A47E28;
    arg0->unk_CC = D_08A47E38;
    arg0->unk_370 = D_08A47E84;
    sp1C = arg0->unk_374;
    arg0->unk_390 = func_0893D388(&sp1C);
    func_0896936C(arg0);
    return arg0;
}
