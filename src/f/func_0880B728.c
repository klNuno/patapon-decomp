#include "common.h"

typedef struct T {
    u8 pad_00[0x24];
    u32 unk_24;
    s32 *unk_28;
    s32 *unk_2C;
    s32 *unk_30;
    s32 *unk_34;
    u8 pad_38[4];
    s32 unk_3C;
    u8 pad_40[9];
    u8 unk_49;
    u8 unk_4A;
} T;

extern s32 func_0880A57C(T *, s32 *, s32 *);
extern s32 func_0880A58C(T *, s32 *, s32 *, s32 *);

void func_0880B728(T *arg0) {
    s32 *p;
    s32 *q;

    func_0880A58C(arg0, 0, 0, 0);
    p = arg0->unk_28;
    q = p;
    if (arg0->unk_49 == 0) {
        q = p + 1;
        if (arg0->unk_3C > 4) {
            q += arg0->unk_24 - arg0->unk_24 * 4 / arg0->unk_3C;
        }
    }
    if (arg0->unk_4A != 0) {
        func_0880A57C(arg0, q, p + arg0->unk_24 - 1);
    } else {
        func_0880A57C(arg0, q, q);
    }
    arg0->unk_2C = arg0->unk_30 = arg0->unk_28;
    arg0->unk_34 = arg0->unk_28 + arg0->unk_24;
}
