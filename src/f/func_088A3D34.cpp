#include "common.h"

extern "C" {

class Elem_088A3D34 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(s32);
};

class Obj_088A3D34 {
public:
    u8 pad_00[0x14];
    Elem_088A3D34 **unk_14;
    s32 unk_18;
};

void func_088A3D34(Obj_088A3D34 *arg0, s32 arg1) {
    Elem_088A3D34 **temp;
    Elem_088A3D34 ***data;
    s32 *size;

    data = &arg0->unk_14;
    temp = arg0->unk_14;
    if ((u32)temp != (u32)(temp + arg0->unk_18)) {
        size = &arg0->unk_18;
        do {
            (*temp)->unk_28(arg1);
            temp++;
        } while (temp != *data + *size);
    }
}

}
