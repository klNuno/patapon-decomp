#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u32 *unk_08;
    s32 unk_0C;
    u32 unk_10;
    s32 unk_14;
} S_0885A58C;

typedef void (*F_0885A58C)(s32, u32, s32, s32, s32);

void func_088147E0(u32, u32);
extern F_0885A58C D_089F89D0[];
extern s32 D_08A87FA4[];

void func_0885A58C(S_0885A58C *arg0) {
    u32 temp;

    temp = (arg0->unk_10 << 8) >> 8;
    *arg0->unk_08 = temp | 0x08000000;
    func_088147E0(arg0->unk_10, temp);
    D_089F89D0[(arg0->unk_04 & 0x800000) >> 23](arg0->unk_00, arg0->unk_04, arg0->unk_14, 0, arg0->unk_0C);
    D_08A87FA4[0] = 0;
}
