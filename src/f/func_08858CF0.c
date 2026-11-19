#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} T;

extern T D_08A7B9B4[];

T *func_0895B318(T *, s16);
void func_08804000(void *, void (*)(void *, s32), s32, s32);

void func_08858CF0(void)
{
    func_08804000(D_08A7B9B4, (void (*)(void *, s32))func_0895B318, 0xC, 7);
}
