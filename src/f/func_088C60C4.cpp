#include "common.h"

extern "C" {

void func_089A88AC(void *);
void func_088CE0C0(void *);
void func_08882394(void *);

class Unk00 {
public:
    u8 pad_00[0x8100];
    virtual void unk_08();
    virtual void unk_0C();
};

struct Unk01 {
    u8 pad_00[0x1AF0];
    Unk00 unk_1AF0;
    u8 pad_9BF4[0x288AC];
    u8 unk_324A0[0x30];
    u8 unk_324D0[0x4540];
    u8 unk_36A10;
};

void func_088C60C4(Unk01 *arg0) {
    func_089A88AC(&arg0->unk_36A10);
    func_088CE0C0(arg0->unk_324A0);
    arg0->unk_1AF0.unk_0C();
    func_08882394(arg0->unk_324D0);
}

}
