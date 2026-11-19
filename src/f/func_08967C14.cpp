#include "common.h"

extern "C" {

extern s32 func_08962C50(s32);

class A {
    u8 pad_00[8];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
};

struct T {
    u8 pad_00[0x8DCC];
    A *unk_8DCC;
};

void func_08967C14(T *arg0) {
    func_08962C50((s32)arg0);
    arg0->unk_8DCC->unk_1C();
}

}
