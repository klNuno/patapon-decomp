#include "common.h"

typedef struct T {
    u8 pad_00[0x14];
    s8 *unk_14;
    s8 *unk_18;
} T;

s32 func_0880872C(T *, s32);
void func_08808798(s8 *, s8 *, s32);
s32 *func_088087B4(s32 *, s32 *);
s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);

s32 func_08808648(T *arg0, s8 *arg1, s32 arg2) {
    s32 n;
    s32 avail;
    s32 c;
    s32 eof;

    avail = arg0->unk_18 - arg0->unk_14;
    n = *func_088087B4(&arg2, &avail);
    if (n > 0) {
        func_08808798(arg0->unk_14, arg1, n);
        arg1 += n;
        arg0->unk_14 += n;
        arg2 -= n;
    }
    while (arg2 > 0) {
        eof = func_0880ADB8();
        c = func_0880872C(arg0, *arg1++);
        if (func_0880ADA4(&c, &eof)) {
            break;
        }
        n++;
        arg2--;
    }
    return n;
}
