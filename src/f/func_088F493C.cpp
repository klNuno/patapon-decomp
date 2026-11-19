#include "common.h"

extern "C" {

struct U {
    u8 pad_00[0x58];
    virtual void func_08();
    virtual void func_0C();
};

struct T {
    u8 pad_00[0x2770];
    U unk_2770;
    u8 pad_27CC[0x11C4];
    U unk_3990;
    u8 pad_39EC[0x6F4];
    U unk_40E0;
    u8 pad_413C[0x1E4];
    U unk_4320;
};

void func_089ADE68(void *);

void func_088F493C(T *arg0) {
    arg0->unk_2770.func_0C();
    arg0->unk_3990.func_0C();
    arg0->unk_40E0.func_0C();
    arg0->unk_4320.func_0C();
    func_089ADE68(arg0);
}
}
