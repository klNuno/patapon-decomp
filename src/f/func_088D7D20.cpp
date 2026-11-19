#include "common.h"

extern "C" {
class S_088CD874 {
public:
    u8 pad_00[0x4C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(s32);
};

struct T : S_088CD874 {
    u8 pad_50[0x2CA0];
    u8 unk_2CF0;
    u8 unk_2CF1;
};

void func_088CD948(S_088CD874 *);
void func_08858D14(s32 *);
void func_08858E88(s32 *, s32);

s32 func_088D7D20(T *arg0)
{
    s32 temp;

    if (arg0->unk_2CF0 != 0) {
        func_088CD948(arg0);
        arg0->unk_28(0);
        arg0->unk_2CF0 = 0;
    }
    if (arg0->unk_2CF1 != 0) {
        arg0->unk_2CF1 = 0;
        func_08858D14(&temp);
        func_08858E88(&temp, 1);
    }
    return 1;
}
}
