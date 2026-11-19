#include "common.h"

extern "C" {
struct U {
    U *unk_00;
    u8 pad_04[4];
    void *unk_08;
};

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct V : T {
    u8 pad_04[0xA10];
    U unk_A14;
};

struct I {
    U *unk_00;
};

static inline s32 ne(I arg0, I arg1)
{
    return (arg1.unk_00 == arg0.unk_00) ^ 1;
}

void func_0886E37C(V *arg0)
{
    I end;
    I temp;
    end.unk_00 = &arg0->unk_A14;
    temp.unk_00 = arg0->unk_A14.unk_00;
    if (ne(end, temp)) {
        do {
            void *ptr = temp.unk_00->unk_08;
            temp.unk_00 = temp.unk_00->unk_00;
            arg0->unk_10(ptr);
        } while (ne(end, temp));
    }
}
}
