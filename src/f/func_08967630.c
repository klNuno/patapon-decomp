#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} A2;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0xE0];
    u8 unk_1B0[0x1C0];
    void *unk_370;
    s32 unk_374;
} T;

void func_0895F0B8();
void func_08940370(void *, s32, s32);
void func_08967780(s32);
extern u8 D_08A47CF8[];
extern u8 D_08A47D14[];
extern u8 D_08A47D2C[];
extern u8 D_08A47D3C[];
extern u8 D_08A47D88[];

T *func_08967630(T *arg0, s32 arg1, A2 *arg2) {
    func_0895F0B8();
    func_08940370(arg0->unk_1B0, arg2->unk_14, arg1);
    arg0->unk_08 = D_08A47CF8;
    arg0->unk_58 = D_08A47D14;
    arg0->unk_7C = D_08A47D2C;
    arg0->unk_CC = D_08A47D3C;
    arg0->unk_370 = D_08A47D88;
    arg0->unk_374 = arg2->unk_14;
    func_08967780((s32)arg0);
    return arg0;
}
