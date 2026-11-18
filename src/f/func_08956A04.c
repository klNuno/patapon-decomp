#include "common.h"

typedef struct {
    u8 pad_00[0x220A8];
    s32 unk_220A8;
    u32 unk_220AC;
    u8 pad_220B0[8];
    s32 unk_220B8;
    u8 pad_220BC[4];
    s32 unk_220C0;
} T;

void func_08956E50(s32, f32);

void func_08956A04(T *arg0, s32 arg1, s32 arg2, f32 arg3) {
    func_08956E50((s32)arg0, arg3);
    arg0->unk_220B8 = arg1;
    arg0->unk_220C0 = arg2;
    arg0->unk_220A8 = 0;
    arg0->unk_220AC = (u32)(4800.0f * arg3);
}
