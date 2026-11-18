#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];
} E_0890FC40;

typedef struct {
    u8 pad_00[4];
    E_0890FC40 *unk_04;
} S;

void func_0890F144(E_0890FC40 *, E_0890FC40 *);
void func_0890F784(E_0890FC40 *, E_0890FC40 *);
s32 func_0890F9D0(S *, E_0890FC40 *);

static inline s32 unk_00(E_0890FC40 *a, E_0890FC40 *b) {
    s32 r;
    if (a->unk_04 == b->unk_04) {
        r = a->unk_00 < b->unk_00;
    } else {
        r = a->unk_04 < b->unk_04;
    }
    return r;
}

static inline E_0890FC40 *unk_04(E_0890FC40 *a, E_0890FC40 *b, S *s) {
    ++a;
    for (;;) {
        while (func_0890F9D0(s, a)) {
            ++a;
        }
        do {
            --b;
        } while (!(bool)func_0890F9D0(s, b));
        if (a >= b) {
            return a;
        }
        func_0890F784(a, b);
        ++a;
    }
}

E_0890FC40 *func_0890F568(E_0890FC40 *arg0, E_0890FC40 *arg1, S *arg2) {
    u8 a;
    bool b;
    E_0890FC40 *p;

    if (arg0 == arg1) {
        return arg0;
    }
    p = arg2->unk_04;
    a = (u8)unk_00(arg0, p);
    --arg1;
    b = !(bool)unk_00(arg1, p);
    if (a && b) {
        return unk_04(arg0, arg1, arg2);
    }
    if (b) {
        if (arg0 == arg1) {
            return arg0;
        }
        do {
            --arg1;
        } while (arg0 != arg1 && !(bool)unk_00(arg1, *(E_0890FC40 *volatile *)&arg2->unk_04));
        if (arg0 == arg1) {
            return arg0;
        }
    } else if (a) {
        ++arg0;
        while (arg0 != arg1 + 1 && unk_00(arg0, *(E_0890FC40 *volatile *)&arg2->unk_04)) {
            ++arg0;
        }
        if (arg0 == arg1 + 1) {
            return arg0;
        }
    }
    func_0890F144(arg0, arg1);
    return unk_04(arg0, arg1, arg2);
}
}
