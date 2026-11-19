#include "common.h"

extern "C" {

class T {
    u8 pad_00[8];

public:
    virtual void unk_08(s16);
};

class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

void func_0889A2C0(T *arg0, S *arg1) {
    if (arg0 != NULL) {
        arg0->unk_08(-1);
        arg1->unk_10(arg0);
    }
}

}
