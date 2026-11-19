#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[4];
    void *unk_04;
    s32 unk_08;

    virtual void unk_08_v();
    virtual void unk_0C();
};

s32 func_08914A74(void *);
s32 func_08914A7C(void *);

void func_08913D9C(S *arg0) {
    if (func_08914A74(arg0->unk_04) == 0) {
        arg0->unk_0C();
        arg0->unk_08 = func_08914A7C(arg0->unk_04);
    }
}
}
