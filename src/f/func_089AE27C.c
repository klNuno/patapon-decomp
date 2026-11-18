#include "common.h"

typedef struct {
    u8 pad_00[0x19CE0];
    u8 unk_19CE0[4];
} C_089AE27C;

typedef struct {
    u8 pad_00[0x1498];
    C_089AE27C *unk_1498;
} B_089AE27C;

typedef struct {
    u8 pad_00[0x42820];
    B_089AE27C *unk_42820;
} A_089AE27C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x4];
    u8 unk_10[0x8580 - 0x10];
    u8 unk_8580[0xF140 - 0x8580];
    u8 unk_F140[0x142B0 - 0xF140];
    u8 *unk_142B0;
} S_089AE27C;

extern A_089AE27C *D_08AD1E28[];

void func_088F53C0(void *, u8 *, s32, s32);
void func_088F4690(void *, u8 *, s32, s32);
void func_0897EAE0(void *, u8 *, s32, s32);

S_089AE27C *func_089AE27C(S_089AE27C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = -1;
    func_088F53C0(arg0->unk_10, (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_19CE0, arg1, arg3);
    func_088F4690(arg0->unk_8580, (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_19CE0, arg1, arg3);
    func_0897EAE0(arg0->unk_F140, (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_19CE0, arg1, arg3);
    arg0->unk_142B0 = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_19CE0;
    return arg0;
}
