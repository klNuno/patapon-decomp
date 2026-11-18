#include "common.h"

extern "C" {

struct A_088FF6DC {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct BB_088FF6DC {
    u8 pad_00[0x28];
};

struct B_088FF6DC : BB_088FF6DC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
};

struct C_088FF6DC {
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

struct SP_088FF6DC {
    void *unk_00;
    C_088FF6DC unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FF6DC *unk_04;
    SP_088FF6DC unk_08;
} Obj_088FF6DC;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FF6DC;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
void func_088F31AC(Obj_088FF6DC *, u8 *);
void func_088E1204(void *, s32);
void func_0890943C(Obj_088FF6DC *, Obj_088FF6DC *);
s32 func_088E4ED4(void *);
void func_088E478C(void *, s32);

void func_088FF6DC(S_088FF6DC *arg0, s32 arg1) {
    s32 *a;
    Obj_088FF6DC o;
    Obj_088FF6DC t;
    SP_088FF6DC *s;
    C_088FF6DC *c;

    a = func_0885356C(arg1, 0, 1, 4);
    *a = -1;
    func_088F31AC(&o, arg0->unk_10 + 0x50560);
    if (o.unk_08.unk_00 != NULL) {
        if (((B_088FF6DC *)o.unk_08.unk_00)->v5() == 0) {
            func_0890943C(&t, &o);
            *a = func_088E4ED4(t.unk_08.unk_00);
            s = &t.unk_08;
            if (t.unk_08.unk_00 != NULL) {
                c = &t.unk_08.unk_04;
                if (c->release() == 0) {
                    t.unk_04->v1(s->unk_00, *(s32 **)c, t.unk_00);
                    func_088E478C(s->unk_00, t.unk_00);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
    s = &o.unk_08;
    if (o.unk_08.unk_00 != NULL) {
        c = &o.unk_08.unk_04;
        if (c->release() == 0) {
            o.unk_04->v1(s->unk_00, *(s32 **)c, o.unk_00);
            func_088E1204(s->unk_00, o.unk_00);
        }
    }
}

}
