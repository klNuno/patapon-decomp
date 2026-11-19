#include "common.h"

extern "C" {
class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct T {
    u8 pad_00[0x28];
    S **unk_28;
    s32 unk_2C;
};

void func_08924550(T *arg0)
{
    S **cur;
    S ***p;
    s32 *n;

    cur = arg0->unk_28;
    p = &arg0->unk_28;
    if ((u32)cur != (u32)(cur + arg0->unk_2C)) {
        n = &arg0->unk_2C;
        do {
            (*cur)->unk_18();
            ++cur;
        } while (cur != *p + *n);
    }
}
}
