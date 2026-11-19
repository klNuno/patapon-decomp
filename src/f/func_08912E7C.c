#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x80];
} Unk;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0xFCC];
    Unk *unk_FCC;
    s32 unk_FD0;
} Obj;

void func_08912E7C(Obj *arg0, const V *arg1)
{
    Unk *p;
    Unk **base;
    s32 *count;

    p = arg0->unk_FCC;
    base = &arg0->unk_FCC;
    if ((u32)p != (u32)(p + arg0->unk_FD0)) {
        count = &arg0->unk_FD0;
        do {
            p->unk_20 += arg1->unk_00;
            p->unk_24 += arg1->unk_04;
            p++;
        } while (p != *base + *count);
    }
}
