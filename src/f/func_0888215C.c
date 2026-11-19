#include "common.h"

typedef struct Unk {
    s32 unk_00;
    s32 unk_04;
    struct Unk *volatile unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *volatile unk_1C;
    volatile s32 unk_20;
} Unk;

extern u8 D_08A4537C[];
extern u8 D_08A4536C[];

Unk *func_0888215C(Unk *arg0) {
    arg0->unk_1C = D_08A4537C;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = NULL;
    arg0->unk_0C = 0;
    arg0->unk_1C = D_08A4536C;
    arg0->unk_20 = 0;
    arg0->unk_20 = 0;
    arg0->unk_08 = arg0;
    return arg0;
}
