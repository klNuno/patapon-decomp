#include "common.h"

extern "C" {

typedef struct Obj_089794B0 Obj_089794B0;

class Sub_08917284 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct A_08917284 {
    u8 pad_00[0x10];
    Sub_08917284 unk_10;
    u8 pad_94[0xC];
    Sub_08917284 unk_A0;
    u8 pad_124[0xC];
    Sub_08917284 unk_130;
    u8 pad_1B4[0xC];
    Sub_08917284 unk_1C0;
    u8 pad_244[0xC];
    Sub_08917284 unk_250;
    u8 pad_2D4[0x24430 - 0x2D4];
    s32 unk_24430;
    u8 pad_24434[0x34E78 - 0x24434];
    s32 unk_34E78;
} A_08917284;

void func_08865FE4(void *, s32);
s32 func_08868CAC(Obj_089794B0 *, s32, s32, s32);
void func_08918548(A_08917284 *, s32);
void func_08918478(A_08917284 *);
extern s32 D_08A007AC[];
extern s32 D_08A007C4[];
extern s32 D_08A007E0[];
extern s32 D_08A007FC[];
extern s32 D_08A00814[];
extern Obj_089794B0 *D_08AD1E28[];

void func_08917284(A_08917284 *arg0, s32 arg1) {
    func_08865FE4(&arg0->unk_10, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A007AC[0], 1));
    func_08865FE4(&arg0->unk_A0, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A007C4[0], 1));
    func_08865FE4(&arg0->unk_130, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A007E0[0], 1));
    func_08865FE4(&arg0->unk_1C0, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A00814[0], 1));
    func_08865FE4(&arg0->unk_250, func_08868CAC(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 3, D_08A007FC[0], 1));
    arg0->unk_10.unk_14(0, 0);
    arg0->unk_A0.unk_14(0, 0);
    arg0->unk_130.unk_14(0, 0);
    arg0->unk_250.unk_14(0, 0);
    arg0->unk_34E78 = 0;
    func_08918548(arg0, 0);
    func_08918478(arg0);
    arg0->unk_24430 = arg1;
}

}
