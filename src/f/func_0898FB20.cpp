#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0xE4];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

struct N {
    u8 pad_00[4];
    N *unk_04;
    S *unk_08;
};

struct T {
    u8 pad_00[0x34C];
    N *unk_34C;
    u8 pad_350[4];
    s32 unk_354;
};

void func_0898FB20(T *arg0)
{
    N *volatile cur;
    struct {
        N *volatile unk_00;
        u8 pad_04[4];
    } temp;
    N *p = arg0->unk_34C;
    s32 n = arg0->unk_354;
    s32 i = 0;
    temp.unk_00 = p;
    *(volatile f32 *)&cur = *(volatile f32 *)&temp.unk_00;
    if (n > 0) {
        do {
            cur->unk_08->unk_18();
            ++i;
            cur = cur->unk_04;
        } while (i < n);
    }
}
}
