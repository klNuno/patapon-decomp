#include "common.h"

typedef struct {
    u8 pad_00[0xCB8];
    u8 unk_CB8[0x128];
    s32 unk_DE0;
    s32 unk_DE4;
    s32 unk_DE8;
    s32 unk_DEC;
    f32 unk_DF0;
    f32 unk_DF4;
} A;

s32 func_089C6430(u8 *);
void func_089C6548(void *, s32, s32, s32);

s32 func_089BF968(A *arg0) {
    s32 temp = func_089C6430(arg0->unk_CB8);
    switch (temp) {
    case 0:
    case 1:
        break;
    case 3:
        func_089C6548(arg0->unk_CB8, 0, 0, 0);
        break;
    case 2:
        arg0->unk_DE8 += arg0->unk_DE0;
        arg0->unk_DEC += arg0->unk_DE4;
        arg0->unk_DF4 += arg0->unk_DF0;
        arg0->unk_DE0 = 0;
        arg0->unk_DE4 = 0;
        arg0->unk_DF0 = 0.0f;
        break;
    }
    return temp;
}
