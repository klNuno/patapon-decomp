#include "common.h"

#pragma divbyzerocheck on

extern "C" {

extern int sceKernelSignalSema(s32, s32);
extern int sceKernelWaitSema(s32, s32, s32);
void func_0881F120(void *, void *, u32);

typedef struct {
    void *unk_00;
    u8 *unk_04;
    u32 unk_08;
    u32 unk_0C;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
    s32 unk_20;
} S;

struct L {
    volatile s32 unk_00;
    void f_00() { sceKernelSignalSema(unk_00, 1); }
};

s32 func_0895D5BC(S *arg0, u8 *arg1, u32 arg2) {
    L temp;
    u32 r;
    u32 n;

    sceKernelWaitSema(temp.unk_00 = arg0->unk_20, 1, 0);
    if (arg0->unk_1C < arg2 || arg0->unk_08 < arg2) {
        temp.f_00();
        return 0;
    }
    r = arg0->unk_18;
    if (r < arg0->unk_10) {
        n = arg0->unk_10 - r;
        if (arg2 < n) {
            n = arg2;
        }
        func_0881F120(arg1, arg0->unk_04 + r, n);
        arg0->unk_18 = (arg0->unk_18 + n) % arg0->unk_08;
        arg0->unk_1C -= n;
    } else {
        n = arg0->unk_08 - r;
        if (n >= arg2) {
            func_0881F120(arg1, arg0->unk_04 + r, arg2);
            arg0->unk_18 = (arg0->unk_18 + arg2) % arg0->unk_08;
            arg0->unk_1C -= arg2;
        } else {
            func_0881F120(arg1, arg0->unk_04 + r, n);
            arg0->unk_18 = (arg0->unk_18 + n) % arg0->unk_08;
            func_0881F120(arg1 + n, arg0->unk_04 + arg0->unk_18, arg2 - n);
            arg0->unk_18 += arg2 - n;
            arg0->unk_1C -= arg2;
        }
    }
    temp.f_00();
    return 1;
}

}
