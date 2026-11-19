#include "common.h"

extern "C" {

void func_0880416C(void *);
extern u8 D_08A47F04[];

struct T {
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
};

T *func_089757B8(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u8 **)&arg0->pad_00[0x10] = D_08A47F04;
        arg0->unk_34();
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
