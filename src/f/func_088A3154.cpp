#include "common.h"

extern "C" {

typedef struct {
    u16 unk_00;
    u16 unk_02;
} B_088A3154;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    B_088A3154 unk_08;
} M_088A3154;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0C;
    B_088A3154 *unk_10;
    B_088A3154 *unk_14;
    B_088A3154 *unk_18;
} S_088A3154;

inline const u32 &max_088A3154(const u32 &a, const u32 &b) {
    return a < b ? b : a;
}

s32 func_088A3154(S_088A3154 *arg0, M_088A3154 *arg1) {
    switch (arg1->unk_00) {
    case 9:
        break;
    case 0x25:
        arg0->unk_0C++;
    case 2:
    case 0x16:
    case 0x27:
        arg0->unk_00++;
        break;
    case 0x64:
        arg0->unk_10 = &arg1->unk_08;
        break;
    case 0x66:
        arg0->unk_14 = &arg1->unk_08;
        break;
    case 0x65:
        arg0->unk_18 = &arg1->unk_08;
        break;
    case 0x1A: {
        B_088A3154 *b = &arg1->unk_08;
        u32 n;
        if (arg1->unk_08.unk_00 & 2) {
            arg0->unk_04++;
            n = b->unk_02 + 1;
            arg0->unk_08 = max_088A3154(arg0->unk_08, n);
        }
        break;
    }
    case 0x1C:
        break;
    case 1:
        break;
    case 0:
        break;
    }
    return arg1->unk_00;
}

}
