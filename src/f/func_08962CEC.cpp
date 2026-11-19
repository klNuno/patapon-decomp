#include "common.h"
extern "C" {
class T0 {
    u8 pad_00[8];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

struct T1 {
    u8 pad_00[0x34];
    T0 *unk_34;
};

void func_08962CEC(T1 *arg0) {
    T0 *temp = arg0->unk_34;
    if (temp != NULL) {
        temp->unk_10();
    }
}
}
