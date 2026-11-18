#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T;

extern s32 func_0885AB7C(s32, s32, s32);
s32 func_0885AB08(s32, s32);
void func_08929354(void *);
void func_0892944C(T *, s32);

s32 func_089293A4(T *arg0, s32 arg1) {
    s32 p;
    s32 n;
    s32 i;

    if (arg1 == 0) {
        return 0;
    }
    func_08929354(arg0);
    arg0->unk_20 = arg1;
    p = func_0885AB7C(arg1, 0, 0);
    n = func_0885AB08(arg1, 0);
    for (i = 0; i < n; i++) {
        func_0892944C(arg0, p);
        p += 0x100;
    }
    return 1;
}
