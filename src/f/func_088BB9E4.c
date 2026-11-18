#include "common.h"

void func_08858024(s32);
extern s32 func_088581B0(s32);

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0xC];
} UnkLocal;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
} UnkObject;

s32 func_088BB9E4(UnkObject *arg0)
{
    UnkLocal temp;
    s32 temp2;
    s32 temp3;

    func_08858024(1);
    func_088581B0((s32)&temp);
    func_08858024(2);
    temp2 = (s32)-temp.unk_30 / 720;
    temp3 = arg0->unk_118 - 1;
    if (temp3 < temp2) {
        return temp3;
    }
    return temp2 < 0 ? 0 : temp2;
}
