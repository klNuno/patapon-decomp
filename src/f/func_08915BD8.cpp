#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x50];
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
    virtual void unk_3C(s32);
};

class R {
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
    virtual void unk_3C(s32, s32, s32);
};

struct A {
    s32 unk_00;
    s32 unk_04;
};

struct T {
    u8 pad_00[0x1508];
    S *unk_1508;
    u8 pad_150C[0xF28];
    u8 unk_2434;
    u8 pad_2435[3];
    R unk_2438;
    u8 pad_243C[0x6C];
    A unk_24A8;
    u8 pad_24B0[0x14];
    s32 unk_24C4;
    s32 unk_24C8;
    u8 unk_24CC;
};

extern void func_0885DEC8(s32);

void func_08915BD8(T *arg0)
{
    volatile A *p;
    s32 a;
    s32 b;
    arg0->unk_2434 = 1;
    p = &arg0->unk_24A8;
    func_0885DEC8((s32)p);
    b = p->unk_04;
    a = p->unk_00;
    arg0->unk_2438.unk_3C(a, b, 0);
    arg0->unk_1508->unk_3C(1);
    arg0->unk_24C4 = 0;
    arg0->unk_24CC = 0;
    arg0->unk_24C8 = 0;
}
}
