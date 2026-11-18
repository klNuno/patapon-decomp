#include "common.h"

extern "C" {

class C_0899510C {
public:
    u8 pad_00[0x1058];
    virtual void unk_v0(s32);
};

typedef struct {
    u8 pad_00[0x1070];
    C_0899510C unk_1070;
    u8 pad_20CC[0x7800 - 0x20CC];
    C_0899510C unk_7800;
    u8 pad_885C[0xAA90 - 0x885C];
    C_0899510C unk_AA90;
    u8 pad_BAEC[0x46180 - 0xBAEC];
    u8 unk_46180[0x170];
    u8 unk_462F0[0x47348 - 0x462F0];
    u8 unk_47348[0x4];
} Obj_0899510C;

void func_089958E8(void *, s32);
void func_089261F8(void *, s32);

void func_0899510C(Obj_0899510C *arg0, s32 arg1) {
    arg0->unk_1070.unk_v0(arg1);
    arg0->unk_7800.unk_v0(arg1);
    arg0->unk_AA90.unk_v0(arg1);
    func_089958E8(arg0->unk_46180, arg1);
    func_089261F8(arg0, arg1);
    func_089261F8(arg0->unk_462F0, arg1);
    func_089261F8(arg0->unk_47348, arg1);
}

}
