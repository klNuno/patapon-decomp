#include "common.h"

typedef struct {
    u8 pad_00[0x45B0];
    s32 unk_45B0;
    s32 unk_45B4;
} M;

typedef struct {
    u8 pad_00[0x14A0];
    M *unk_14A0;
} G;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x19D4 - 0xC];
    s32 unk_19D4;
} A;

typedef struct {
    u8 pad_00[0x1524];
    s32 unk_1524;
} R;

extern G *D_08AD1F14[];
void func_088C5AD0(A *);
R *func_0886E734(A *, s32);
void func_0886F33C(R *, s32, s32);

R *func_088C5C84(A *arg0, s32 arg1) {
    R *r;

    if (arg0->unk_08 != 1) {
        func_088C5AD0(arg0);
    }
    r = func_0886E734(arg0, arg1);
    switch (arg1) {
    case 0:
        func_0886F33C(r, 0, 2);
        (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_45B0 = -1;
        break;
    case 1:
        (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_45B4 = -1;
        r->unk_1524 = arg0->unk_19D4;
        break;
    case 2:
        (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_45B4 = -1;
        break;
    case 3:
        (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_45B4 = -1;
        break;
    case 4:
        (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0->unk_45B4 = -1;
        break;
    }
    arg0->unk_19D4 = arg1;
    return r;
}
