#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual u8 unk_1C();
};

void func_08912698(void *);
void func_089B34E8(T *);

void func_089AF048(T *arg0) {
    if (arg0->unk_1C() != 0) {
        func_08912698((u8 *)arg0 + 0x60);
        func_089B34E8(arg0);
    }
}
}
