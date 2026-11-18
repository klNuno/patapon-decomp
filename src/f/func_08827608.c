#include "common.h"

typedef struct B_08827608 {
    struct B_08827608 *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} B_08827608;

typedef struct {
    u8 pad_00[0x4];
    B_08827608 *unk_04;
    u8 pad_08[0x8];
    s32 unk_10;
} H_08827608;

extern const s32 D_089DA768[];

static inline void fix_08827608(B_08827608 *b) {
    s32 d;

    b->unk_0C = 0;
    if (b->unk_08 != 2) {
        b->unk_10 = (u8 *)b->unk_00 - (u8 *)b - 0x1C;
    } else {
        b->unk_10 = 0;
    }
    d = D_089DA768[0];
    b->unk_18 = 0;
    b->unk_14 = d;
}

void func_08827608(H_08827608 *arg0, B_08827608 *arg1) {
    B_08827608 *cur;
    B_08827608 *prev;
    B_08827608 *pp;

    if (arg1 == NULL) {
        return;
    }
    if (arg0 == (H_08827608 *)arg1) {
        return;
    }
    cur = arg0->unk_04;
    prev = NULL;
    pp = NULL;
    while (cur < arg1) {
        pp = prev;
        prev = cur;
        cur = cur->unk_00;
        if (cur == NULL) {
            return;
        }
    }
    arg0->unk_10 -= prev->unk_10 + 0x1C;
    prev->unk_08 = 1;
    if (cur != NULL && cur->unk_08 == 1) {
        prev->unk_00 = cur->unk_00;
    }
    fix_08827608(prev);
    if (pp != NULL && pp->unk_08 == 1) {
        pp->unk_00 = prev->unk_00;
        fix_08827608(pp);
    }
}
