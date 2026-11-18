#include "common.h"

extern "C" {

struct A_088FF848 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088FF848 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

typedef struct {
    s32 unk_00;
    A_088FF848 *unk_04;
    u8 *unk_08;
    C_088FF848 unk_0C;
} H_088FF848;

struct F_088FF848 {
    f32 unk_00;
    f32 unk_04;
    F_088FF848(f32 x, f32 y) {
        unk_00 = x;
        unk_04 = y;
    }
};

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FF848;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F5328(void *, s32);
void func_088F79B4(H_088FF848 *, s32, s32, u32, const F_088FF848 &);

void func_088FF848(S_088FF848 *arg0, void *arg1) {
    H_088FF848 h;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    C_088FF848 *p;
    s32 w;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    w = func_088C6464(arg0->unk_10 + 0x506F0);
    func_088F79B4(&h, w, *a, *b, F_088FF848(*c, *d));
    if (h.unk_08 != NULL) {
        p = &h.unk_0C;
        if (p->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)p, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
    func_08852F00(arg1, 0);
}

}
