#include "common.h"

extern "C" {

class E088A4E90 {
    u8 pad_00[8];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct T088A4E90 {
    u8 pad_00[0x540];
    E088A4E90 unk_540;
    u8 pad_54C[0x10F4 - 0x54C];
    u8 unk_10F4;
};

u8 func_088A6D10(T088A4E90 *, s32, s32);
void func_088A54FC(T088A4E90 *, void *);

void func_088A4E90(T088A4E90 *arg0, void *arg1) {
    if (arg0->unk_10F4 == 0) {
        arg0->unk_10F4 = func_088A6D10(arg0, 0, 1);
    }
    func_088A54FC(arg0, arg1);
    arg0->unk_540.unk_10(arg1);
}

}
