#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct S0 {
    f32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    struct S0 *unk_24;
    V3 unk_28;
    u8 unk_34;
    u8 pad_35[3];
    s32 unk_38;
    s32 unk_3C;
    u8 unk_40;
    u8 pad_41[3];
    void *unk_44;
} S0;

void func_0881F5C0(void *, s32, s32);
extern f32 D_08A00380[];
extern f32 D_08A00388[];
extern u8 D_08A469B8[];

S0 *func_08913614(S0 *arg0) {
    V3 v;

    arg0->unk_44 = D_08A469B8;
    arg0->unk_00 = 0.5f;
    arg0->unk_18 = 0;
    arg0->unk_14 = 0;
    arg0->unk_10 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 3;
    v.unk_00 = D_08A00380[0];
    v.unk_04 = D_08A00380[1];
    v.unk_08 = D_08A00388[0];
    arg0->unk_24 = arg0;
    arg0->unk_28 = v;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0;
    func_0881F5C0(arg0, 0, 0x20);
    return arg0;
}
