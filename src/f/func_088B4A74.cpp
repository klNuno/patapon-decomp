#include "common.h"

extern "C" {

struct T088B4A74_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_088899D8(s32, s32);
void func_088B768C(s32, s32);

struct T088B4A74_H {
    s32 unk_00;
    T088B4A74_A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_088899D8(unk_08, unk_00);
            }
        }
    }
};

void func_088B60B0(T088B4A74_H *, s32, s32);

void func_088B4A74(s32 *arg0, s32 arg1, s32 arg2) {
    T088B4A74_H h;

    func_088B60B0(&h, *arg0, arg1);
    func_088B768C(h.unk_08, arg2);
    h.release();
}

}
