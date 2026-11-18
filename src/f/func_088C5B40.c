#include "common.h"

typedef struct {
    u8 pad_00[0x45B0];
    s32 unk_45B0;
    s32 unk_45B4;
} M_088C5B40;

typedef struct {
    u8 pad_00[0x14A0];
    M_088C5B40 *unk_14A0;
} G_088C5B40;

typedef struct {
    u8 pad_00[0x19D4];
    s32 unk_19D4;
} A_088C5B40;

extern G_088C5B40 *D_08AD1F14[];
s32 func_0886E580(A_088C5B40 *);
void func_0886F33C(A_088C5B40 *, s32, s32);

s32 func_088C5B40(A_088C5B40 *arg0) {
    s32 v;
    M_088C5B40 *m;

    v = func_0886E580(arg0);
    if (v == 0x10001 && arg0->unk_19D4 == 0) {
        v = 1;
        m = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_14A0;
        if (m->unk_45B0 >= 0) {
            v = 0;
        } else if (m->unk_45B4 >= 0) {
            v = m->unk_45B4;
        }
    }
    switch (v) {
    case 0x10000:
        break;
    case 0x10001:
        func_0886F33C(arg0, -2, 3);
        break;
    case 0x10002:
        return 0x10001;
    case 0:
        func_0886F33C(arg0, 0, 0);
        break;
    case 1:
        func_0886F33C(arg0, 1, 2);
        break;
    case 2:
        func_0886F33C(arg0, 2, 2);
        break;
    case 3:
        func_0886F33C(arg0, 3, 2);
        break;
    case 4:
        return 2;
    }
    return 0x10000;
}
