#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E0890D3D8;

typedef struct {
    u8 pad_00[0xE84];
    E0890D3D8 *unk_E84;
} T0890D3D8;

void func_0890D3D8(T0890D3D8 *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
    case 0: {
        E0890D3D8 *p = arg0->unk_E84;
        arg1 *= 8;
        ((E0890D3D8 *)((u8 *)p + arg1))->unk_04 = -1;
        break;
    }
    case 1: {
        E0890D3D8 *p = arg0->unk_E84;
        arg1 *= 8;
        ((E0890D3D8 *)((u8 *)p + arg1))->unk_04 = 1;
        break;
    }
    case 2: {
        E0890D3D8 *p = arg0->unk_E84;
        arg1 *= 8;
        ((E0890D3D8 *)((u8 *)p + arg1))->unk_04 = 2;
        break;
    }
    }
}
