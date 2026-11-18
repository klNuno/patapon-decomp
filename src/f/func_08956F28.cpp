#include "common.h"

extern "C" {

class Unk {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44(s32);
};

struct Unk1 {
    u8 pad_00[0x10];
    Unk *unk_10;
};

struct It {
    Unk1 *unk_00;
    It(const It &arg0) : unk_00(arg0.unk_00) {}
};

struct Unk2 {
    u8 pad_00[0x9C];
    Unk1 unk_9C;
};

struct Unk3 {
    u8 pad_00[0xAA4];
    Unk2 *unk_AA4;
    u8 pad_AA8[0x3914];
    s8 unk_43BC;
};

It func_0897C818(void *, s32);

struct Unk4 {
    Unk1 *unk_00;
    Unk4(const It &arg0) : unk_00(arg0.unk_00) {}
};

inline Unk1 *unk_00(Unk2 *arg0) { return &arg0->unk_9C; }
inline bool unk_04(Unk1 *arg0, Unk4 arg1) { return arg1.unk_00 != arg0; }

void func_08956F28(Unk3 *arg0, s32 arg1)
{
    arg0->unk_43BC = arg1;
    It it = func_0897C818(arg0->unk_AA4, 1);
    if (unk_04(unk_00(arg0->unk_AA4), Unk4(it))) {
        s32 temp;
        switch (arg1) {
        case 0:
            temp = 0;
            break;
        default:
            temp = -1;
            break;
        }
        it.unk_00->unk_10->unk_44(temp);
    }
    it = func_0897C818(arg0->unk_AA4, 2);
    if (unk_04(unk_00(arg0->unk_AA4), Unk4(it))) {
        s32 temp;
        switch (arg1) {
        case 0:
            temp = 0;
            break;
        default:
            temp = -1;
            break;
        }
        it.unk_00->unk_10->unk_44(temp);
    }
}

}
