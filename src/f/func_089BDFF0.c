#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} S_089BDFF0_CC0;

typedef struct {
    u8 pad_00[0xCB8];
    u8 unk_CB8[0x8];
    S_089BDFF0_CC0 *unk_CC0;
    u8 pad_CC4[0xDE0 - 0xCC4];
    s32 unk_DE0;
    s32 unk_DE4;
    s32 unk_DE8;
    s32 unk_DEC;
    u8 pad_DF0[0x14];
    s32 unk_E04;
    u8 unk_E08;
} S_089BDFF0;

s32 func_089C6430(u8 *);
void func_089C6548(void *, s32, s32, s32);
void func_089BE0C8(S_089BDFF0 *, s32);

s32 func_089BDFF0(S_089BDFF0 *arg0) {
    s32 ret;

    ret = func_089C6430(arg0->unk_CB8);
    switch (ret) {
    case 0:
        break;
    case 1:
        if (arg0->unk_CC0->unk_04 == 3) {
            func_089BE0C8(arg0, 3);
        } else if (arg0->unk_CC0->unk_04 == 12) {
            arg0->unk_E04 = 0;
            arg0->unk_E08 = 1;
        }
        break;
    case 3:
        func_089C6548(arg0->unk_CB8, 0, 0, 0);
        break;
    case 2:
        arg0->unk_DE8 += arg0->unk_DE0;
        arg0->unk_DEC += arg0->unk_DE4;
        arg0->unk_DE0 = 0;
        arg0->unk_DE4 = 0;
        break;
    }
    return ret;
}
