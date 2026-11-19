#include "common.h"
extern u8 D_08A44AD8[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    volatile s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 *unk_1C;
    s32 unk_20;
    s32 unk_24;
} T;

T *func_088D3258(T *arg0, s32 arg1) {
    arg0->unk_00 = arg1;
    arg0->unk_1C = D_08A44AD8;
    arg0->unk_18 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_14 = 0;
    arg0->unk_10 = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_10 = *(volatile s32 *)&arg0->unk_00;
    return arg0;
}
