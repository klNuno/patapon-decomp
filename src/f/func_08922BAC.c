#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46D9C[];
extern u8 D_089E6868[];
extern u8 D_08A46D80[];

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0C;
} T;

T *func_08922BAC(T *arg0) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A46D9C;
    arg0->unk_04 = 13;
    arg0->unk_08 = D_089E6868;
    arg0->unk_0C = 5;
    arg0->unk_00 = D_08A46D80;
    return arg0;
}
