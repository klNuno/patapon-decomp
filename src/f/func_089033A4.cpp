#include "common.h"

extern "C" {

struct A_089033A4 {
    virtual void v0();
    virtual void v1(u8 *, s32 *, s32);
};

struct C_089033A4 {
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

struct SP_089033A4 {
    u8 *unk_00;
    C_089033A4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_089033A4 *unk_04;
    SP_089033A4 unk_08;
} Obj_089033A4;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Arg_089033A4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} R_089033A4;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    s32 unk_10;
    s32 unk_14;
} P_089033A4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(Obj_089033A4 *, s32, s32);
void func_088E478C(u8 *, s32);
s32 func_088E557C(void *, s32);
P_089033A4 *func_08923B30(u8 *);
void func_08931CEC(R_089033A4 *, u8 *, s32, s32 *, s32, s32, void *);

void func_089033A4(Arg_089033A4 *arg0, void *arg1) {
    Obj_089033A4 o;
    R_089033A4 r;
    s32 *a;
    s32 *b;
    s32 *c;
    P_089033A4 *p;
    SP_089033A4 *s;
    C_089033A4 *cc;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_088E44CC(&o, func_088C6454(arg0->unk_10 + 0x506F0), *a);
    p = func_08923B30(o.unk_08.unk_00 + 0x34);
    p->unk_00 = func_088E557C(o.unk_08.unk_00, *b);
    func_08931CEC(&r, arg0->unk_10 + 0x1040, *c, &p->unk_04, 0, 0, NULL);
    p->unk_10 = r.unk_00;
    p->unk_14 = r.unk_04;
    func_08852F00(arg1, 0);
    s = &o.unk_08;
    if (o.unk_08.unk_00 != NULL) {
        cc = &o.unk_08.unk_04;
        if (cc->release() == 0) {
            o.unk_04->v1(s->unk_00, *(s32 **)cc, o.unk_00);
            func_088E478C(s->unk_00, o.unk_00);
        }
    }
}

}
