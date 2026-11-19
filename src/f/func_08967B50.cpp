#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
};

typedef struct {
    u8 pad_00[0x8DCC];
    S *unk_8DCC;
} T;

extern s32 func_08962C50(s32);

void func_08967B50(T *arg0) {
    func_08962C50((s32)arg0);
    arg0->unk_8DCC->unk_1C();
}
}
