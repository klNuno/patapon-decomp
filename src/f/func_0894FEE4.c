#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
} T0894FEE4_E;

typedef struct {
    T0894FEE4_E *unk_00;
    s32 unk_04;
} T0894FEE4_V;

typedef struct {
    u8 pad_00[0x190B4];
    s32 unk_190B4;
    u8 pad_190B8[0xFC4];
    T0894FEE4_V unk_1A07C;
    u8 pad_1A084[0xC0];
    s32 unk_1A144;
} T0894FEE4;

void func_0894FEE4(T0894FEE4 *arg0) {
    T0894FEE4_E *p;
    T0894FEE4_V *vp;
    s32 *n;

    p = arg0->unk_1A07C.unk_00;
    vp = &arg0->unk_1A07C;
    if ((u32)p != (u32)(*(T0894FEE4_E **)&vp->unk_00 + arg0->unk_1A07C.unk_04)) {
        n = &arg0->unk_1A07C.unk_04;
        do {
            p++;
        } while (p != vp->unk_00 + *n);
    }
    arg0->unk_1A07C.unk_04 = 0;
    arg0->unk_1A144 = 0;
    arg0->unk_190B4 = 0;
}
