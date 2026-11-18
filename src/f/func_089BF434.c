#include "common.h"

typedef struct {
    u8 pad_00[0x1F30];
    s32 unk_1F30;
    u8 pad_1F34[0x2888 - 0x1F34];
    u8 unk_2888;
} U;

typedef struct {
    U *unk_00;
    u8 pad_04[0x334];
    u8 unk_338[0xCB8 - 0x338];
    u8 unk_CB8[4];
    s32 unk_CBC;
    u8 pad_CC0[0xDE0 - 0xCC0];
    s32 unk_DE0;
    s32 unk_DE4;
    s32 unk_DE8;
    s32 unk_DEC;
    s32 unk_DF0;
    s32 unk_DF4;
    s32 unk_DF8;
    s32 unk_DFC;
    s32 unk_E00;
    s32 unk_E04;
    s32 unk_E08;
    s32 unk_E0C;
} S;

void func_089578A8(f32, U *, s32, s32);
void func_08957014(U *, s32);
void func_089579D8(char *arg0);
s32 func_089C63F4(void *, s32);
void func_089C6548(void *, s32, s32, s32);

void func_089BF434(S *arg0) {
    arg0->unk_00->unk_2888 = 0;
    func_089578A8(0.0f, arg0->unk_00, 2, 7);
    arg0->unk_00->unk_1F30 = 1;
    func_08957014(arg0->unk_00, 0x5F);
    func_089579D8((char *)arg0->unk_00);
    arg0->unk_DE0 = 0;
    arg0->unk_DE4 = 0;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_DE8 = 0;
    arg0->unk_DEC = 0;
    arg0->unk_E04 = 0;
    arg0->unk_E0C = 0;
    arg0->unk_DF8 = 0;
    arg0->unk_E00 = 0;
    func_089C6548(arg0->unk_CB8, func_089C63F4(arg0->unk_338, 0), 0, 0);
    arg0->unk_E08 = arg0->unk_CBC;
}
