#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
} E_0888B1AC;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x1C];
    u32 unk_24;
    E_0888B1AC unk_28[1];
} H_0888B1AC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    H_0888B1AC *unk_08;
    E_0888B1AC *unk_0C;
    s8 *unk_10;
} S_0888B1AC;

void func_0888B1AC(S_0888B1AC *arg0, H_0888B1AC *arg1, u32 arg2) {
    s8 *p;
    E_0888B1AC *e;
    s32 *q;

    arg0->unk_04 = arg2;
    arg0->unk_08 = arg1;
    arg0->unk_0C = NULL;
    arg0->unk_10 = NULL;
    if (arg0->unk_04 < 0) {
        arg0->unk_04 = 0;
    } else if (arg0->unk_08->unk_24 < (u32)arg0->unk_04) {
        arg0->unk_04 = arg0->unk_08->unk_24;
    }
    if (arg2 < arg0->unk_08->unk_24) {
        arg0->unk_0C = &arg0->unk_08->unk_28[arg2];
    }
    if (arg0->unk_08->unk_04 & 1) {
        e = arg0->unk_0C;
        if (e != NULL && (q = &e->unk_04, e->unk_04 != 0)) {
            p = (s8 *)arg0->unk_08 + *q;
            arg0->unk_10 = p;
            if (*p >= 0) {
                arg0->unk_00 = *p;
            }
        }
    }
}
