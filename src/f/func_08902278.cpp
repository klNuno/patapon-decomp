#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual const f32 *unk_28();
};

struct T {
    u8 pad_00[0x506F0];
    u8 unk_506F0[1];
};

struct A_08902278 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_08902278 {
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

struct SP_08902278 {
    u8 *unk_00;
    C_08902278 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08902278 *unk_04;
    SP_08902278 unk_08;
} Obj_08902278;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} Arg_08902278;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_08902278 *, s32, s32);
void func_088E478C(u8 *, s32);

void func_08902278(Arg_08902278 *arg0, void *arg1) {
    Obj_08902278 o;
    s32 h;
    s32 *a;
    f32 *b;
    f32 *d;
    const f32 *v;
    SP_08902278 *s;
    C_08902278 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    d = (f32 *)func_0885356C(arg1, 2, 1, 4);
    h = func_088C6454(arg0->unk_10->unk_506F0);
    func_088E44CC(&o, h, *a);
    v = ((V *)o.unk_08.unk_00)->unk_28();
    *b = v[0];
    *d = v[1];
    func_08852F00(arg1, 0);
    s = &o.unk_08;
    if (o.unk_08.unk_00 != NULL) {
        c = &o.unk_08.unk_04;
        if (c->release() == 0) {
            o.unk_04->v1(s->unk_00, *(s32 **)c, o.unk_00);
            func_088E478C(s->unk_00, o.unk_00);
        }
    }
}

}
