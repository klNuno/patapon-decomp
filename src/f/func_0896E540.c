#include "common.h"

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
} T;
typedef struct M {
    u8 pad_00[4];
    T *unk_04;
} M;
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} A;

M *func_08852FFC(s32);
extern s32 func_08853004(s32);
s32 *func_0884EBA0(s32, s32);
extern f32 *func_0884EBB0(s32, s32);
s32 func_0896EF28(A *);

s32 func_0896E540(A *arg0) {
    M *temp = func_08852FFC(arg0->unk_04);
    s32 temp2 = func_08853004(arg0->unk_04);

    if (*func_0884EBB0(temp2, 0x21) >= 3.5f) {
        return 0;
    }
    if (*func_0884EBA0(temp2, 0x25) != 0) {
        *func_0884EBB0(temp2, 0x10) = 0.0f;
    }
    *func_0884EBB0(temp2, 0x11) -= 1.0f / 30.0f;
    if (*func_0884EBB0(temp2, 0x11) > 0.0f) {
        return 0;
    }
    *func_0884EBB0(temp2, 0x11) = 0.0f;
    if (*func_0884EBB0(temp2, 0x10) < 1.0f) {
        return 0;
    }
    if (((temp->unk_04->unk_BD >> 6) & 1) == 0) {
        return 0;
    }
    return !(func_0896EF28(arg0) > 0);
}
