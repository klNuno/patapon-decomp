#include "common.h"
extern "C" {
struct T1;

class T0 {
    u8 pad_00[0x80];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T1 *);
};

struct T1 {
    u8 pad_00[0x38];
    void *unk_38;
    u8 pad_3C[4];
    T0 unk_40;
};

void func_089A89C8(T1 *arg0) {
    if (arg0->unk_38 != NULL) {
        arg0->unk_40.unk_10(arg0);
    }
}
}
