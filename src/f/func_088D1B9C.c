#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} E;

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} R;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
} S;

typedef struct {
    u32 unk_00;
    s32 unk_04;
    S *unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
} T;

extern E D_089E0850[];
R *func_0884E644(s32);
s32 func_088A88C0(void);

inline s32 bit(u32 i, R *r) {
    return (r->unk_04[i >> 3] >> (i & 7)) & 1;
}

s32 func_088D1B9C(T *arg0) {
    u32 base;
    R *bits;
    E *e;

    if (arg0->unk_10 == 0) {
        return 0;
    }
    bits = func_0884E644(func_088A88C0());
    e = &D_089E0850[arg0->unk_04];
    base = arg0->unk_00;
    if (!bit(e->unk_00 + base, bits) && arg0->unk_08->unk_10 != 0) {
        return 0;
    }
    if (bit(e->unk_04 + base, bits) && arg0->unk_08->unk_14 != 0) {
        return 0;
    }
    return 1;
}
