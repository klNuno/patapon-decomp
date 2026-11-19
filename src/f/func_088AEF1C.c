#include "common.h"

extern u8 D_08A45C28[];
extern u8 D_089DFD38[];

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    u8 pad_0C[0x04];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s16 unk_20;
    s16 unk_22;
    u8 pad_24[0x1C];
    s32 unk_40;
    u8 pad_44[0x0C];
    s32 unk_50;
    s32 unk_54;
} T;

T *func_088AEF1C(T *arg0) {
    arg0->unk_00 = D_08A45C28;
    arg0->unk_04 = 0;
    arg0->unk_08 = D_089DFD38;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0x20;
    arg0->unk_22 = 0x20;
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    arg0->unk_40 = 1;
    return arg0;
}
