#include "common.h"

u32 func_0880ACA8(s32);
u8 func_0880ACF4(s32);
s32 func_0880AD40(s32);
s32 func_0880D080(s32);

typedef struct {
    u8 pad_00[0x3C];
    s32 unk_3C;
    u32 unk_40;
    s32 unk_44;
    u8 pad_48[1];
    u8 unk_49;
} UnkObject;

void func_0880BF44(UnkObject *arg0, s32 arg1)
{
    s32 temp = func_0880AD40(arg1);
    arg0->unk_44 = temp;
    arg0->unk_49 = func_0880ACF4(temp);
    arg0->unk_40 = func_0880ACA8(arg0->unk_44);
    arg0->unk_3C = func_0880D080(arg0->unk_44);
}
