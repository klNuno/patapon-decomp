#include "common.h"

extern "C" {

class Elem_088A3A88 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32);
};

class Obj_088A3A88 {
public:
    u8 pad_00[0x14];
    Elem_088A3A88 **unk_14;
    s32 unk_18;
};

void func_088A3A88(Obj_088A3A88 *arg0, s32 arg1) {
    Elem_088A3A88 **temp;
    Elem_088A3A88 ***data;
    s32 *size;

    data = &arg0->unk_14;
    temp = arg0->unk_14;
    if ((u32)temp != (u32)(temp + arg0->unk_18)) {
        size = &arg0->unk_18;
        do {
            (*temp)->unk_0C(arg1);
            temp++;
        } while (temp != *data + *size);
    }
}

}
