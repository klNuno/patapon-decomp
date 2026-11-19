#include "common.h"

extern "C" {
class S {
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
};

struct T {
    u8 pad_00[0x14];
    S **unk_14;
    s32 unk_18;
};

void func_088A3CB4(T *arg0)
{
    S **cur;
    S ***p;
    s32 *n;

    cur = arg0->unk_14;
    p = &arg0->unk_14;
    if ((u32)cur != (u32)(cur + arg0->unk_18)) {
        n = &arg0->unk_18;
        do {
            (*cur)->unk_30();
            ++cur;
        } while (cur != *p + *n);
    }
}
}
