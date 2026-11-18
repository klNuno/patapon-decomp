#include "common.h"

extern "C" {

struct A_088E4524 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088E4524 {
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

struct SP_088E4524 {
    void *unk_00;
    C_088E4524 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088E4524 *unk_04;
    SP_088E4524 unk_08;
} Obj_088E4524;

typedef struct {
    u8 pad_00[0x43C];
    void *unk_43C;
} S_088E4524;

void func_088E44CC(Obj_088E4524 *, S_088E4524 *, s32);
void func_088E4850(Obj_088E4524 *, Obj_088E4524 *);
void func_088E0F18(void *, Obj_088E4524 *);
void func_088E1078(void *, Obj_088E4524 *);
void func_088E1204(void *, s32);
void func_088E478C(void *, s32);
void func_088E248C(void *, s32);

void func_088E4524(S_088E4524 *arg0, s32 arg1, s32 arg2) {
    Obj_088E4524 o;
    Obj_088E4524 a;
    Obj_088E4524 b;
    SP_088E4524 *s;
    C_088E4524 *c;

    func_088E44CC(&o, arg0, arg1);
    if (arg2 != 0) {
        func_088E4850(&a, &o);
        func_088E0F18(arg0->unk_43C, &a);
        s = &a.unk_08;
        if (a.unk_08.unk_00 != NULL) {
            c = &a.unk_08.unk_04;
            if (c->release() == 0) {
                a.unk_04->v1(s->unk_00, *(s32 **)c, a.unk_00);
                func_088E1204(s->unk_00, a.unk_00);
            }
        }
        func_088E248C(o.unk_08.unk_00, 1);
    } else {
        func_088E4850(&b, &o);
        func_088E1078(arg0->unk_43C, &b);
        s = &b.unk_08;
        if (b.unk_08.unk_00 != NULL) {
            c = &b.unk_08.unk_04;
            if (c->release() == 0) {
                b.unk_04->v1(s->unk_00, *(s32 **)c, b.unk_00);
                func_088E1204(s->unk_00, b.unk_00);
            }
        }
        func_088E248C(o.unk_08.unk_00, 0);
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
