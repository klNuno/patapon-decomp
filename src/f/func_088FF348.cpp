#include "common.h"

extern "C" {

struct A_088FF348 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_088FF348 {
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

struct SP_088FF348 {
    u8 *unk_00;
    C_088FF348 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FF348 *unk_04;
    SP_088FF348 unk_08;
} Obj_088FF348;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_088FF348;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_088FF348 *, s32, s32);
void func_088E478C(u8 *, s32);
s32 func_088E5034(u8 *);

void func_088FF348(Arg_088FF348 *arg0, void *arg1) {
    Obj_088FF348 o;
    s32 h;
    s32 *a;
    s32 *b;
    SP_088FF348 *s;
    C_088FF348 *c;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_088E44CC(&o, h, *a);
    *b = func_088E5034(o.unk_08.unk_00);
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
