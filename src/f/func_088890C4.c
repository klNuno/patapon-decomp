#include "common.h"

typedef struct {
    u8 pad_00[0x704];
    u8 unk_704;
    u8 pad_705[3];
    s32 unk_708;
    f32 unk_70C;
    u8 pad_710[0x14];
    s32 unk_724;
    f32 unk_728;
} Unk;

void func_08889988(s32);

void func_088890C4(Unk *arg0, f32 arg1, f32 arg2) {
    arg0->unk_708 = 0;
    arg0->unk_70C = arg1;
    arg0->unk_704 = 1;
    arg0->unk_724 = 0;
    arg0->unk_728 = arg2;
    func_08889988((s32)arg0);
}
