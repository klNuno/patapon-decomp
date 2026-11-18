#include "common.h"

extern "C" {

struct A_08903758 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08903758 {
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
    A_08903758 *unk_04;
    u8 *unk_08;
    C_08903758 unk_0C;
} H_08903758;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_08903758;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F8B8C(H_08903758 *, s32, s32);
void func_088F5328(void *, s32);

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[8];
} W;

class A {
    u8 pad_00[0x28];

public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1C();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual V *vfunc_28();
};

void func_0885A870(V *, W *);

void func_089024E0(S_08903758 *arg0, void *arg1) {
    H_08903758 h;
    V out;
    W in;
    s32 *a;
    f32 *b;
    f32 *d;
    V *p;
    f32 x;
    f32 y;
    C_08903758 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    d = (f32 *)func_0885356C(arg1, 2, 1, 4);
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *a);
    p = ((A *)h.unk_08)->vfunc_28();
    y = p->unk_04;
    x = p->unk_00;
    in.unk_00 = x;
    in.unk_04 = y;
    in.unk_0C = 1.0f;
    in.unk_08 = 0.0f;
    func_0885A870(&out, &in);
    *b = out.unk_00;
    *d = out.unk_04;
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)c, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
