#include "common.h"

extern "C" {

class E0893C7A4 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(f32);
};

typedef E0893C7A4 S_088F04CC;

struct T0893C7A4 {
    u8 pad_00[4];
    E0893C7A4 *unk_04;
    u8 pad_08[0x28];
    u32 unk_30;
    u32 unk_34;
};

void func_088D45F4(S_088F04CC *);

void func_0893C7A4(T0893C7A4 *arg0, s32 arg1) {
    E0893C7A4 *temp = arg0->unk_04;

    if (temp != NULL) {
        if (arg1 != 0) {
            func_088D45F4(temp);
            arg0->unk_30 = 0;
            arg0->unk_34 = 0;
        }
        temp->unk_18(0.1f);
    }
}

}
