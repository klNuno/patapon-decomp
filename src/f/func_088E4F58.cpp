#include "common.h"

extern "C" {

class Unk1 {
public:
    u8 pad_00[0x28];

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
};

class Unk2 : public Unk1 {
public:
    u8 pad_2C[0x284];
    s32 unk_2B0;
};

void func_088E4F58(Unk2 *arg0, s32 arg1) {
    s32 temp = arg0->unk_2B0;
    if ((arg0->unk_2B0 = arg1) >= 0 && temp != arg1) {
        arg0->unk_34();
    }
}

}
