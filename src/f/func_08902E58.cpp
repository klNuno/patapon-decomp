#include "common.h"

extern "C" {

struct A_08902E58 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_08902E58 {
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

struct SP_08902E58 {
    u8 *unk_00;
    C_08902E58 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08902E58 *unk_04;
    SP_08902E58 unk_08;
} Obj_08902E58;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_08902E58;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_08902E58 *, s32, s32);
typedef struct {
    u8 pad_00[0x30];
    f32 unk_30, unk_34, unk_38;
    u8 pad_3C[4];
} T;

void func_088E5458(u8 *, s32, T *);
void func_088E478C(u8 *, s32);

void func_08902E58(Arg_08902E58 *arg0, void *arg1) {
    Obj_08902E58 o;
    T t;
    s32 *a;
    s32 *b;
    f32 *c0;
    f32 *c1;
    s32 *d;
    SP_08902E58 *s;
    C_08902E58 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c0 = (f32 *)func_0885356C(arg1, 2, 1, 4);
    c1 = (f32 *)func_0885356C(arg1, 3, 1, 4);
    d = func_0885356C(arg1, 4, 1, 4);
    func_088E44CC(&o, func_088C6454(arg0->unk_10 + 0x506F0), *a);
    func_088E5458(o.unk_08.unk_00, *b, &t);
    *c0 = t.unk_30;
    *c1 = t.unk_34;
    *d = (s32)(t.unk_38 > 0.5f ? (void *)0 : (void *)1);
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
