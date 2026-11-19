#include "common.h"

extern "C" {

s32 func_0880ADA4(s32 *, s32 *);
s32 func_0880ADB8(void);
s32 func_0880ADC0(u8 *);

class Unk00 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual s32 unk_28();
};

struct Unk01 : Unk00 {
    u8 pad_04[4];
    u8 *unk_08;
};

void func_088085A4(Unk01 *arg0) {
    s32 temp;
    s32 temp2;

    temp2 = func_0880ADB8();
    temp = arg0->unk_28();
    if (func_0880ADA4(&temp, &temp2) != 0) {
        func_0880ADB8();
    } else {
        func_0880ADC0(arg0->unk_08++);
    }
}

}
