#include "common.h"

typedef struct T T;
struct T {
    T *unk_00;
    u8 pad_04[4];
    s32 unk_08;
};

typedef struct {
    u8 pad_00[0x348];
    T *unk_348;
} S;

s32 func_0898FBAC(const S *arg0, u32 arg1) {
    u32 i;
    struct { T *unk_00; } temp;

    temp.unk_00 = arg0->unk_348;
    i = 0;
    if (arg1 != 0) {
        do {
            ++i;
            temp.unk_00 = temp.unk_00->unk_00;
        } while (i < arg1);
    }
    return temp.unk_00->unk_08;
}
