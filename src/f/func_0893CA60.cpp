#include "common.h"

class V {
public:
    u8 pad_00[0x50];
    virtual void func_08();
    virtual void func_0C();
    virtual s32 func_10();
};

struct S_0893CDA4 {
    u8 pad_00[0x20];
};

struct T : V {
    u8 pad_54[0x1514 - 0x54];
    S_0893CDA4 unk_1514;
};

typedef T S_088CE840;

extern "C" {
s32 func_0886E580(S_088CE840 *, s32);
s32 func_0893CDA4(S_0893CDA4 *arg0, u32 arg1);

s32 func_0893CA60(T *arg0, s32 arg1) {
    s32 temp = func_0886E580(arg0, arg1);

    switch (temp) {
    case 0x10000:
        break;
    case 0x10001:
        return 0x10001;
    case 0x10002:
        return 0x10002;
    }
    if ((u8)arg0->func_10() == 0) {
        return 0x10000;
    }
    return func_0893CDA4(&arg0->unk_1514, arg1);
}
}
