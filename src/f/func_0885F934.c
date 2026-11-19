#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 *volatile unk_18;
} Unk;

extern u8 D_08A44AC8[];
extern u8 D_08A44AD8[];
void func_0880416C(void *);
void func_0885DE4C(void *);

void *func_0885F934(Unk *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_18 = D_08A44AC8;
        if (arg0 != NULL) {
            arg0->unk_18 = D_08A44AD8;
            func_0885DE4C(arg0);
            arg0->unk_0C = 0;
            arg0->unk_14 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
