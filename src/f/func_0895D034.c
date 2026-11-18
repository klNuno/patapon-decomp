#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
    u8 pad_5C[0x14];
    s32 unk_70;
    s32 unk_74;
} T0895D034;

extern s32 func_0895C054(s32);
extern s32 func_0895C9DC(s32);
s32 func_0895C07C(s32);
s32 func_0895CA1C(s32);

s32 func_0895D034(T0895D034 *arg0) {
    s32 a;
    s32 d;

    if (arg0->unk_74 == 0) {
        return 0;
    }
    if (func_0895C054(arg0->unk_70) == 0) {
        if (func_0895C9DC(arg0->unk_74) == 0) {
            return 0;
        }
    }
    a = func_0895C07C(arg0->unk_70);
    d = func_0895CA1C(arg0->unk_74) - a;
    if (d >= -arg0->unk_58 * 2 && d <= arg0->unk_58 * 2) {
        return 0;
    }
    if (d > arg0->unk_58 * 2) {
        return 1;
    }
    return 2;
}
