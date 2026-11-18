#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08;
    u8 unk_09;
    u8 pad_0A[0x16];
    u8 unk_20[4];
} T088A1F54;

s32 func_088A2028(T088A1F54 *);
s32 func_088A279C(void *);

u32 func_088A1F54(T088A1F54 *arg0, u32 arg1) {
    u32 i;

    if (!(u8)func_088A2028(arg0)) {
        return arg1;
    }
    for (i = 0; i < arg1; i++) {
        if (arg0->unk_09 == 0) {
            arg0->unk_04++;
        }
        if (func_088A279C(arg0->unk_20) == 0) {
            arg0->unk_09 = 1;
            break;
        }
    }
    return arg1 - i;
}
