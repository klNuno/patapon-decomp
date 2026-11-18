#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} E088BBE88;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} H088BBE88;

typedef struct {
    u8 pad_00[0x40C];
    s32 unk_40C;
} L088BBE88;

typedef struct {
    u8 pad_00[0x30];
    u8 *unk_30;
    u8 pad_34[0x1C];
    s32 unk_50;
    L088BBE88 unk_54;
} T088BBE88;

typedef struct {
    u8 pad_00[0x10];
} P088BBE88;

extern u8 D_08A45E48[];

void func_088BA1A0(T088BBE88 *);
void func_088B8AA8(L088BBE88 *);
void *func_08827A50(s32, s32);
void *func_088B8398(void *, T088BBE88 *, u8 *, s32, s32, u32);
void func_088B8A44(P088BBE88 *, void *, s32);
void func_088B89E0(L088BBE88 *, P088BBE88 *);
void func_088B59C4(P088BBE88 *, s32);

T088BBE88 *func_088BBE88(T088BBE88 *arg0, s32 arg1, s32 arg2, s32 arg3, H088BBE88 *arg4, s32 arg5) {
    L088BBE88 *l;
    u32 *h;
    u32 n;
    u8 *base;
    u32 i;
    u8 *d;
    E088BBE88 *e;
    void *p;
    P088BBE88 sp;

    func_088BA1A0(arg0);
    arg0->unk_30 = D_08A45E48;
    arg0->unk_50 = arg5;
    l = &arg0->unk_54;
    func_088B8AA8(l);
    l->unk_40C = arg2;
    h = (u32 *)((u8 *)arg4 + arg4->unk_10);
    n = *h;
    base = (u8 *)arg4 + arg4->unk_0C + 4;
    e = (E088BBE88 *)(h + 1);
    for (i = 0; i < n; i++, e = (E088BBE88 *)((u8 *)e + 0x24)) {
        d = base + e->unk_20 * 0x180;
        p = func_08827A50(0xB0, arg3);
        if (p != NULL) {
            p = func_088B8398(p, arg0, d, arg1, arg2, i);
        }
        func_088B8A44(&sp, p, arg3);
        func_088B89E0(l, &sp);
        func_088B59C4(&sp, -1);
    }
    return arg0;
}
