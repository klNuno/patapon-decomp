#include "common.h"

extern "C" {

class T {
    u8 pad_00[0x58];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

struct T1;
void func_089B1D10(T1 *arg0, s32 arg1, s32 arg2);

void func_089B3170(T *arg0, s32 arg1, s32 arg2) {
    func_089B1D10((T1 *)arg0, arg1, arg2);
    if ((u8)arg0->unk_1C() != 0) {
        return;
    }
}

}
