#include "common.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 *unk_18;
} T0;

extern u8 D_08A44AD8[];

T0 *func_08868454(T0 *arg0) {
    arg0->unk_18 = D_08A44AD8;
    arg0->unk_14 = 0;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    return arg0;
}
