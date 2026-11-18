#include "common.h"

typedef struct T {
    u8 pad_00[0x8];
    s8 *unk_08;
    s8 *unk_0C;
} T;

void func_08808798(s8 *, s8 *, s32);
s32 *func_088087B4(s32 *, s32 *);
s32 func_088088D0(T *);
s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);
s8 func_0880AD9C(s32 *);
void func_088088C4(s8 *, s8 *);

s32 func_088087D0(T *arg0, s8 *arg1, s32 arg2) {
    s8 ch;
    s32 c;
    s32 avail;
    s32 eof;
    s32 n;

    avail = arg0->unk_0C - arg0->unk_08;
    n = *func_088087B4(&arg2, &avail);
    if (n > 0) {
        func_08808798(arg1, arg0->unk_08, n);
        arg1 += n;
        arg0->unk_08 += n;
        arg2 -= n;
    }
    while (arg2 > 0) {
        c = func_088088D0(arg0);
        eof = func_0880ADB8();
        if (func_0880ADA4(&c, &eof)) {
            break;
        }
        ch = func_0880AD9C(&c);
        func_088088C4(arg1++, &ch);
        n++;
        arg2--;
    }
    return n;
}
