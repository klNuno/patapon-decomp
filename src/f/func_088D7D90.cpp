#include "common.h"
extern "C" {
class T0 {
    u8 pad_00[0x4C];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(void *);
};

s32 func_088D7D90(void *arg0, T0 *arg1, void *arg2) {
    arg1->unk_1C(arg2);
    return 1;
}
}
