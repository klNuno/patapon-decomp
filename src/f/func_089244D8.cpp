#include "common.h"

extern "C" {
struct U {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
};

struct T {
    u8 pad_00[0x28];
    U **unk_28;
    u32 unk_2C;
};

void func_089244D8(T *arg0)
{
    u32 count = arg0->unk_2C;
    U **temp = arg0->unk_28;
    U **volatile *ptr = &arg0->unk_28;

    if ((u32)temp != (u32)(temp + count)) {
        volatile u32 *size = &arg0->unk_2C;
        U **base;
        do {
            (*temp)->unk_1C();
            temp++;
            count = *size << 2;
            base = *ptr;
        } while (temp != (U **)((u32)base + count));
    }
}
}
