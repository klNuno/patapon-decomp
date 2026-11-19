#include "common.h"

extern "C" {
class UnkObject {
public:
    u8 pad_00[0x28];
    virtual void unk_08(s32);
};

class UnkOther {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(UnkObject *);
};

void func_088E1204(UnkObject *arg0, UnkOther *arg1)
{
    if (arg0 != NULL) {
        arg0->unk_08(-1);
        arg1->unk_10(arg0);
    }
}
}
