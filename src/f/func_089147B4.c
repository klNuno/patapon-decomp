#include "common.h"

s32 *func_08868E8C(void *, s32, s32);
extern s32 D_08A00428[];
extern void *D_08AD1E28[];

typedef struct {
    u8 pad_00[0x5A0];
    s32 unk_5A0;
    s32 unk_5A4;
    s32 unk_5A8;
} UnkObject;

void func_089147B4(UnkObject *arg0)
{
    s32 *temp = func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 2, D_08A00428[0]);
    s32 value = temp[1];
    arg0->unk_5A0 = temp[0];
    arg0->unk_5A4 = value;
    arg0->unk_5A8 = value;
}
