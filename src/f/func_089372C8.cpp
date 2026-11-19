#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x13F4];
    s32 unk_13F4;
} UnkMember;

typedef struct {
    u8 pad_00[0x14];
    UnkMember *unk_14;
} UnkObject;

void func_089372C8(UnkObject *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_14->unk_13F4;
    func_08852F00(arg1, 0);
}
}
