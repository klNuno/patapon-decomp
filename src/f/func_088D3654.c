#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E_088D3654;

typedef struct {
    s32 unk_00;
    E_088D3654 unk_04[1];
} R_088D3654;

typedef struct {
    u8 pad_00[0x20];
    R_088D3654 *unk_20;
} S_088D3654;

s32 func_088D3654(S_088D3654 *arg0, s32 arg1, u32 arg2) {
    R_088D3654 *p;
    u32 i;

    p = arg0->unk_20;
    for (i = 0; i < arg2; i++) {
        p = (R_088D3654 *)((u8 *)p + (p->unk_00 * 8 + 4));
    }
    return p->unk_04[arg1].unk_00;
}
