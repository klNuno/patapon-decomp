#include "common.h"

typedef struct {
    u8 pad_00[0x690];
    u8 unk_690;
} B_0888F6C8;

typedef struct {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10[4];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    B_0888F6C8 *unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    f32 unk_40;
} A_0888F6C8;

extern void func_0881F5C0(void *, s32, s32);

s32 func_0888F6C8(A_0888F6C8 *arg0, B_0888F6C8 *arg1, s32 arg2) {
    struct { B_0888F6C8 *unk_00; } h;

    h.unk_00 = arg1;
    arg0->unk_0C = -1;
    func_0881F5C0(arg0->unk_10, 0, 4);
    arg0->unk_00 = 1;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = -1;
    func_0881F5C0(arg0->unk_10, 0, 4);
    arg0->unk_14 = -1;
    arg0->unk_18 = 11;
    arg0->unk_30 = NULL;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0.5f;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    if (h.unk_00->unk_690 == 0) {
        return 0;
    }
    arg0->unk_14 = -1;
    arg0->unk_18 = 1;
    arg0->unk_30 = h.unk_00;
    switch (arg2) {
    case 0:
        arg0->unk_04 = 3;
        break;
    case 1:
        break;
    }
    return 0;
}
