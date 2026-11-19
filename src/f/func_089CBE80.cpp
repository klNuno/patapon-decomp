#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
};

typedef struct {
    u8 pad_00[0x1520];
    u8 unk_1520[1];
} S_088CE840;

s32 func_0886E580(S_088CE840 *, s32);
s32 func_089CC1D0(void *, s32);

s32 func_089CBE80(S_088CE840 *arg0, s32 arg1) {
    switch (func_0886E580(arg0, arg1)) {
    case 0x10000:
        break;
    case 0x10001:
        return 0x10001;
    case 0x10002:
        return 0x10002;
    }
    if ((u8)((V *)arg0)->unk_10() == 0) {
        return 0x10000;
    }
    return func_089CC1D0(arg0->unk_1520, arg1);
}

}
