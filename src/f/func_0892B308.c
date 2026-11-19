#include "common.h"

s32 func_0892ABD8(s32);
void func_089317FC(s32, s32, s32);
void func_08933570(s32 *);

typedef struct {
    u8 pad_00[0x1F0];
    s32 unk_1F0[0xB0 / 4];
    s32 unk_2A0, unk_2A4, unk_2A8, unk_2AC;
    u8 pad_2B0[0x48];
    s32 unk_2F8;
    u8 pad_2FC[0x10C];
    s32 unk_408, unk_40C;
    u8 pad_410[0x1BD];
    u8 unk_5CD;
} S;

void func_0892B308(S *arg0) {
    s32 temp;
    func_08933570(arg0->unk_1F0);
    arg0->unk_2F8 = 0;
    arg0->unk_2A4 = 0;
    arg0->unk_5CD = 0;
    arg0->unk_2A8 = 0;
    arg0->unk_2AC = -1;
    temp = arg0->unk_40C;
    if (temp != 0) {
        s32 a = func_0892ABD8(arg0->unk_2A0);
        func_089317FC(a, temp, arg0->unk_408);
        arg0->unk_40C = 0;
    }
}
