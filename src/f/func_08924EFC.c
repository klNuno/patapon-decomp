#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46E8C[];
extern u8 D_08A46E70[];
extern char D_089E68E4[];

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0C;
    s32 unk_10;
} T;

T *func_08924EFC(T *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A46E8C;
    arg0->unk_04 = 0xE;
    arg0->unk_08 = D_089E68E4;
    arg0->unk_0C = 2;
    arg0->unk_00 = D_08A46E70;
    arg0->unk_10 = arg1;
    return arg0;
}
