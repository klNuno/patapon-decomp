#include "common.h"

extern "C" {

struct V {
    virtual void unk_08(f32);
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
};

struct T : V {
    u8 pad_04[0x10];
    f32 unk_14;
    f32 unk_18;
    void unk_04(f32 arg0) {
        if (unk_18 == arg0) {
            return;
        }
        unk_18 = arg0;
        unk_08(unk_14 * *(f32 *)((u8 *)this + 0x18));
    }
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_0897A064(s32 *, s32, s32);
T *func_0897BE0C(s32, s32, s32, s32);
void func_08920CFC(T *, s32, f32, f32);

void func_08918478(void) {
    s32 temp;
    T *temp1;

    func_0897A064(&temp, func_089B53D8(func_088586E8()) + 0xBB8, 0x1E);
    temp1 = func_0897BE0C(func_089B53D8(func_088586E8()) + 0x14, 5, temp, 3);
    temp1->unk_04(1.0f);
    func_08920CFC(temp1, 0, 1.0f, 1.0f);
    temp1->unk_3C(1);
}

}
