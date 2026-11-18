#include "common.h"

typedef struct T {
    u8 pad_00[0x14];
    s32 *unk_14;
    s32 *unk_18;
} T;

s32 func_08808A94(T *, u16);
void func_08808B0C(s32 *, s32 *, s32);
s32 *func_088087B4(s32 *, s32 *);
s32 func_08808A80(s32 *, s32 *);
s32 func_08808980(void);

s32 func_08808988(T *arg0, s32 *arg1, s32 arg2) {
    s32 n;
    s32 avail;
    s32 c;
    s32 eof;

    avail = arg0->unk_18 - arg0->unk_14;
    n = *func_088087B4(&arg2, &avail);
    if (n > 0) {
        func_08808B0C(arg0->unk_14, arg1, n);
        arg1 += n;
        arg0->unk_14 += n;
        arg2 -= n;
    }
    while (arg2 > 0) {
        eof = func_08808980();
        c = func_08808A94(arg0, *arg1++);
        if (func_08808A80(&c, &eof)) {
            break;
        }
        n++;
        arg2--;
    }
    return n;
}
