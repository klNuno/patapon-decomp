#include "common.h"

extern "C" {

class T2 {
    u8 pad_00[0x16C];

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
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70(s32, u8 *);
};

typedef struct {
    u8 pad_00[0x41];
    u8 unk_41;
    u8 pad_42[10];
    T2 *unk_4C;
} S;

void func_0892C740(T2 *, s32, s32);

void func_0892AE98(S *arg0, u8 *arg1) {
    T2 *temp = arg0->unk_4C;
    arg0->unk_41 = 0;
    func_0892C740(temp, (s32)arg0, (s32)arg1);
    if (arg0->unk_41 == 0) {
        temp->unk_70(0, arg1 + 0x20);
    }
}

}
