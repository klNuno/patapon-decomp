#pragma divbyzerocheck on
#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    u8 pad_28[4];
    u32 unk_2C;
    u8 pad_30[8];
    s32 unk_38;
    u8 pad_3C[0xDC - 0x3C];
    s32 unk_DC;
    s32 unk_E0;
    s32 unk_E4;
} T0895CA34;

void func_0895D164(s32);
void func_0884BB88(s32, s32, s32);
s32 func_0895BB38(T0895CA34 *);
s32 func_0895D0F4(s32);
s32 func_0895CB9C(T0895CA34 *);
void func_0895BB40(T0895CA34 *);
void func_0895BB48(T0895CA34 *);
s32 func_0884BB58(s32);
void func_0895D17C(s32, s32);
s32 sceKernelDelayThread(u32);

s32 func_0895CA34(T0895CA34 *arg0) {
    func_0895D164(arg0->unk_DC);
    func_0884BB88(arg0->unk_E4, 0, 0);
    arg0->unk_E0 = 0;
    while (func_0895BB38(arg0)) {
        if (func_0895D0F4(arg0->unk_DC) != 0 && arg0->unk_24 == 0) {
            break;
        }
        if (arg0->unk_24 != 0) {
            if (arg0->unk_E0 == 0) {
                func_0884BB88(arg0->unk_E4, 0x80, 0x80);
                arg0->unk_E0 = 1;
            }
            if (func_0895CB9C(arg0) != 0) {
                func_0895BB40(arg0);
                arg0->unk_2C = (arg0->unk_2C + 1) % arg0->unk_1C;
                arg0->unk_24--;
                arg0->unk_38 ^= 1;
                func_0895BB48(arg0);
            }
        } else {
            sceKernelDelayThread(300);
        }
    }
    while (func_0884BB58(arg0->unk_E4)) {
        sceKernelDelayThread(1000);
    }
    func_0884BB88(arg0->unk_E4, 0, 0);
    arg0->unk_E0 = 0;
    func_0895D17C(arg0->unk_DC, 0x20);
    return 1;
}
