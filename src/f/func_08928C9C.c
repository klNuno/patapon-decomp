#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x204];
    u8 *unk_20C;
    s32 unk_210;
    u8 unk_214[0x204];
    u8 *unk_418;
    s32 unk_41C;
    u8 unk_420[0x204];
    u8 *unk_624;
    s32 unk_628;
    void *unk_62C;
} Obj_08928C9C;

void func_08928E30(Obj_08928C9C *);
extern u8 D_08A46F08[];

Obj_08928C9C *func_08928C9C(Obj_08928C9C *arg0) {
    arg0->unk_62C = D_08A46F08;
    arg0->unk_00 = -1;
    arg0->unk_04 = 0;
    arg0->unk_20C = (u8 *)(((u32)arg0->unk_08 & 3) + (u32)arg0 + 0x08);
    arg0->unk_210 = 0;
    arg0->unk_418 = (u8 *)(((u32)arg0->unk_214 & 3) + (u32)arg0 + 0x214);
    arg0->unk_41C = 0;
    arg0->unk_624 = (u8 *)(((u32)arg0->unk_420 & 3) + (u32)arg0 + 0x420);
    arg0->unk_628 = 0;
    func_08928E30(arg0);
    return arg0;
}
