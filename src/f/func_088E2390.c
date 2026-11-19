#include "common.h"

typedef struct S_089237B4 S_089237B4;
S_089237B4 *func_089237B4(S_089237B4 *arg0);
void func_088CE4F4(void *, s32);
extern u8 D_08A46504[];

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    u8 unk_30;
    u8 unk_31;
    u8 unk_32;
    u8 pad_33[1];
    u8 unk_34[0xA4];
    s32 unk_D8;
} UnkObject;

UnkObject *func_088E2390(UnkObject *arg0)
{
    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A46504;
    arg0->unk_2C = 0;
    arg0->unk_30 = 1;
    arg0->unk_31 = 0;
    arg0->unk_32 = 0;
    func_089237B4((S_089237B4 *)arg0->unk_34);
    arg0->unk_D8 = 0;
    return arg0;
}
