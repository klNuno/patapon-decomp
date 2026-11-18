#include "common.h"

extern "C" {

struct T0888914C_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_088899D8(s32, s32);
s32 func_088B773C(s32);

struct T0888914C_H {
    s32 unk_00;
    T0888914C_A *unk_04;
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

void func_088B60B0(T0888914C_H *, void *, s32);

typedef struct {
    u8 pad_00[0x670];
    u8 unk_670[1];
} T0888914C;

s32 func_0888914C(T0888914C *arg0, s32 arg1) {
    T0888914C_H h;
    s32 temp;

    func_088B60B0(&h, arg0->unk_670, arg1);
    temp = func_088B773C(h.unk_08);
    h.release();
    return temp;
}

}
