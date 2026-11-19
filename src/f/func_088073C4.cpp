#include "common.h"

extern "C" {
class S {
    s32 unk_00;
public:
    virtual void unk_08(s32);
};

void func_088073C4(S *arg0)
{
    arg0->unk_08(-1);
}
}
