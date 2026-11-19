#include "common.h"

extern "C" {

struct U {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
};

extern f32 D_08AD27E0[];

class T {
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
    virtual void unk_2C(s32, U *);
};

f32 *func_088A33F8(T *arg0, s32 arg1) {
    U temp;
    arg0->unk_2C(arg1, &temp);
    D_08AD27E0[0] = (f32)temp.unk_00;
    D_08AD27E0[1] = (f32)temp.unk_04;
    return D_08AD27E0;
}

}
