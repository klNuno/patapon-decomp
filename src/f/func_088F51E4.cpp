#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x2760];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
};

struct T : S {
    u8 pad_2764[0x4ADC - 0x2764];
    s32 *unk_4ADC;
};

void func_088F5254(T *);

void func_088F51E4(T *arg0) {
    arg0->unk_28();
    func_088F5254(arg0);
    *arg0->unk_4ADC = 1;
}
}
