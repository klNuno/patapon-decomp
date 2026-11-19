#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A47500[];
extern u8 D_08A474E4[];
extern char D_089E8D6C[];

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
    char *unk_08;
    s32 unk_0C;
    s32 unk_10;
} T;

T *func_089426A0(T *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A47500;
    arg0->unk_04 = 0x12;
    arg0->unk_08 = D_089E8D6C;
    arg0->unk_0C = 5;
    arg0->unk_00 = D_08A474E4;
    arg0->unk_10 = arg1;
    return arg0;
}
