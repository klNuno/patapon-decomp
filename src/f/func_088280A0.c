#include "common.h"

typedef struct B_088282DC {
    struct B_088282DC *unk_00;
    struct B_088282DC *unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    u8 pad_14[8];
} B_088282DC;

typedef struct {
    u8 pad_00[4];
    B_088282DC *unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u32 unk_14;
    B_088282DC *unk_18;
    s32 unk_1C;
} H;

void func_088270D8(B_088282DC *, s32);
extern s32 func_08827280(B_088282DC *, s32, u32, B_088282DC **, u32 *);
extern void func_08828418(s32, s32, s32, s32, s32);

static inline s32 unk_00(B_088282DC *p, u32 arg0, s32 arg1)
{
    s32 temp = *(volatile s32 *)&p->unk_08 == 1;
    if (temp != 0) {
        temp = (s32)((u32)p->unk_00 - arg0 * (((u32)(p + 1) + arg0 - 1) / arg0)) >= arg1;
    }
    return temp;
}

void *func_088280A0(H *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4)
{
    B_088282DC *volatile p;
    u32 q;
    B_088282DC *r;
    B_088282DC *s;
    B_088282DC *t;
    s32 n;
    s32 ret;
    u32 size;
    u32 dst;

    if (arg3 == 0) {
        return arg0;
    }
    r = arg0->unk_18;
    s = arg0->unk_04;
    n = arg3 + arg4;
    t = NULL;
    if (unk_00(r, arg4, n) != 0) {
        t = r;
    } else if (s->unk_08 != 2) {
        do {
            if (unk_00(s, arg4, n) != 0) {
                t = s;
            }
            s = s->unk_00;
        } while (s->unk_08 != 2);
    }
    if (t == NULL) {
        return NULL;
    }

    ret = func_08827280(t, n, arg4, (B_088282DC **)&p, &q) & 0xFF;
    if (ret != 0) {
        p->unk_00 = t->unk_00;
        p->unk_04 = t;
        r = p;
        r->unk_00->unk_04 = r;
        t->unk_00 = p;
        p->unk_08 = 0;
    } else {
        t->unk_08 = 0;
        p = t;
        arg0->unk_1C--;
    }
    if (ret != 0) {
        r = p;
        size = (u32)r->unk_00 - (u32)r - 0x1C;
    } else {
        size = (u32)t->unk_00 - (u32)t - 0x1C;
    }
    arg0->unk_10 += size + 0x1C;
    arg0->unk_14 = arg0->unk_10 < arg0->unk_14 ? arg0->unk_14 : arg0->unk_10;
    dst = q + arg4;
    if (ret != 0) {
        func_08828418((s32)p, dst, arg1, arg2, size);
        func_088270D8(t, arg0->unk_08);
        if (arg0->unk_18 < t) {
            arg0->unk_18 = t;
        }
    } else {
        func_08828418((s32)t, dst, arg1, arg2, size);
        p = t;
    }
    ((B_088282DC **)dst)[-1] = p;
    return (void *)dst;
}
