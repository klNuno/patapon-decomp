#include "common.h"

typedef struct Obj_088E24BC {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x210];
    u8 *unk_218;
    s32 unk_21C;
    s32 unk_220;
    u8 unk_224[0x204];
    u8 *unk_428;
    s32 unk_42C;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43C;
    s32 unk_440;
} Obj_088E24BC;

extern const s32 D_089E1998[];
void func_088E5B9C(void *, s32);

Obj_088E24BC *func_088E24BC(Obj_088E24BC *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_218 = (u8 *)(((u32)arg0->unk_08 & 0xF) + (u32)arg0 + 0x08);
    arg0->unk_21C = 0;
    func_088E5B9C(&arg0->unk_220, D_089E1998[0]);
    arg0->unk_428 = (u8 *)(((u32)arg0->unk_224 & 3) + (u32)arg0 + 0x224);
    arg0->unk_42C = 0;
    arg0->unk_430 = 0;
    arg0->unk_434 = 0;
    arg0->unk_438 = 0;
    arg0->unk_43C = 0;
    arg0->unk_440 = arg3;
    return arg0;
}
