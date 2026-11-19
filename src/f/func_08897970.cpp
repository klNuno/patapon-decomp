#include "common.h"

extern "C" {

struct A_08897970 {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0xD40 - 0x118];
    s32 unk_D40;
    f32 unk_D44;
    u8 pad_D48[0x4];
    f32 unk_D4C;
    u8 pad_D50[0x10FC - 0xD50];
    s32 unk_10FC;
    u8 pad_1100[0x1371 - 0x1100];
    u8 unk_1371;

    int get() const { return unk_D40; }
};

s32 func_088F5BA0(s32);

s32 func_08897970(A_08897970 *arg0) {
    s32 a;
    s32 r;
    s32 b;

    if (arg0->unk_1371 != 0) {
        return 1;
    }
    r = 0;
    if (func_088F5BA0(arg0->unk_114) != 0) {
        a = 0;
        b = 0;
        if (arg0->unk_D4C <= arg0->unk_D44) {
            switch ((u32)(arg0->get() != 0) ^ 1U) {
            case 0:
                break;
            default:
                b = 1;
                break;
            }
        }
        if (b != 0 && arg0->unk_10FC == 5) {
            a = 1;
        }
        if (a != 0) {
            r = 1;
        }
    }
    return r;
}

}
