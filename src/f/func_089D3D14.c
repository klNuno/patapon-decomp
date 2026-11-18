#include "common.h"

typedef struct Obj_089D3D14 {
    u8 pad_00[0x8];
    u8 *unk_08;
    u8 pad_0C[0x58 - 0xC];
    u8 *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    u8 *unk_7C;
    u8 pad_80[0xCC - 0x80];
    u8 *unk_CC;
    u8 pad_D0[0x1B0 - 0xD0];
    s32 unk_1B0;
    s32 unk_1B4;
    struct Obj_089D3D14 *unk_1B8;
    s32 unk_1BC;
    u8 pad_1C0[0xC];
    u8 *unk_1CC;
    s32 unk_1D0;
} Obj_089D3D14;

void func_0895F0B8(Obj_089D3D14 *);
void func_089D3E50(Obj_089D3D14 *);
extern u8 D_08A45774[];
extern u8 D_08A48F3C[];
extern u8 D_08A48F58[];
extern u8 D_08A48F70[];
extern u8 D_08A48F80[];
extern u8 D_08A48FCC[];

Obj_089D3D14 *func_089D3D14(Obj_089D3D14 *arg0) {
    func_0895F0B8(arg0);
    arg0->unk_1CC = D_08A45774;
    arg0->unk_1B0 = 0;
    arg0->unk_1B4 = 0;
    arg0->unk_1B8 = arg0;
    arg0->unk_1BC = 0;
    arg0->unk_08 = D_08A48F3C;
    arg0->unk_58 = D_08A48F58;
    arg0->unk_7C = D_08A48F70;
    arg0->unk_CC = D_08A48F80;
    arg0->unk_1CC = D_08A48FCC;
    arg0->unk_1D0 = 0;
    func_089D3E50(arg0);
    return arg0;
}
