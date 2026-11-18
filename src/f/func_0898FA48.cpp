#include "common.h"

extern "C" {

struct Unk2 {
    u8 pad_00[0x44];
    f32 unk_44;
    u8 pad_48[0x9C];

    virtual void func_00();
    virtual void func_04();
    virtual void func_08();
    virtual void func_0C(void *);
};

struct Unk1 {
    Unk1 *unk_00;
    u8 pad_04[4];
    Unk2 *unk_08;
};

struct Unk0 {
    u8 pad_00[0x348];
    Unk1 unk_348;
};

struct Unk3 {
    Unk1 *unk_00;

    s32 func_00(const Unk3 &arg0) {
        return unk_00 == arg0.unk_00;
    }
    bool func_04(const Unk3 &arg0) {
        return !(bool)func_00(arg0);
    }
};

f32 func_0898E950(Unk2 *);

void func_0898FA48(Unk0 *arg0, void *arg1) {
    Unk3 temp;
    Unk3 temp3;
    f32 temp2 = 23.0f;
    temp.unk_00 = arg0->unk_348.unk_00;
    temp3.unk_00 = &arg0->unk_348;

    if (temp.func_04(temp3)) {
        do {
            Unk2 *temp4 = temp.unk_00->unk_08;
            temp4->unk_44 = temp2;
            f32 temp5 = 23.0f - func_0898E950(temp4);
            if (temp5 < 0.0f) {
                temp2 += func_0898E950(temp4);
            } else {
                temp2 += 23.0f - temp5;
            }
            temp4->func_0C(arg1);
            temp.unk_00 = temp.unk_00->unk_00;
        } while (temp.func_04(temp3));
    }
}

}
