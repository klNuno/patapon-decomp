#include "common.h"

extern "C" {

struct A_08900498 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_08900498 {
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

struct SP_08900498 {
    u8 *unk_00;
    C_08900498 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08900498 *unk_04;
    SP_08900498 unk_08;
} Obj_08900498;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
    u8 pad_14[0x10];
    s32 unk_24;
} Arg_08900498;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_08900498 *, s32, s32);
s32 func_088E5524(u8 *);
void func_088E478C(u8 *, s32);

void func_08900498(Arg_08900498 *arg0, void *arg1) {
    Obj_08900498 o;
    s32 h;
    s32 st;
    SP_08900498 *s;
    C_08900498 *c;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    st = func_08852EB8(arg1);
    if (st == 0) {
        arg0->unk_24 = *func_0885356C(arg1, 0, 1, 4);
        func_08852EDC(arg1, st + 1);
    }
    func_088E44CC(&o, h, arg0->unk_24);
    if (func_088E5524(o.unk_08.unk_00) != 0) {
        func_08852F00(arg1, 0);
    }
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
