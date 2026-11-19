#include "common.h"

extern "C" {
class S {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48();
};

struct T : S {
    u8 pad_04[0x60];
    s32 unk_64;
    s32 unk_68;
};

s32 func_088586E8(void);
u8 *func_089B53D8(s32);
extern void func_0887882C(void *, s32, s32);

void func_08924A5C(T *arg0, s32 arg1) {
    arg0->unk_68 = arg1;
    if (arg0->unk_48() != 0) {
        u8 *temp = func_089B53D8(func_088586E8());
        func_0887882C(temp, arg0->unk_64, arg1);
    }
}
}
