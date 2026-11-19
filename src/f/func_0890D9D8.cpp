#include "common.h"

extern "C" {
class S {
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
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40(s32 *, s32);
};

typedef struct {
    u8 pad_00[0x7D4D0];
    S unk_7D4D0;
    u8 pad_7D4D4[0xD8C];
    s32 unk_7E260;
} T;

extern void func_0890DA3C(T *);

void func_0890D9D8(T *arg0, s32 arg1, s32 arg2) {
    s32 temp = arg1;
    arg0->unk_7D4D0.unk_40(&temp, 0);
    arg0->unk_7E260 = arg2;
    func_0890DA3C(arg0);
}
}
