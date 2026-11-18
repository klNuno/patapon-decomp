#include "common.h"

extern "C" {

struct O_0897B414 {
    u8 pad_00[0x18];
    virtual void v0(s32);
};

struct W_0897B414 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_0897B414 *);

    void del(O_0897B414 *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_0897B414 {
    virtual void v0();
    virtual void v1(O_0897B414 *, s32 *, W_0897B414 *);
};

struct C_0897B414 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_0897B414 {
    O_0897B414 *unk_00;
    C_0897B414 unk_04;
};

typedef struct {
    W_0897B414 *unk_00;
    A_0897B414 *unk_04;
    SP_0897B414 unk_08;
} Obj_0897B414;

typedef struct {
    s32 unk_00;
    Obj_0897B414 unk_04;
} T0897B414;

void func_0897B414(T0897B414 *arg0) {
    Obj_0897B414 *o;
    SP_0897B414 *s;
    C_0897B414 *c;

    if (arg0 != NULL) {
        o = &arg0->unk_04;
        if (o != NULL) {
            if (o != NULL) {
                s = &arg0->unk_04.unk_08;
                if (arg0->unk_04.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_04.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_04.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_04.unk_00);
                        arg0->unk_04.unk_00->del(s->unk_00);
                    }
                }
            }
        }
    }
}

}
