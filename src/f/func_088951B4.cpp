#include "common.h"

extern "C" {
struct A_088901E4;

typedef struct N {
    s32 unk_00;
    N *unk_04;
    A_088901E4 **unk_08;

    int func_00(N *arg0) {
        int r = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&arg0->unk_08 && unk_04 == arg0->unk_04) r = 1;
        return r;
    }
    int func_04(N *arg0) {
        int r = 0;
        if (func_00(arg0) && unk_00 == arg0->unk_00) r = 1;
        return r;
    }
    bool func_08(N *arg0) { return !(bool)func_04(arg0); }
} N;

struct S {
    u8 pad_00[0x390];
    char *unk_390;
    u8 pad_394[0xCBC - 0x394];
    N unk_CBC;
    u8 pad_CC8[0x92E0 - 0xCC8];
    s32 unk_92E0, unk_92E4;
    u8 pad_92E8[4];
    u8 unk_92EC;

    N *func_00() { return &unk_CBC; }
};

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0xD80 - 0x118];
    f32 unk_D80;
} T;

s32 func_0888F7B4(A_088901E4 *, s32);
s32 func_0888F89C(A_088901E4 *, s32);
s32 func_08899E18(char *, s32);
s32 func_088F5BA0(s32);

inline s32 func_04(s32 x) {
    switch (x) {
    case 0: return 1;
    case 1: return 0;
    default: return x;
    }
}

f32 *func_088951B4(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct { N *unk_00; } it;
    f32 *ret, *p, *q;
    u32 b;
    s32 k, n;
    char *a;
    T *x;

    if (arg0->unk_92EC == 0) return NULL;
    ret = NULL;
    b = 1;
    if (arg1 == 0) b = 0;
    if (arg0->unk_92E0 == 1) b = (u8)!(bool)b;
    p = NULL;
    if (arg2 != 0) {
        n = arg0->unk_92E4;
        a = arg0->unk_390;
        k = func_04(n);
        p = func_088951B4((S *)func_08899E18(a, k), 1, 0, arg3);
        it.unk_00 = arg0->unk_CBC.unk_04;
    }
    begin:
    it.unk_00 = arg0->unk_CBC.unk_04;
    goto cmp;
    do {
        if (arg1 != 0) {
            x = (T *)func_0888F7B4(*it.unk_00->unk_08, arg3);
        } else {
            x = (T *)func_0888F89C(*it.unk_00->unk_08, arg3);
        }
        if (x != NULL && (arg3 == 0 || func_088F5BA0(x->unk_114) == 0)) {
            q = &x->unk_D80;
            if (ret == NULL) {
                ret = q;
            } else if (b != 0) {
                if (p != NULL && *q > *p) goto next;
                if (!(*q > *ret)) goto next;
                ret = q;
            } else {
                if (p != NULL && *q < *p) goto next;
                if (!(*q < *ret)) goto next;
                ret = q;
            }
        }
    next:
        if (it.unk_00 == NULL) goto cmp;
        it.unk_00 = it.unk_00->unk_04;
    cmp:;
    } while (it.unk_00->func_08(arg0->func_00()));
    return ret;
}
}
