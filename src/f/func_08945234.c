#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
    u8 pad_1C[0x3A4];
    s32 unk_3C0;
    s32 unk_3C4;
    s32 unk_3C8;
    s32 unk_3CC;
    s32 unk_3D0;
} T;

void func_089437CC(void *, s32, s32);
extern u8 D_08A47660[];
extern u8 D_08A47678[];

T *func_08945234(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_089437CC(arg0, arg2, arg3);
    arg0->unk_00 = D_08A47660;
    arg0->unk_18 = D_08A47678;
    arg0->unk_3C0 = arg1;
    arg0->unk_3C4 = 0;
    arg0->unk_3C8 = 0;
    arg0->unk_3CC = 0;
    arg0->unk_3D0 = 0;
    return arg0;
}
