#include "common.h"

extern "C" {

extern void func_089ADE68(void *);

class A {
    u8 pad_00[0x58];
public:
    virtual void unk_08();
    virtual void unk_0C();
};

struct T {
    u8 pad_00[0x2780];
    A unk_2780;
    u8 pad_27DC[0x11E4];
    A unk_39C0;
};

void func_0897EC14(T *arg0) {
    arg0->unk_2780.unk_0C();
    arg0->unk_39C0.unk_0C();
    func_089ADE68(arg0);
}

}
