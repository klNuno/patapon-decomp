#include "common.h"

extern "C" {

class E089AE438 {
    u8 pad_00[0x2760];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct T089AE438 {
    u8 pad_00[0x10];
    E089AE438 unk_10;
    u8 pad_2774[0x8580 - 0x2774];
    E089AE438 unk_8580;
    u8 pad_ACE4[0xF140 - 0xACE4];
    E089AE438 unk_F140;
};

void func_089AE438(T089AE438 *arg0) {
    arg0->unk_10.unk_18();
    arg0->unk_8580.unk_18();
    arg0->unk_F140.unk_18();
}

}
