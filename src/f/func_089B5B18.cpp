#include "common.h"

extern "C" {

class B089B5B18 {
public:
    u8 pad_00[0x50];
    virtual void func_08();
    virtual void func_0C();
    virtual s32 func_10();
};

class C089B5B18 {
public:
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28(s32);
};

typedef struct {
    u8 pad_00[0x1520];
    u8 unk_1520[0x11494];
    C089B5B18 unk_129B4;
    u8 pad_129B8[0x120];
    u8 unk_12AD8[4];
} T089B5B18;

s32 func_0886E580(T089B5B18 *, s32);
void func_088A4040(void *, s32);
s32 func_089B6A40(void *, s32);

s32 func_089B5B18(T089B5B18 *arg0, s32 arg1) {
    switch (func_0886E580(arg0, arg1)) {
    case 0x10000:
        break;
    case 0x10001:
        return 0x10001;
    case 0x10002:
        return 0x10002;
    }
    if (!(u8)((B089B5B18 *)arg0)->func_10()) {
        return 0x10000;
    }
    arg0->unk_129B4.func_28(arg1);
    func_088A4040(arg0->unk_12AD8, arg1);
    return func_089B6A40(arg0->unk_1520, arg1);
}

}
