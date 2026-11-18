#include "common.h"

extern "C" {

struct T088BE4FC_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_088BE5E8(s32, s32);

struct T088BE4FC_H {
    s32 unk_00;
    T088BE4FC_A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, unk_0C, unk_00);
                func_088BE5E8(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x7C];
    u8 unk_7C[0x408];
    u32 unk_484;
} T088BE4FC;

void func_088BDC78(T088BE4FC_H *, u8 *, u32);
void func_0894B49C(s32, s32);

void func_088BE4FC(T088BE4FC *arg0, s32 arg1) {
    u32 i;

    for (i = 0; i < arg0->unk_484; i++) {
        T088BE4FC_H h;

        func_088BDC78(&h, arg0->unk_7C, i);
        func_0894B49C(h.unk_08, arg1);
        h.release();
    }
}

}
