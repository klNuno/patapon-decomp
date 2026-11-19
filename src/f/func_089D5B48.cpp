#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
};

class U : public T {
public:
    u8 pad_54[0x1514 - 0x54];
    u8 unk_1514[1];
};

typedef struct S_089D5FD8 S_089D5FD8;
s32 func_0886E580(U *, s32);
s32 func_089D5FD8(S_089D5FD8 *arg0, u32 arg1);

s32 func_089D5B48(U *arg0, s32 arg1) {
    switch (func_0886E580(arg0, arg1)) {
    case 0x10000:
        break;
    case 0x10001:
        return 0x10001;
    case 0x10002:
        return 0x10002;
    }
    if ((u8)arg0->unk_10() == 0) {
        return 0x10000;
    }
    return func_089D5FD8((S_089D5FD8 *)arg0->unk_1514, arg1);
}

}
