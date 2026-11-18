#include "common.h"

extern "C" {

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual u32 unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual u32 unk_24();
};

f32 func_0882791C(T *arg0) {
    u32 temp;
    f32 temp2;

    if (arg0->unk_14() == 0) {
        return 0.0f;
    }
    temp = arg0->unk_14();
    temp2 = (f32)arg0->unk_24();
    return 100.0f * (1.0f - ((f32)temp / temp2));
}

}
