#include "common.h"

extern "C" {
class UnkObject {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual s32 unk_24();
};

void func_08981FEC(UnkObject *);

s32 func_08981F34(UnkObject *arg0, s32 arg1)
{
    if (arg1 != 0) {
        return -1;
    }
    if (arg0->unk_24() == 2) {
        func_08981FEC(arg0);
        return 0;
    }
    return -1;
}
}
