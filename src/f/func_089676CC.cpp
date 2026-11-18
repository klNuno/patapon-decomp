#include "common.h"

extern "C" {

void func_0880416C(void *);
void func_089403F4(void *, s32);
void func_0895FEC8(void *, s32);
void func_089677DC(void *);
extern u8 D_08A47414[];
extern u8 D_08A47CF8[];
extern u8 D_08A47D14[];
extern u8 D_08A47D2C[];
extern u8 D_08A47D3C[];
extern u8 D_08A47D88[];

class M_089676CC {
public:
    u8 pad_00[0x1C0];
    void *unk_1C0;
    void fini() {
        unk_1C0 = D_08A47414;
        func_089403F4(this, 0);
    }
};

class Obj_089676CC {
public:
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x1B0 - 0xD0];
    M_089676CC unk_1B0;
};

Obj_089676CC *func_089676CC(Obj_089676CC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47CF8;
        arg0->unk_58 = D_08A47D14;
        arg0->unk_7C = D_08A47D2C;
        arg0->unk_CC = D_08A47D3C;
        arg0->unk_1B0.unk_1C0 = D_08A47D88;
        func_089677DC(arg0);
        if (&arg0->unk_1B0 != NULL) {
            arg0->unk_1B0.fini();
        }
        func_0895FEC8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
