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
    virtual void unk_38(f32);
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
    void *unk_AA8;
    u8 pad_AAC[0x1F30 - 0xAAC];
    s32 unk_1F30;
    u8 pad_1F34[0x220A8 - 0x1F34];
    s32 unk_220A8;
    s32 unk_220AC;
    u8 pad_220B0[8];
    s32 unk_220B8;
    u8 pad_220BC[4];
    s32 unk_220C0;
};

extern u8 D_08A04BC8[];
It func_0897C818(void *, s32);
void func_0886D484(void *);
void func_0897C3F4(f32, void *, s32);
void func_088A4138(f32, void *, s32);

struct Unk4 {
    Unk1 *unk_00;
    Unk4(const It &arg0) : unk_00(arg0.unk_00) {}
};

inline Unk1 *unk_00(Unk2 *arg0) { return &arg0->unk_9C; }
inline bool unk_04(Unk1 *arg0, Unk4 arg1) { return arg1.unk_00 != arg0; }

void func_089570F8(Unk3 *arg0, s32 arg1, s32 arg2)
{
    func_0886D484(D_08A04BC8);
    It it = func_0897C818(arg0->unk_AA4, 6);
    if (unk_04(unk_00(arg0->unk_AA4), Unk4(it))) {
        it.unk_00->unk_10->unk_38(1.0f);
    }
    it = func_0897C818(arg0->unk_AA4, 7);
    if (unk_04(unk_00(arg0->unk_AA4), Unk4(it))) {
        it.unk_00->unk_10->unk_38(1.0f);
    }
    arg0->unk_1F30 = 0;
    if (arg2 != 0) {
        func_0897C3F4(0.0f, arg0->unk_AA4, 0);
        func_088A4138(0.0f, arg0->unk_AA8, 0);
        arg0->unk_220A8 = 4;
        arg0->unk_220AC = 0;
        arg0->unk_220B8 = arg1;
        arg0->unk_220C0 = 3;
        arg0->unk_220A8 = 0;
        arg0->unk_220AC = 0;
    }
}

}
