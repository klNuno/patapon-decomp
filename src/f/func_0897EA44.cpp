#include "common.h"

extern "C" {

class B_0897EA44 {
public:
    u8 pad_00[0x91C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

class S_0897EA44 : public B_0897EA44 {
public:
    u8 pad_920[0x4C];
    u8 unk_96C[4];
};

void func_0880416C(void *);
void func_08874A10(void *, s32);
void func_088F0D30(S_0897EA44 *, s32);
extern u8 D_08A46624[];
extern u8 D_08A48060[];

S_0897EA44 *func_0897EA44(S_0897EA44 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x91C] = D_08A48060;
        arg0->vfunc_0C();
        if (arg0 != NULL) {
            *(void **)&arg0->pad_00[0x91C] = D_08A46624;
            arg0->vfunc_0C();
            func_08874A10(arg0->unk_96C, -1);
            func_088F0D30(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
