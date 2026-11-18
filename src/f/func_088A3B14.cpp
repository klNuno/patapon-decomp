#include "common.h"

extern "C" {

class Elem_088A3B14 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32);
};

class Obj_088A3B14 {
public:
    u8 pad_00[0x14];
    Elem_088A3B14 **unk_14;
    s32 unk_18;
};

void func_088A3B14(Obj_088A3B14 *arg0, s32 arg1) {
    Elem_088A3B14 **temp;
    Elem_088A3B14 ***data;
    s32 *size;

    temp = arg0->unk_14;
    data = &arg0->unk_14;
    if ((u32)temp != (u32)(temp + arg0->unk_18)) {
        size = &arg0->unk_18;
        do {
            (*temp)->unk_10(arg1);
            temp++;
        } while (temp != *data + *size);
    }
}

}
