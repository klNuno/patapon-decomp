#include "common.h"

typedef struct {
    u8 pad_00[0xAA4];
    void *unk_AA4;
    void *unk_AA8;
    u8 pad_AAC[0x12A4];
    u8 unk_1D50;
    u8 pad_1D51[0x1DF];
    s32 unk_1F30;
    u8 pad_1F34[0x248C];
    u8 unk_43C0;
    u8 pad_43C1[0x1DCE7];
    s32 unk_220A8;
    s32 unk_220AC;
} T;

void func_0897C3F4(f32, void *, s32);
void func_088A4138(f32, void *, s32);
extern s32 func_08950B34(s32);
extern s32 func_0894DAE0(s32);

void func_08956EA8(T *arg0, f32 arg1) {
    func_0897C3F4(arg1, arg0->unk_AA4, 1);
    func_088A4138(0.0f, arg0->unk_AA8, 0);
    arg0->unk_220A8 = 4;
    arg0->unk_220AC = 0;
    arg0->unk_1F30 = 2;
    func_08950B34((s32)&arg0->unk_1D50);
    func_0894DAE0((s32)&arg0->unk_43C0);
}
