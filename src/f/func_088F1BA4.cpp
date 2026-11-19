#include "common.h"

extern "C" {

class Unk {
public:
    u8 pad_00[0x804];
    u8 *unk_804;
    s32 unk_808;
    u8 pad_80C[4];
    u8 unk_810[0x80];
    s32 unk_890;
    s32 unk_894;
    u8 pad_898[0x80];
    u8 unk_918;
    u8 pad_919[3];

    virtual void func_08();
    virtual void func_0C();
};

struct Unk1 {};

extern u8 D_08A4664C[];
void func_088AEF6C(void *, s32);

static inline void func_1(void *arg0, const Unk1 &)
{
    func_088AEF6C(arg0, 1);
}

Unk *func_088F1BA4(Unk *arg0)
{
    *(void **)&arg0->pad_919[3] = D_08A4664C;
    arg0->unk_804 = (u8 *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_808 = 0;
    func_1(arg0->unk_810, Unk1());
    arg0->unk_890 = 0;
    arg0->unk_894 = 0;
    arg0->unk_918 = 0;
    arg0->func_0C();
    return arg0;
}

}
