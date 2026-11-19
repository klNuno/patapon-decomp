#include "common.h"

extern "C" {
class T {
    u8 pad_00[0x24];
    virtual void unk_08();

public:
    virtual void unk_0C(s32);
};

class U {
    virtual void unk_08();
    virtual void unk_0C();

public:
    virtual void unk_10(T *);
};

void func_088D3204(T *arg0, U *arg1) {
    if (arg0 != NULL) {
        arg0->unk_0C(-1);
        arg1->unk_10(arg0);
    }
}
}
