#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x40];
    u32 unk_40;
    u8 pad_44[0x10];
} T;

typedef struct {
    u8 pad_00[0x2A0C];
    T *unk_2A0C;
    s32 unk_2A10;
    T *unk_2A14;
    u8 pad_2A18[0x32C];
    u32 unk_2D44;
} S;

s32 func_08986114(char *);

inline s32 unk_00(T *arg0, T *arg1, S *arg2) {
    if (arg0 != arg1 && arg0->unk_40 <= arg2->unk_2D44) {
        return 0;
    }
    return 1;
}

s32 func_0898609C(S *arg0) {
    s32 temp = arg0->unk_2A10;
    T *temp2 = arg0->unk_2A0C;
    T *temp3 = arg0->unk_2A14;
    s32 temp4 = unk_00(temp3, temp2 + temp, arg0);
    if (temp4 == 0) {
        return (func_08986114((char *)arg0) != 0) ^ 1;
    }
    return 0;
}

}
