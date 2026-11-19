#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} A;

typedef struct {
    s64 *unk_00;
    s32 unk_04;
} B;

typedef struct {
    u8 pad_00[0x548];
    A unk_548;
    u8 pad_550[0x84];
    B unk_5D4;
} T;

void func_088F9DC8(T *arg0) {
    A *p;
    s32 *a;
    B *q;
    s64 *b;

    a = arg0->unk_548.unk_00;
    p = &arg0->unk_548;
    if ((u32)a != (u32)(a + arg0->unk_548.unk_04)) {
        do {
            a++;
        } while (a != p->unk_00 + arg0->unk_548.unk_04);
    }
    arg0->unk_548.unk_04 = 0;
    b = arg0->unk_5D4.unk_00;
    q = &arg0->unk_5D4;
    if ((u32)b != (u32)(b + arg0->unk_5D4.unk_04)) {
        do {
            b++;
        } while (b != q->unk_00 + arg0->unk_5D4.unk_04);
    }
    arg0->unk_5D4.unk_04 = 0;
}
