#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0xC];
    s32 unk_34;
} S;

typedef struct {
    u8 pad_00[0x28];
    S unk_28;
    u8 pad_60[0x18];
    f32 unk_78;
} T;

void func_0894DD84(T *arg0, s32 *arg1, f32 *arg2)
{
    S *temp;

    temp = arg0->unk_28.unk_24 != 0 || arg0->unk_28.unk_20 != 0
        ? &arg0->unk_28 : NULL;
    *arg1 = 0;
    *(u32 *)arg2 = 0;
    if (temp != NULL) {
        *arg1 = temp->unk_34;
        *arg2 = arg0->unk_78;
    }
}
