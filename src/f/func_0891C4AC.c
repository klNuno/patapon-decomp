#include "common.h"

typedef struct {
    u8 pad_00[0x13E0];
    f32 unk_13E0;
    f32 unk_13E4;
    f32 unk_13E8;
    f32 unk_13EC;
} S;

void func_0886575C(s32, s32, s32);

void func_0891C4AC(S *arg0, const f32 *arg1, s32 arg2) {
    arg0->unk_13E0 = arg1[0];
    arg0->unk_13E4 = arg1[1];
    arg0->unk_13E8 = arg1[2];
    arg0->unk_13EC = arg1[3];
    func_0886575C(0, arg2, 1);
}
