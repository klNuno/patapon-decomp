#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x24];
    s32 *unk_24;
    s32 unk_28;
} Obj_0898A32C;
Obj_0898A32C *func_0898A32C(void *);
s32 func_088586E8(void);
u32 func_089B5464(s32);
s32 func_08946070(s32 *, s32);
extern s32 D_089F2E4C[];

struct S {
    u8 *unk_00;
    u8 pad_04[0x3F8];
    s32 unk_3FC;
    u8 pad_400[0xC];
    f32 unk_40C;
    s32 unk_410;
};

struct V {
    u8 unk_00[0x28];
    s32 *volatile unk_28;
    volatile u32 unk_2C;

    void func_00() {
        unk_2C = 0;
        unk_28 = (s32 *)((u8 *)this + ((u32)unk_00 & 3));
    }

    void func_04(s32 arg0) {
        u32 i;
        s32 *p;
        i = unk_2C * sizeof(s32);
        p = (s32 *)((u8 *)unk_28 + i);
        if (p != NULL) {
            *p = arg0;
        }
        unk_2C++;
    }

    void func_08(u32 arg0) {
        s32 *p = unk_28;
        s32 *q = unk_28;
        if (q != p + arg0) {
            p += unk_2C;
            do {
                q++;
            } while (q != p);
        }
        unk_2C = 0;
    }
};

s32 func_089C2EA0(S *arg0) {
    V v;
    u8 *p;
    s32 k;
    f32 a, b, c, d;
    u32 i, n;
    const s32 *q;
    s32 ret;

    p = arg0->unk_00 + 0x1212D0;
    if (func_0898A32C(p)->unk_28 == 0) {
        k = 0x20;
    } else {
        k = *func_0898A32C(p)->unk_24;
    }
    if (k == 0x23) {
        a = arg0->unk_40C;
        if (a <= 0.8f) {
            return 0x2F;
        }
        if (a <= 0.95f) {
            return 0x30;
        }
        v.func_00();
        i = 0;
        q = D_089F2E4C;
        do {
            k = *q;
            if (func_08946070(&arg0->unk_3FC, k) == 0) {
                v.func_04(k);
            }
            i++;
            q++;
        } while (i < 9U);
        n = v.unk_2C;
        if (n == 0) {
            v.func_08(n);
            return 0x30;
        }
        b = (f32)func_089B5464(func_088586E8());
        n--;
        b /= 4294967296.0f;
        c = (f32)n;
        d = c * b;
        b = 0.0f;
        b += d;
        {
            s32 *r;
            s32 *e;
            u32 index;
            if (2147483648.0f <= b) goto upper;
            index = (s32)b;
            goto converted;
        upper:
            b -= 2147483648.0f;
            index = (s32)b;
            index |= (u32)-32768;
        converted:
            r = v.unk_28;
            ret = r[index];
            u32 size = v.unk_2C;
            e = r + size;
            s32 *j = v.unk_28;
            if (j != e) {
                e = r + v.unk_2C;
                do {
                    j++;
                } while (j != e);
            }
            v.unk_2C = 0;
        }
        return ret;
    }
    if (arg0->unk_410 == 0) {
        return 0x2F;
    }
    return (arg0->unk_410 == 1) ? 0x2E : 0x2D;
}
}
