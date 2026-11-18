#include "common.h"

typedef struct {
    u8 pad_00[0xCC0];
    u8 unk_CC0[0xDE8 - 0xCC0];
    s32 unk_DE8;
    s32 unk_DEC;
    s32 unk_DF0;
    s32 unk_DF4;
} Obj_089C0318;

s32 func_089C6430(u8 *);
void func_089C6548(void *, s32, s32, s32);

s32 func_089C0318(Obj_089C0318 *arg0) {
    s32 temp;

    temp = func_089C6430(arg0->unk_CC0);
    switch (temp) {
    case 0:
        break;
    case 1:
        break;
    case 3:
        func_089C6548(arg0->unk_CC0, 0, 0, 0);
        break;
    case 2:
        arg0->unk_DF0 += arg0->unk_DE8;
        arg0->unk_DF4 += arg0->unk_DEC;
        arg0->unk_DE8 = 0;
        arg0->unk_DEC = 0;
        break;
    }
    return temp;
}
