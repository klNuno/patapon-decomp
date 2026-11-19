#include "common.h"

extern "C" {
s32 func_08976100(s32, char *);
extern char D_08A09FE0[];
class T;
void func_089D3E9C(T *);

class T {
    u8 pad_00[8];

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
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70();
public:
    virtual void unk_74(s32);
};

void func_089D3E50(T *arg0) {
    arg0->unk_74(func_08976100(0, D_08A09FE0));
    func_089D3E9C(arg0);
}
}
