#include "common.h"

typedef struct T0880C044_S {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x8];
    s32 unk_40;
    u8 pad_44[0x5];
    u8 unk_49;
} T0880C044_S;

extern s32 func_08809C00(s32, s32, s32);
extern s32 func_08809C10(s32, s32, s32, s32);

void func_0880C044(T0880C044_S *arg0) {
    s32 temp;
    s32 v;

    func_08809C00((s32)arg0, 0, 0);
    func_08809C10((s32)arg0, arg0->unk_28, arg0->unk_28, arg0->unk_28);
    temp = arg0->unk_28 + arg0->unk_24;
    arg0->unk_34 = temp;
    arg0->unk_30 = temp;
    arg0->unk_2C = temp;
    if (arg0->unk_49 == 0) {
        v = arg0->unk_40;
        v = (v < 1) ? 1 : ((v < 2) ? v : 1);
        arg0->unk_2C -= (arg0->unk_24 - 1) * v;
    }
}
