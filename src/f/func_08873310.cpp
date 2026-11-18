#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
    u8 pad_1520[0x55428 - 0x1520];
    s32 unk_55428;
} Obj_08873310;

u8 func_0891C1B4(s32);
extern s32 D_08AD1EF0[];

inline s32 wrap_08873310(s32 x) {
    return x > 10 ? 0 : (x < 0 ? 10 : x);
}

s32 func_08873310(Obj_08873310 *arg0) {
    s32 temp;

    if (func_0891C1B4(arg0->unk_55428) == 1) {
        return wrap_08873310(arg0->unk_151C + 1);
    }
    if (D_08AD1EF0[0] == 0) {
        return -1;
    }
    temp = arg0->unk_151C;
    D_08AD1EF0[0] = 0;
    return wrap_08873310(temp + 1);
}

}
