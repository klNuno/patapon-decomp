#include "common.h"

extern s32 func_08969374(s32);
void func_0889CBBC(void *);
void func_08880CDC(void *, s32);
void func_088825A4(s32, void *);
void func_0893C5C8(void *);

typedef struct {
    u8 pad_00[0x3B0];
    u8 unk_3B0[0x5D0];
    s32 unk_980;
    u8 pad_984[0xC];
    u8 unk_990[0xA0];
    s32 unk_A30;
    u8 pad_A34[0x11C];
    u8 unk_B50[0x54];
    s32 unk_BA4;
    s32 unk_BA8;
} T;

void func_088B3BD0(T *arg0) {
    func_08969374((s32)arg0);
    func_0889CBBC(arg0->unk_3B0);
    if (arg0->unk_980 != 0) {
        func_08880CDC(arg0->unk_990, arg0->unk_A30);
        arg0->unk_A30 = 0;
        func_088825A4(arg0->unk_980, arg0->unk_990);
    }
    func_0893C5C8(arg0->unk_B50);
    arg0->unk_BA4 = 0;
    arg0->unk_BA8 = 0;
}
