#include "common.h"

extern "C" {

class U {
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
    virtual void unk_3C(s32);
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48();
};

struct V : U {
    u8 pad_04[0x40];
    U **unk_44;
    u32 unk_48;
    u8 pad_4C[0x18];
    s32 unk_64;
    u8 pad_68[4];
    s32 unk_6C;
    u8 pad_70[9];
    u8 unk_79;
    u8 unk_7A;
};

s32 func_088586E8(void);
s32 func_089B53CC(s32);
void func_0887B9F8(s32, s32, s32);
void func_0883B9C8(s32, f32);

void func_089247F8(V *arg0, f32 arg1) {
    if (((U *)arg0)->unk_48() != 0) {
        func_0887B9F8(func_089B53CC(func_088586E8()), arg0->unk_64, 0);
        func_0883B9C8(arg0->unk_64, arg1);
    }
    arg0->unk_64 = -1;
    arg0->unk_6C = -1;
    arg0->unk_79 = 1;
    arg0->unk_7A = 0;
    arg0->unk_3C(0);

    U **temp = arg0->unk_44;
    U **&temp2 = arg0->unk_44;
    if ((u32)temp != (u32)(temp + arg0->unk_48)) {
        u32 &temp3 = arg0->unk_48;
        do {
            (*temp)->unk_20();
            temp++;
        } while (temp != temp2 + temp3);
    }
}

}
