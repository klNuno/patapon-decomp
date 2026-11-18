#include "common.h"

typedef struct B_088282DC {
    struct B_088282DC *unk_00;
    struct B_088282DC *unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
} B_088282DC;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    u8 pad_14[4];
    B_088282DC *unk_18;
    s32 unk_1C;
} H_088282DC;

void func_088270D8(B_088282DC *, s32);

void func_088282DC(H_088282DC *arg0, void *arg1) {
    B_088282DC *b;
    B_088282DC *prev;
    B_088282DC *next;
    B_088282DC *t;

    if (arg1 == NULL) {
        return;
    }
    if (arg0 == arg1) {
        return;
    }
    b = ((B_088282DC **)arg1)[-1];
    if (b == NULL) {
        return;
    }
    if (b->unk_08 == 1) {
        return;
    }
    ((B_088282DC **)arg1)[-1] = NULL;
    prev = b->unk_00;
    next = b->unk_04;
    arg0->unk_10 -= b->unk_10 + 0x1C;
    if (b > arg0->unk_18 || arg0->unk_18->unk_08 != 1) {
        arg0->unk_18 = b;
    }
    b->unk_08 = 1;
    arg0->unk_1C++;
    if (prev != NULL && prev->unk_08 == 1) {
        t = prev->unk_00;
        b->unk_00 = t;
        t->unk_04 = b;
        if (prev == arg0->unk_18) {
            arg0->unk_18 = b;
        }
        arg0->unk_1C--;
    }
    func_088270D8(b, arg0->unk_08);
    if (next != NULL && next->unk_08 == 1) {
        t = b->unk_00;
        next->unk_00 = t;
        t->unk_04 = next;
        if (b == arg0->unk_18) {
            arg0->unk_18 = next;
        }
        arg0->unk_1C--;
        func_088270D8(next, arg0->unk_08);
    }
}
