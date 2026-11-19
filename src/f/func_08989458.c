#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    u8 unk_3C;
} T;

typedef struct {
    u8 pad_00[0x19CE4];
    s8 unk_19CE4;
} U;

typedef struct {
    u8 pad_00[0x1498];
    U *unk_1498;
} V;

typedef struct {
    u8 pad_00[0x42820];
    V *unk_42820;
} W;

typedef struct {
    u8 pad_00[0x30];
    u8 pad_30[0x20];
    s32 unk_50;
} S;

typedef W G;
extern G *D_08AD1E28[];

void func_08989458(S *arg0) {
    T *temp = (T *)((arg0->unk_50 << 4) + (u32)arg0);
    s32 temp2 = temp->unk_30;
    if (temp2 >= 0 && temp->unk_3C != 0) {
        W *temp3 = (W *)D_08AD1E28[0];
        U *temp4;
        temp3 = temp3 != NULL ? temp3 : NULL;
        temp2 <<= 2;
        temp4 = (U *)(temp2 + (u32)temp3->unk_42820->unk_1498);
        temp4->unk_19CE4++;
    }
}
