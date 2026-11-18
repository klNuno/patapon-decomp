#include "common.h"

extern "C" {

struct A_088FF4E4 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_088E478C(s32, s32);

struct H_088FF4E4 {
    s32 unk_00;
    A_088FF4E4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return (unk_0C != NULL) ? *unk_0C : 0; }
    void release() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vfunc_0C(unk_08, *(void **)&unk_0C, unk_00);
                func_088E478C(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} T_088FF4E4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(s32);
void func_088E44CC(H_088FF4E4 *, s32, s32);
f32 func_088E554C(s32);

void func_088FF4E4(T_088FF4E4 *arg0, void *arg1) {
    H_088FF4E4 h;
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    func_088E44CC(&h, func_088C6454((s32)&arg0->unk_10[0x506F0]), *a);
    *b = func_088E554C(h.unk_08);
    func_08852F00(arg1, 0);
    h.release();
}

}
