#include "common.h"

extern "C" {

class A {
    u8 pad_00[0x1C0];
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32, s32, s32);
};

struct U {
    u8 pad_00[0x20];
    A unk_20;
};

struct T {
    u8 pad_00[0x120];
    U *unk_120;
};

void func_0896164C(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    U *temp = arg0->unk_120;
    if (temp != NULL) {
        temp->unk_20.unk_0C(7, arg1, arg2, arg3);
    }
}

}
