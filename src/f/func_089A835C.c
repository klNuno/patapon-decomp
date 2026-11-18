#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0x64];
    u8 *unk_68;
    s32 unk_6C;
} Sub_089A835C;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 unk_40[0x90];
    Sub_089A835C unk_D0;
    u8 unk_140[0x24];
    u8 *unk_164;
    s32 unk_168;
} Obj_089A835C;

void func_088CE4F4(Obj_089A835C *, s32);
void func_08865EE0(void *);
extern u8 D_08A44C14[];
extern u8 D_08A450E8[];
extern u8 D_08A486DC[];

Obj_089A835C *func_089A835C(Obj_089A835C *arg0, s32 arg1) {
    Sub_089A835C *sub;

    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A486DC;
    arg0->unk_2C = arg1;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    func_08865EE0(arg0->unk_40);
    arg0->unk_D0.unk_00 = D_08A44C14;
    sub = &arg0->unk_D0;
    sub->unk_00 = D_08A450E8;
    sub->unk_68 = (u8 *)(((u32)sub->unk_04 & 3) + (u32)sub + 0x04);
    sub->unk_6C = 0;
    arg0->unk_164 = (u8 *)(((u32)arg0->unk_140 & 3) + (u32)arg0 + 0x140);
    arg0->unk_168 = 0;
    return arg0;
}
