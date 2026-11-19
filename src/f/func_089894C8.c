#include "common.h"

extern void *D_08AD1E28[];

typedef struct {
    u8 pad_00[0x1498];
    s8 *unk_1498;
} T;

typedef struct {
    u8 pad_00[0x42820];
    T *unk_42820;
} G;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    u8 unk_0C;
    u8 pad_0D[3];
} E;

typedef struct {
    u8 pad_00[0x30];
    E unk_30[2];
    s32 unk_50;
} S;

void func_089894C8(S *arg0) {
    s32 off = arg0->unk_50 << 4;
    E *p = (E *)(off + (u32)arg0);
    s32 i = p[3].unk_00;
    if (i >= 0 && p[3].unk_0C != 0) {
        G *g = D_08AD1E28[0] != NULL ? (G *)D_08AD1E28[0] : NULL;
        T *temp = *(T *volatile *)&g->unk_42820;
        s32 k = i << 2;
        s8 *base = *(s8 *volatile *)&temp->unk_1498;
        s8 *q = (s8 *)(k + (u32)base);
        q[0x19CE4]--;
    }
}
