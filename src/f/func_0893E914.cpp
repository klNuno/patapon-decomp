#include "common.h"

extern "C" {
void func_0880416C(void *);
void func_089757B8(void *, s32);
extern u8 D_08A47364[];

class S {
    u8 pad_00[0x10];
public:
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

void *func_0893E914(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x10) = D_08A47364;
        arg0->unk_34();
        func_089757B8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
