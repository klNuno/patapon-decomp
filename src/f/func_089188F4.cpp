#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual u8 unk_10();
};
class U : public T {
public:
    u8 pad_54[0x1520 - 0x54];
    u8 unk_1520[1];
};

s32 func_088586E8(void);
s32 func_0886E580(U *, s32);
s32 func_08917434(void *, s32);
void func_0897C3F4(f32, void *, s32);
u8 *func_089B53D8(s32);

s32 func_089188F4(U *arg0, s32 arg1) {
    s32 temp = func_0886E580(arg0, arg1);
    switch (temp) {
    case 0x10000:
        break;
    case 0x10001:
        return 0x10001;
    case 0x10002:
        return 0x10002;
    }
    if (arg0->unk_10() == 0) {
        return 0x10000;
    }
    temp = func_08917434(arg0->unk_1520, arg1);
    if (temp != 0x10000) {
        func_0897C3F4(0.8f, func_089B53D8(func_088586E8()) + 0x14, 5);
    }
    return temp;
}

}
