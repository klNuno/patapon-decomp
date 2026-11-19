#include "common.h"

extern "C" {

struct Unk {
    u8 pad_00[0x14C8];
    s32 unk_14C8;
};

struct Unk1 {
    Unk1 *unk_00;
    Unk1 *unk_04;
    Unk **unk_08;

    s32 unk_0C(Unk1 *arg0) {
        s32 temp = 0;
        if (unk_08 == arg0->unk_08 && unk_04 == arg0->unk_04) {
            temp = 1;
        }
        return temp;
    }

    s32 unk_10(Unk1 *arg0) {
        s32 temp = 0;
        if (unk_0C(arg0) && unk_00 == arg0->unk_00) {
            temp = 1;
        }
        return temp;
    }

    bool unk_14(Unk1 *arg0) { return !(bool)unk_10(arg0); }
};

struct Unk2 {
    u8 pad_00[0xCBC];
    Unk1 unk_CBC;

    Unk1 *unk_00() { return &unk_CBC; }
};

void func_08894364(Unk2 *, f32);

Unk *func_08894FBC(Unk2 *arg0, s32 arg1, s32 arg2)
{
    struct { Unk1 *unk_00; } p;
    Unk *temp;

    if (arg1 < 0) {
        return NULL;
    }
    if (arg2 != 0) {
        func_08894364(arg0, 0.0f);
    }
    for (p.unk_00 = arg0->unk_CBC.unk_04; p.unk_00->unk_14(arg0->unk_00()); ) {
        temp = *(*(Unk **volatile *)&p.unk_00->unk_08);
        if (arg1 == temp->unk_14C8) {
            return temp;
        }
        if (p.unk_00 != NULL) {
            p.unk_00 = p.unk_00->unk_04;
        }
    }
    return NULL;
}

}
