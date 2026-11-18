#include "common.h"

extern "C" {

typedef struct T {
    u8 pad_00[0x8];
    s32 *unk_08;
    s32 *unk_0C;
} T;

s32 *func_088087B4(s32 *, s32 *);
s32 func_08808980(void);
s32 func_08808A80(s32 *, s32 *);
void func_08808B0C(s32 *, s32 *, s32);
void func_08808B88(s32 *, const s16 &);
s16 func_08808D40(s32 *);
s32 func_08808D48(T *);

s32 func_08808C38(T *arg0, s32 *arg1, s32 arg2) {
    s32 c;
    s32 avail;
    s32 eof;
    s32 n;
    union {
        s16 unk_00;
        s32 pad;
    } t;

    avail = arg0->unk_0C - arg0->unk_08;
    n = *func_088087B4(&arg2, &avail);
    if (n > 0) {
        func_08808B0C(arg1, arg0->unk_08, n);
        arg1 += n;
        arg0->unk_08 += n;
        arg2 -= n;
    }
    while (arg2 > 0) {
        c = func_08808D48(arg0);
        eof = func_08808980();
        if (func_08808A80(&c, &eof)) {
            break;
        }
        t.unk_00 = func_08808D40(&c);
        func_08808B88(arg1++, t.unk_00);
        n++;
        arg2--;
    }
    return n;
}

}
