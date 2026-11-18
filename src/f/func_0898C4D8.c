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
    s32 unk_3D4;
    s32 unk_3D8;
    s32 unk_3DC;
    s32 unk_3E0;
    s32 unk_3E4;
    s32 unk_3E8;
    s32 unk_3EC;
    s32 unk_3F0;
} T0898C4D8;

void func_089437CC(void *, s32, s32);
s32 func_08979434(s32);
extern u8 D_08A48420[];
extern u8 D_08A48438[];

T0898C4D8 *func_0898C4D8(T0898C4D8 *arg0, s32 arg1, s32 arg2) {
    func_089437CC(arg0, func_08979434(arg1), arg2);
    arg0->unk_00 = D_08A48420;
    arg0->unk_18 = D_08A48438;
    arg0->unk_3C0 = arg1;
    arg0->unk_3C4 = 0;
    arg0->unk_3C8 = 0;
    arg0->unk_3CC = 0;
    arg0->unk_3D0 = 0;
    arg0->unk_3D4 = 0;
    arg0->unk_3D8 = 0;
    arg0->unk_3DC = 0;
    arg0->unk_3E0 = 0;
    arg0->unk_3E4 = 0;
    arg0->unk_3E8 = 0;
    arg0->unk_3EC = 0;
    arg0->unk_3F0 = 0;
    return arg0;
}
