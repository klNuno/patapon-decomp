#include "common.h"

extern "C" {

struct H_08853B50 {
    virtual void v0(s32);
};

struct W_08853B50 {
    virtual void v0();
    virtual void v1();
    virtual void v2(H_08853B50 *);
    void del(H_08853B50 *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_08853B50 {
    virtual void v0();
    virtual void v1(void *, s32 *, W_08853B50 *);
};

struct C_08853B50 {
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

struct SP_08853B50 {
    H_08853B50 *unk_00;
    C_08853B50 unk_04;
};

typedef struct {
    W_08853B50 *unk_00;
    A_08853B50 *unk_04;
    SP_08853B50 unk_08;
} Obj_08853B50;

void func_0880416C(void *);

Obj_08853B50 *func_08853B50(Obj_08853B50 *arg0, s16 arg1) {
    SP_08853B50 *s;
    C_08853B50 *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    arg0->unk_00->del(s->unk_00);
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
