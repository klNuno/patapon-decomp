#include "common.h"

extern "C" {

struct C {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
};
struct I {
    s32 *unk_00;
    C *unk_04;
};
struct E {};
struct J {
    s32 *volatile unk_00;
    C *volatile unk_04;
};

extern s32 func_0881F280(s32, s32, s32);
void func_08952C20(s32 *, s32 *, s32 *, s8);

s32 *func_089529D8(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4, I *arg5, I *arg6) {
    I a = *arg5;
    I b = *arg6;
    E e;
    J i0;
    J i1;
    s32 n = b.unk_00 - a.unk_00;
    if ((arg3 <= arg4) && (arg3 <= n)) {
        s32 *p = *(s32 *volatile *)&a.unk_00;
        C *c = a.unk_04;
        s32 *q = arg0;
        if (q != arg1) {
            for (; q != arg1; ++q, ++p) {
                s32 *r = c->unk_08;
                i0.unk_00 = p;
                i0.unk_04 = c;
                if (p - r < c->unk_04) {
                    *i0.unk_00 = *q;
                } else {
                    s32 *t = *(s32 **)&i0.unk_00;
                    if (t != NULL) {
                        *t = *q;
                    }
                    ++i0.unk_04->unk_04;
                }
            }
        }
        func_0881F280((s32)arg0, (s32)arg1, (arg2 - arg1) * 4);
        s32 *r = a.unk_00;
        if (p != *(s32 *volatile *)&a.unk_00) {
            do {
                *--arg2 = *--p;
            } while (p != r);
        }
        return arg2;
    } else if (arg4 <= n) {
        s32 *p = *(s32 *volatile *)&a.unk_00;
        C *c = a.unk_04;
        s32 *q = arg1;
        if (q != arg2) {
            for (; q != arg2; ++q, ++p) {
                s32 *r = c->unk_08;
                i1.unk_00 = p;
                i1.unk_04 = c;
                if (p - r < c->unk_04) {
                    *i1.unk_00 = *q;
                } else {
                    s32 *t = *(s32 **)&i1.unk_00;
                    if (t != NULL) {
                        *t = *q;
                    }
                    ++i1.unk_04->unk_04;
                }
            }
        }
        s32 k = arg1 - arg0;
        func_0881F280((s32)(arg2 - k), (s32)arg0, k * 4);
        s32 *r = a.unk_00;
        if (*(s32 *volatile *)&a.unk_00 != p) {
            do {
                *arg0++ = *r++;
            } while (r != p);
        }
        return arg0;
    } else {
        func_08952C20(arg0, arg1, arg2, *(s8 *)&e);
        return arg0 + arg4;
    }
}

}
