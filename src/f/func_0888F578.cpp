#include "common.h"

extern "C" {

class A {
public:
    virtual s32 unk_08();
    virtual s32 unk_0C();
};

struct T {
    u8 pad_00[0x3B0];
    A unk_3B0;
    u8 pad_3B4[0x2DC];
    u8 unk_690;
};

s32 func_0888F578(T *arg0) {
    if (arg0->unk_690 == 0) {
        return 0;
    }
    return arg0->unk_3B0.unk_0C() == 0;
}

}
