#include "common.h"

extern "C" {
class T {
    u8 pad_00[0x62C];
public:
    virtual void unk_08(s32);
};
class U {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_089297A8(T *arg0, U *arg1) {
    if (arg0 != NULL) {
        arg0->unk_08(-1);
        arg1->unk_10(arg0);
    }
}
}
