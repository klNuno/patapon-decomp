#include "common.h"

extern "C" {
class S {
public:
    u8 unk_00;
    u8 pad_01[0xB];
    virtual void unk_08();
};

u8 func_08913D6C(S *arg0)
{
    arg0->unk_08();
    return arg0->unk_00;
}
}
