#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    f32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    u8 *unk_80;
} T;

extern u8 D_08A44B70[];
void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);

T *func_0898F5FC(T *arg0, T *arg1) {
    arg0->unk_80 = D_08A44B70;
    func_08866B54(arg0, 0, func_08866B80(arg1, 0));
    func_08866B54(arg0, 1, func_08866B80(arg1, 1));
    func_08866B54(arg0, 2, func_08866B80(arg1, 2));
    func_08866B54(arg0, 3, func_08866B80(arg1, 3));
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_44 = arg1->unk_44;
    arg0->unk_48 = arg1->unk_48;
    arg0->unk_4C = arg1->unk_4C;
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_54 = arg1->unk_54;
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_5C = arg1->unk_5C;
    arg0->unk_60 = arg1->unk_60;
    arg0->unk_64 = arg1->unk_64;
    arg0->unk_68 = arg1->unk_68;
    arg0->unk_6C = arg1->unk_6C;
    arg0->unk_70 = arg1->unk_70;
    arg0->unk_74 = arg1->unk_74;
    arg0->unk_78 = arg1->unk_78;
    arg0->unk_7C = arg1->unk_7C;
    return arg0;
}
