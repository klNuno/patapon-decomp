#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} func_08827CAC_s;

s32 func_08827D58(func_08827CAC_s *, s32);

void func_08827CAC(func_08827CAC_s *arg0, s32 (*arg1)(s32, void *), void *arg2) {
    s32 n;
    s32 p;

    n = arg0->unk_00;
    p = arg0->unk_10 + ((arg0->unk_0C + (n + 1) * 4 - 1) & ~(arg0->unk_0C - 1));
    do {
        if (func_08827D58(arg0, p) != 0) {
            if (arg1(p, arg2) == 0) {
                return;
            }
        }
        p += arg0->unk_08;
    } while (--n);
}
