#include "common.h"

extern "C" {

class Unk1 {
public:
    u8 pad_00[0x80];

    virtual void func_08(s32);
    virtual void func_0C(s32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Unk2;

typedef struct {
    u8 pad_00[0x30];
    Unk1 unk_30;
    u8 pad_B4[0x4C];
    Unk2 unk_100;
    f32 unk_108;
    f32 unk_10C;
    Unk1 unk_110;
} Unk;

void func_08920700(Unk *arg0, s32 arg1, const Unk2 *arg2)
{
    f32 temp;
    f32 temp2;

    temp2 = arg2->unk_04;
    temp = arg2->unk_00;
    arg0->unk_100.unk_00 = temp;
    arg0->unk_100.unk_04 = temp2;
    arg0->unk_108 = 0.0f;
    arg0->unk_10C = 1.0f;
    arg0->unk_30.func_0C(arg1);
    arg0->unk_110.func_0C(arg1);
}

}
