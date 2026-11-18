#include "common.h"

extern "C" {

struct T {
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual f32 unk_24(s32);
};

struct U {
    u8 pad_00[0x40];
    T *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
};

void func_088663BC(U *arg0, f32 arg1) {
    if (arg0->unk_40 != NULL) {
        arg0->unk_40->unk_20();
        arg0->unk_5C = arg0->unk_40->unk_24(arg0->unk_4C);
        if (arg1 <= arg0->unk_5C) {
            arg0->unk_5C = arg1;
            if (arg1 > 0.0f) {
                arg0->unk_5C = arg1 - 1.0f;
            }
        }
        if (arg0->unk_54 > arg0->unk_5C) {
            arg0->unk_5C = arg0->unk_54;
        }
    }
}

}
