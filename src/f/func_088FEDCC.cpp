#include "common.h"

extern "C" {

struct A_088FEDCC {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_088FEDCC {
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

struct SP_088FEDCC {
    u8 *unk_00;
    C_088FEDCC unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FEDCC *unk_04;
    SP_088FEDCC unk_08;
} Obj_088FEDCC;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_088FEDCC;

s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E3E24(s32, s32, s32);
void func_088E44CC(Obj_088FEDCC *, s32, s32);
void func_088E478C(u8 *, s32);
s32 func_088E4ED4(u8 *);

void func_088FEDCC(Arg_088FEDCC *arg0, void *arg1) {
    Obj_088FEDCC o;
    s32 h;
    s32 n;
    s32 *a;
    SP_088FEDCC *s;
    C_088FEDCC *c;

    h = func_088C6454(arg0->unk_10 + 0x506F0);
    n = func_08852EB8(arg1);
    if (n == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        func_0885356C(arg1, 1, 1, 4);
        func_088E44CC(&o, h, *a);
        if (func_088E4ED4(o.unk_08.unk_00)) {
            func_088E3E24(h, *a, 0);
        }
        func_08852EDC(arg1, n + 1);
        func_08852F00(arg1, 0);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v1(s->unk_00, *(s32 **)c, o.unk_00);
                func_088E478C(s->unk_00, o.unk_00);
            }
        }
    } else {
        func_08852F00(arg1, 0);
    }
}

}
