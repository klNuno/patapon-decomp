#include "common.h"

typedef struct Unk {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    struct Unk *volatile unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
    u8 *unk_20;
    s32 unk_24;
    u8 *unk_28;
} Unk;

extern u8 D_08A4535C[];
extern u8 D_08A46054[];

Unk *func_088CE4F4(Unk *arg0, s32 arg1) {
    u8 *temp;
    arg0->unk_28 = D_08A46054;
    temp = D_08A4535C;
    arg0->unk_00 = 0;
    arg0->unk_20 = temp;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = NULL;
    arg0->unk_10 = 0;
    arg0->unk_24 = arg1;
    arg0->unk_0C = arg0;
    return arg0;
}
