#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
} T0895B830;

extern char D_08A04CE8[];

void func_0895B8EC(T0895B830 *, s32);
s32 sceKernelCreateThread(const char *, void *, s32, s32, u32, void *);
s32 sceKernelStartThread(s32, s32, void *);

s32 func_0895B830(T0895B830 *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp2C;
    u8 *p;
    s32 n;

    func_0895B8EC(arg0, 1);
    arg0->unk_00 = 0;
    arg0->unk_01 = 1;
    arg0->unk_04 = sceKernelCreateThread(D_08A04CE8, arg1, arg3, 0x1000, 0, NULL);
    if (arg0->unk_04 == 0) {
        return 0;
    }
    p = (u8 *)&sp2C;
    n = 4;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    sp2C = arg2;
    sceKernelStartThread(arg0->unk_04, 4, &sp2C);
    return 1;
}
