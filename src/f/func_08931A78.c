#include "common.h"

extern void func_088CE4F4(void *, s32);
extern u8 D_08A47048[];
typedef struct {
    u8 pad_00[0x28];
    u8 *unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    u8 pad_34[0xC];
    f32 unk_40, unk_44, unk_48, unk_4C;
    s32 unk_50, unk_54;
} T;

T *func_08931A78(T *arg0) {
    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A47048;
    arg0->unk_30 = 0;
    arg0->unk_40 = 5.0f;
    arg0->unk_44 = 5.0f;
    arg0->unk_48 = 5.0f;
    arg0->unk_4C = 5.0f;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    return arg0;
}
