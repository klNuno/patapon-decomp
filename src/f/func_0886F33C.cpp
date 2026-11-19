#include "common.h"

extern "C" {

struct T {
    u8 unk_00;
    u8 pad_01[7];
    s32 unk_08;
    u8 pad_0C[0x44];

    virtual void unk_v08();
    virtual void unk_v0C();
    virtual void unk_v10();
    virtual void unk_v14();
    virtual void unk_v18();
    virtual void unk_v1C();
    virtual void unk_v20();
    virtual void unk_v24();
    virtual void unk_v28();
    virtual void unk_v2C();
};

void func_0886F33C(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_08 = arg1;
    if (arg2 == 1) {
        arg0->unk_00 = 1;
    } else if (arg2 == 0) {
        arg0->unk_v2C();
    } else if (arg2 == 2) {
        arg0->unk_v2C();
        arg0->unk_00 = 1;
    }
}

}
