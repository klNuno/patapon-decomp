#include "common.h"

extern "C" {

struct Unk {
    u8 pad_00[0x24];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual f32 *vfunc_18();
};

Unk *func_088FAB60(Unk *arg0, Unk *arg1, f32 arg2) {
    if (arg0 == NULL) {
        return arg1;
    }
    if (arg1 == NULL) {
        return arg0;
    }

    f32 temp = *arg0->vfunc_18();
    bool temp2 = temp > *arg1->vfunc_18();
    if (arg2 > 0.0f) {
        arg0 = temp2 ? arg0 : arg1;
        return arg0;
    }
    arg1 = temp2 ? arg1 : arg0;
    return arg1;
}

}
