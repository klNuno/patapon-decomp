#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    f32 unk_14;
} P_08956380;

typedef struct {
    u8 pad_00[0x1E8];
    u32 unk_1E8;
    u8 pad_1EC[0x30C - 0x1EC];
    u8 unk_30C[0xB90 - 0x30C];
    u8 unk_B90[0x25CC - 0xB90];
    u8 unk_25CC[0x1C];
    u8 unk_25E8;
    u8 pad_25E9[3];
    u32 unk_25EC;
    u8 pad_25F0[4];
    u8 unk_25F4;
} T;

void func_08879610(void *, s32);
P_08956380 *func_0888AA78(P_08956380 *, s32, s32, s32, s32, s32, f32);
void func_0887A12C(void *, s32);
void func_088A3A88(void *, P_08956380 *);
void func_088A3B14(void *, P_08956380 *);
s32 func_08951C38(char *);
s32 func_089525B4(s32 *);
void func_08951AF8(T *);

void func_089519DC(T *arg0, s32 arg1, s32 arg2) {
    P_08956380 p;
    s32 a;
    s32 d;
    s32 c;
    s32 b;

    a = func_089525B4((s32 *)arg0);
    if (arg1 == 0) {
        a = 0;
    }
    b = func_08951C38((char *)arg0) != 0;
    if (b) {
        (void)0;
    } else {
        b = arg0->unk_25F4 != 0;
        if (b) b = arg0->unk_1E8 < arg0->unk_25EC + 2;
    }
    b = (u8)b;
    c = arg2 != 0 ? 0x10 : 0;
    b |= c;
    func_0888AA78(&p, 0, b, a, a, -1, 0.0f);
    func_088A3B14(arg0->unk_25CC, &p);
    func_088A3A88(arg0->unk_25CC, &p);
    func_0887A12C(arg0->unk_B90, 0);
    if (func_08951C38((char *)arg0) != 0) {
        arg0->unk_25E8 = 1;
    }
    arg0->unk_25F4 = 0;
    d = func_089525B4((s32 *)arg0);
    func_08951AF8(arg0);
    if (d != 0) {
        func_08879610(arg0->unk_30C, d);
    }
}
}
