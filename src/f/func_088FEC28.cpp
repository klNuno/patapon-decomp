#include "common.h"

extern "C" {

class B_088FEC28 {
public:
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(f32 *);
};

struct A_088FEC28 {
    virtual void v0();
    virtual void v1(B_088FEC28 *, s32 *, s32);
};

struct C_088FEC28 {
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

struct SP_088FEC28 {
    B_088FEC28 *unk_00;
    C_088FEC28 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FEC28 *unk_04;
    SP_088FEC28 unk_08;
} Obj_088FEC28;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_088FEC28;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E3714(s32, s32, s32);
void func_088E44CC(Obj_088FEC28 *, s32, s32);
void func_088E478C(B_088FEC28 *, s32);

void func_088FEC28(Arg_088FEC28 *arg0, void *arg1) {
    Obj_088FEC28 o;
    f32 t[2];
    s32 h;
    s32 n;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    SP_088FEC28 *s;
    C_088FEC28 *cc;
    f32 x0;
    f32 x1;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    n = func_08852EB8(arg1);
    if (n == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        b = func_0885356C(arg1, 1, 1, 4);
        c = (f32 *)func_0885356C(arg1, 2, 1, 4);
        d = (f32 *)func_0885356C(arg1, 3, 1, 4);
        func_088E3714(h, *a, *b);
        func_088E44CC(&o, h, *a);
        x1 = *d;
        x0 = *c;
        t[0] = x0;
        t[1] = x1;
        o.unk_08.unk_00->v7(t);
        func_08852EDC(arg1, n + 1);
        func_08852F00(arg1, 0);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            cc = &o.unk_08.unk_04;
            if (cc->release() == 0) {
                o.unk_04->v1(s->unk_00, *(s32 **)cc, o.unk_00);
                func_088E478C(s->unk_00, o.unk_00);
            }
        }
    } else {
        func_08852F00(arg1, 0);
    }
}

}
