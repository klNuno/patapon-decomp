#include "common.h"

extern "C" {

class Elem_088A39FC {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18(s32);
};

class Obj_088A39FC {
public:
    u8 pad_00[0x14];
    Elem_088A39FC **unk_14;
    s32 unk_18;
};

void func_088A39FC(Obj_088A39FC *arg0, s32 arg1) {
    Elem_088A39FC **temp;
    Elem_088A39FC ***data;
    s32 *size;

    temp = arg0->unk_14;
    data = &arg0->unk_14;
    if ((u32)temp != (u32)(temp + arg0->unk_18)) {
        size = &arg0->unk_18;
        do {
            (*temp)->unk_18(arg1);
            temp++;
        } while (temp != *data + *size);
    }
}

}
