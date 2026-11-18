#include "common.h"

extern "C" {

class Elem_089246D4 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32);
};

class Obj_089246D4 {
public:
    u8 pad_00[0x28];
    Elem_089246D4 **unk_28;
    s32 unk_2C;
};

void func_089246D4(Obj_089246D4 *arg0, s32 arg1) {
    Elem_089246D4 **temp;
    Elem_089246D4 ***data;
    s32 *size;

    data = &arg0->unk_28;
    temp = arg0->unk_28;
    if ((u32)temp != (u32)(temp + arg0->unk_2C)) {
        size = &arg0->unk_2C;
        do {
            (*temp)->unk_0C(arg1);
            temp++;
        } while (temp != *data + *size);
    }
}

}
