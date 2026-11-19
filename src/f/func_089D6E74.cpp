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
    u8 pad_00[0x1514];
    u8 unk_1514[1];
} S_088CE840;

s32 func_0886E580(S_088CE840 *, s32);
typedef struct S S;
s32 func_089D6824(S *arg0, s32 arg1);

s32 func_089D6E74(S_088CE840 *arg0, s32 arg1) {
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
    return func_089D6824((S *)arg0->unk_1514, arg1);
}

}
