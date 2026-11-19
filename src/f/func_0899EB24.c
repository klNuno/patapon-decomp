#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0xC];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    u8 *unk_24;
} Unk;

extern u8 D_08A44AD8[];
void func_0880416C(void *);
void func_0885DE4C(void *);

void *func_0899EB24(Unk *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0->unk_0C != NULL) {
            arg0->unk_24 = D_08A44AD8;
            func_0885DE4C(arg0->unk_0C);
            arg0->unk_18 = 0;
            arg0->unk_20 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
