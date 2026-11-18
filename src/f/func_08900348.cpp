#include "common.h"

extern "C" {

struct A_08900348 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_08900348 {
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

struct SP_08900348 {
    u8 *unk_00;
    C_08900348 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08900348 *unk_04;
    SP_08900348 unk_08;
} Obj_08900348;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_08900348;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_08900348 *, s32, s32);
void func_088E5350(u8 *, s32, s32, s32);
void func_088E478C(u8 *, s32);

void func_08900348(Arg_08900348 *arg0, void *arg1) {
    Obj_08900348 o;
    s32 h;
    s32 *a;
    s32 *b;
    s32 *c2;
    s32 *d;
    SP_08900348 *s;
    C_08900348 *c;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c2 = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    func_088E44CC(&o, h, *a);
    func_088E5350(o.unk_08.unk_00, *b, *c2, *d != 0);
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
