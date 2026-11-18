#include "common.h"

typedef struct {
    u8 pad_00[0x2888];
    u8 unk_2888;
} U;

typedef struct {
    U *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x340 - 0xC];
    u8 unk_340[0xCC0 - 0x340];
    u8 unk_CC0[4];
    s32 unk_CC4;
    u8 pad_CC8[0xDE8 - 0xCC8];
    s32 unk_DE8;
    s32 unk_DEC;
    s32 unk_DF0;
    s32 unk_DF4;
    u8 pad_DF8[4];
    s32 unk_DFC;
    s32 unk_E00;
    s32 unk_E04;
} T;

void func_089578A8(f32, U *, s32, s32);
void func_089579D8(char *arg0);
s32 func_089C63F4(void *, s32);
void func_089C6548(void *, s32, s32, s32);

void func_089BFE6C(T *arg0, s32 arg1) {
    arg0->unk_00->unk_2888 = 0;
    if (arg1 == 0) {
        func_089578A8(0.0f, arg0->unk_00, 2, 7);
    }
    arg0->unk_DE8 = 0;
    arg0->unk_DEC = 0;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_E00 = 0;
    arg0->unk_DFC = 0;
    arg0->unk_08 = 0;
    func_089C6548(arg0->unk_CC0, func_089C63F4(arg0->unk_340, arg1), 0, 0);
    func_089579D8((char *)arg0->unk_00);
    arg0->unk_E04 = arg0->unk_CC4;
}
