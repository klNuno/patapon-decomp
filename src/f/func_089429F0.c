#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} T;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A47538[];
extern u8 D_089E8DD0[];
extern u8 D_08A4751C[];

T *func_089429F0(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A47538;
    arg0->unk_04 = 0x11;
    arg0->unk_08 = D_089E8DD0;
    arg0->unk_0C = 2;
    arg0->unk_00 = D_08A4751C;
    arg0->unk_10 = arg1;
    arg0->unk_14 = arg2;
    return arg0;
}
