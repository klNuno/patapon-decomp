#pragma divbyzerocheck on
#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x6BC];
    s32 unk_6BC;
} Sub_0892CF98;

class Obj_0892CF98 {
public:
    u8 pad_00[0x6E0];
    Sub_0892CF98 *unk_6E0;
    u8 pad_6E4[0x34];
    s32 unk_718;
    u8 pad_71C[0x17C];
    u8 unk_898;
    u8 pad_899[3];
    s32 unk_89C;
    s32 unk_8A0;

    s32 func_set(s32 v, s32 base) {
        s32 n;
        if (unk_6E0 == NULL) {
            return 0;
        }
        n = unk_6E0->unk_6BC + 1 - base;
        if (n <= 0) {
            return 0;
        }
        v = v % n;
        if (v < 0) {
            v += n;
        }
        unk_8A0 = v;
        return 1;
    }
};

u8 func_0892CF98(Obj_0892CF98 *arg0, s32 arg1) {
    s32 temp_a3;
    u8 ret;

    temp_a3 = arg0->unk_89C;
    if (temp_a3 < 0) {
        return 0;
    }
    ret = 0;
    if (arg0->unk_718 != 4) {
        return ret;
    }
    if (arg0->unk_898 != 0) {
        ret = arg0->func_set(arg0->unk_8A0 + arg1, temp_a3);
    }
    return ret;
}

}
