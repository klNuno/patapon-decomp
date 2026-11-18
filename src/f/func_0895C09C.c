#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x28];
    s32 unk_2C;
    s32 unk_30;
} I_0895C09C;

typedef struct {
    u8 pad_00[0xB4];
    s32 unk_B4;
    u8 pad_B8[0x8];
    s32 unk_C0;
    s32 unk_C4;
    u8 pad_C8[0x4];
    s32 unk_CC;
} S_0895C09C;

void func_0895D134(s32);
s32 func_0895BB38(S_0895C09C *);
s32 func_0895D0F4(s32);
s32 sceKernelReferEventFlagStatus(s32, I_0895C09C *);
s32 sceKernelDelayThread(u32);
s32 sceKernelSetEventFlag(s32, u32);
void func_0895BB40(S_0895C09C *);
s32 func_0895D034(s32);
void func_0895BB48(S_0895C09C *);
void func_0895D17C(s32, s32);
void func_0895C2B4(S_0895C09C *);
void func_0895D11C(s32);

s32 func_0895C09C(S_0895C09C *arg0) {
    I_0895C09C info;
    u8 f;
    s32 m;
    s32 v;

    func_0895D134(arg0->unk_B4);
    while (func_0895BB38(arg0) != 0) {
        f = func_0895D0F4(arg0->unk_B4);
        if (f != 0 && arg0->unk_CC == 0) {
            break;
        }
        info.unk_00 = 0x34;
        sceKernelReferEventFlagStatus(arg0->unk_C4, &info);
        if (info.unk_2C == 4) {
            sceKernelDelayThread(1000000);
            sceKernelSetEventFlag(arg0->unk_C4, 0);
        }
        func_0895BB40(arg0);
        v = func_0895D034(arg0->unk_B4);
        m = 1;
        switch (v) {
        case 0:
            m = 1;
            break;
        case 1:
            m = 2;
            break;
        case 2:
            m = 3;
            break;
        }
        if (f != 0) {
            m = 1;
        }
        arg0->unk_C0 = m;
        func_0895BB48(arg0);
        func_0895D17C(arg0->unk_B4, 2);
        func_0895C2B4(arg0);
        func_0895D11C(arg0->unk_B4);
    }
    func_0895D11C(arg0->unk_B4);
    func_0895D17C(arg0->unk_B4, 0x10);
    return 1;
}
