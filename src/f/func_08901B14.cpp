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
    u8 pad_00[0x50560];
    u8 unk_50560[1];
    u8 pad_50561[0x18F];
    u8 unk_506F0[1];
};

struct A_08901B14 {
    virtual void unk_08();
    virtual void unk_0C(u8 *, s32 *, s32);
};

struct C_08901B14 {
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

struct SP_08901B14 {
    u8 *unk_00;
    C_08901B14 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08901B14 *unk_04;
    SP_08901B14 unk_08;
} Obj_08901B14;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} Arg_08901B14;




typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08901694;

typedef struct {
    u8 pad_00[0x404];
    E08901694 *unk_404;
    s32 unk_408;
} O08901694;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} F08901694;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
s32 func_088C6464(void *);
void func_088E44CC(Obj_08901B14 *, s32, s32);
void func_088E478C(u8 *, s32);
s32 func_088F8DCC(s32, s32, O08901694 **);
void func_088F9778(void *, F08901694 *, s32);
s32 func_088F9858(void *);

void func_08901B14(Arg_08901B14 *arg0, void *arg1)
{
    O08901694 *o;
    Obj_08901B14 t;
    F08901694 p;
    f32 x;
    f32 y;
    s32 h;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    const f32 *v;
    E08901694 *e;
    E08901694 *end;
    void *f;
    SP_08901B14 *s;
    C_08901B14 *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    h = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    func_088E44CC(&t, func_088C6454(arg0->unk_10->unk_506F0), *b);
    y = *d;
    x = *c;
    p.unk_00 = x;
    p.unk_04 = y;
    v = ((V *)t.unk_08.unk_00)->unk_28();
    p.unk_00 += v[0];
    p.unk_04 += v[1];
    if (func_088F8DCC(h, *a, &o) != 0) {
        e = o->unk_404;
        end = e + o->unk_408;
        for (; e != end; e++) {
            f = e->unk_08;
            if (f != NULL) {
                func_088F9778(f, &p, func_088F9858(f));
            }
        }
    }
    func_08852F00(arg1, 0);
    s = &t.unk_08;
    if (t.unk_08.unk_00 != NULL) {
        r = &t.unk_08.unk_04;
        if (r->release() == 0) {
            t.unk_04->unk_0C(s->unk_00, *(s32 **)r, t.unk_00);
            func_088E478C(s->unk_00, t.unk_00);
        }
    }
}

}
