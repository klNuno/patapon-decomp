#include "common.h"

extern "C" {
class T {
public:
    virtual void unk_08();
    virtual void unk_0C(s32);
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x40C];
    s32 unk_414;
    u8 pad_418[0x40C];
    s32 *unk_824;
    s32 unk_828;
    u8 pad_82C[0x404];
    u8 unk_C30;
    u8 unk_C31;
    u8 pad_C32[2];
    T *unk_C34;
    s32 unk_C38;
} S;

s32 func_088148F0(s32, s32);
void func_088140CC(void);
void func_0885A43C(s32 *);
s32 sceDisplayGetVcount(void);
s32 sceDisplayWaitVblankStartCB(void);
u32 sceKernelGetSystemTimeLow(void);
extern s32 D_089F89B0[];
extern s32 D_089F89B4[];
extern u32 D_08A872E8[];
extern s32 D_08A872EC[];
extern s32 D_08A872F0[];

void func_0885A0F8(S *arg0) {
    T *temp;
    u32 temp_s1;
    s32 temp_v0;
    f32 temp_f2;

    sceKernelGetSystemTimeLow();
    func_088148F0(4, 0);
    func_088148F0(0, 0);
    temp = arg0->unk_C34;
    if (temp != 0) {
        temp->unk_0C(arg0->unk_C30 != 0 ? 2 : 1);
        func_088148F0(0, 0);
    }
    if (arg0->unk_C30 != 0) {
        if (sceDisplayGetVcount() - D_089F89B0[0] == 0) {
            sceDisplayWaitVblankStartCB();
        }
    }
    sceDisplayWaitVblankStartCB();
    func_088140CC();
    temp_s1 = sceKernelGetSystemTimeLow();
    temp_v0 = sceDisplayGetVcount();
    D_08A872E8[0] = temp_s1;
    D_089F89B0[0] = temp_v0;
    temp_f2 = (f32)D_08A872F0[0];
    D_08A872EC[0]++;
    D_08A872F0[0] = (s32)(temp_f2 + 0.016666668f * (f32)D_089F89B4[0]);
    if (arg0->unk_C31 != 0) {
        func_0885A43C(arg0->unk_824);
        arg0->unk_828 ^= 1;
        if (*arg0->unk_824 != arg0->unk_414) {
            arg0->unk_824 = &arg0->unk_414;
        } else {
            arg0->unk_824 = &arg0->unk_04;
        }
    }
    arg0->unk_C38++;
}
}
