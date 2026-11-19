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
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
};

struct T : S {
    u8 pad_54[0x1680];
    u8 unk_16D4;
    u8 pad_16D5[3];
    void *unk_16D8;
    s32 unk_16DC;
};

struct A {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x24C];
    u8 unk_264[1];
};

struct B {
    u8 pad_00[0x14A0];
    A *unk_14A0;
};

void func_08860820(void *, s32);
void func_08943060(T *, s32);
extern void *D_08A8812C[];
extern B *D_08AD1F14[];

void func_08943350(T *arg0)
{
    void *p;
    B *q;
    A *temp;
    s32 n;

    arg0->unk_60();
    p = D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL;
    func_08860820(p, 0);
    q = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp = q->unk_14A0;
    arg0->unk_16D8 = temp->unk_264;
    n = temp->unk_14;
    arg0->unk_16DC = n;
    func_08943060(arg0, n);
    arg0->unk_16D4 = 0;
}
}
