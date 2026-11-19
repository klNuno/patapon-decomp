#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x58];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

class U : public T {
public:
    u8 pad_5C[4];
    u8 unk_60;
};

void func_08912698(void *);
void func_089B34E8(void *);

void func_089B26A8(U *arg0)
{
    if ((u8)arg0->unk_1C() != 0) {
        func_08912698(&arg0->unk_60);
        func_089B34E8(arg0);
    }
}
}
