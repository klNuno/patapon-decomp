#include "common.h"

extern "C" {
struct U {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};

struct T {
    u8 pad_00[0x14];
    U **unk_14;
    u32 unk_18;
};

void func_088A3C34(T *arg0)
{
    u32 count = arg0->unk_18;
    U **temp = arg0->unk_14;
    U **volatile *ptr = &arg0->unk_14;

    if ((u32)temp != (u32)(temp + count)) {
        volatile u32 *size = &arg0->unk_18;
        U **base;
        do {
            (*temp)->unk_20();
            temp++;
            count = *size << 2;
            base = *ptr;
        } while (temp != (U **)((u32)base + count));
    }
}
}
