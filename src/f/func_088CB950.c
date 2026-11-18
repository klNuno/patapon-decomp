#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[8];
    u32 unk_20;
} A;

typedef struct {
    s32 unk_00;
    s32 unk_04[3];
} E;

typedef struct S {
    s32 unk_00;
    s32 unk_04;
    struct S **unk_08;
    s32 unk_0C;
    E *unk_10;
    s32 unk_14;
    u8 *unk_18;
    s32 unk_1C;
} S;

s32 func_088CBD64(s32, void *, void *);
void func_088CBF40(void *, s32);

s32 func_088CB950(S *arg0, A *arg1, A *arg2) {
    u32 a;
    u32 b;
    u32 c;
    s32 d;
    s32 e;
    s32 i;
    s32 j;
    s32 *q;
    E *p;
    s32 n;
    s32 k;

    a = arg1->unk_20;
    b = arg2->unk_20;
    if (a < b) {
        c = a;
        a = b;
        b = c;
    }
    d = a - b;
    e = d;
    func_088CBF40(&arg0->unk_04, d);
    func_088CBF40(&arg0->unk_08, d);
    func_088CBF40(&arg0->unk_10, d);
    func_088CBF40(&arg0->unk_18, d);
    i = 0;
    if (arg0->unk_0C > 0) {
        j = 0;
        do {
            func_088CBF40((u8 *)arg0->unk_08 + j, d);
            if (func_088CB950(*(S **)((u8 *)arg0->unk_08 + j), arg1, arg2) == 0) {
                return 0;
            }
            i++;
            j += 4;
        } while (i < arg0->unk_0C);
    }
    if ((arg1->unk_0C & 0x20000000) && arg0->unk_00 == 10) {
        d = arg1->unk_14 - 0x40;
    }
    i = 0;
    if (arg0->unk_14 > 0) {
        j = 0;
        do {
            func_088CBF40((u8 *)arg0->unk_10 + j, e);
            i++;
            j += 0x10;
        } while (i < arg0->unk_14);
    }
    k = arg0->unk_00;
    if (k == 3 || k == 10) {
        p = (E *)((u32)arg0->unk_10 + (arg0->unk_14 << 4));
        n = p->unk_00;
        q = p->unk_04;
        if (n != 0) {
            do {
                func_088CBF40(q, d);
                if (func_088CBD64(*q, arg1, arg2) == 0) {
                    return 0;
                }
                --n;
                ++q;
            } while (n != 0);
        }
    }
    i = 0;
    if (arg0->unk_1C > 0) {
        j = 0;
        do {
            func_088CBF40(arg0->unk_18 + j + 4, e);
            i++;
            j += 8;
        } while (i < arg0->unk_1C);
    }
    return 1;
}
