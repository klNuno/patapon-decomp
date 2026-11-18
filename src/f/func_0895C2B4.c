#pragma divbyzerocheck on
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
    u32 unk_60;
    u8 pad_64[0xB4 - 0x64];
    s32 unk_B4;
    u8 pad_B8[4];
    u8 unk_BC;
    u8 pad_BD[3];
    s32 unk_C0;
    u8 pad_C4[0xCC - 0xC4];
    s32 unk_CC;
    u8 pad_D0[4];
    u32 unk_D4;
} Obj_0895C2B4;

s32 func_088148F0(s32, s32);
void func_0895BB40(Obj_0895C2B4 *);
void func_0895BB48(Obj_0895C2B4 *);
void func_0895D11C(s32);

void func_0895C2B4(Obj_0895C2B4 *arg0) {
    func_0895BB40(arg0);
    if (arg0->unk_C0 == 3) {
        arg0->unk_BC = 0;
        func_0895BB48(arg0);
    } else if (arg0->unk_C0 == 1 || arg0->unk_C0 == 0xFF) {
        func_0895BB48(arg0);
        func_088148F0(0, 0);
        func_0895BB40(arg0);
        arg0->unk_CC--;
        arg0->unk_D4 = (arg0->unk_D4 + 1) % arg0->unk_60;
        arg0->unk_BC = 0;
        func_0895BB48(arg0);
        func_0895D11C(arg0->unk_B4);
    } else {
        arg0->unk_CC--;
        arg0->unk_D4 = (arg0->unk_D4 + 1) % arg0->unk_60;
        func_0895BB48(arg0);
    }
}
