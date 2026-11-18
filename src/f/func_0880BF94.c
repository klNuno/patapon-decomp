#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    u32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x4];
    s32 unk_3C;
    u8 pad_40[0x9];
    u8 unk_49;
    u8 unk_4A;
} Obj_0880BF94;

extern s32 func_08809C00(s32, s32, s32);
extern s32 func_08809C10(s32, s32, s32, s32);

void func_0880BF94(Obj_0880BF94 *arg0) {
    s32 a2;
    s32 a1;

    func_08809C10((s32)arg0, 0, 0, 0);
    a2 = arg0->unk_28;
    a1 = a2;
    if (arg0->unk_49 == 0) {
        a1++;
        if (arg0->unk_3C > 1) {
            a1 += arg0->unk_24 - arg0->unk_24 / (u32)arg0->unk_3C;
        }
    }
    if (arg0->unk_4A != 0) {
        func_08809C00((s32)arg0, a1, a2 + arg0->unk_24 - 1);
    } else {
        func_08809C00((s32)arg0, a1, a1);
    }
    arg0->unk_2C = arg0->unk_30 = arg0->unk_28;
    arg0->unk_34 = arg0->unk_28 + arg0->unk_24;
}
