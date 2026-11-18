#include "common.h"

extern "C" {

struct O_0884E914 {
    virtual void v1(s32);
};

struct M_0884E914 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_0884E914 *);
    void del(O_0884E914 *o) {
        if (o != NULL) {
            o->v1(-1);
            v2(o);
        }
    }
};

struct A_0884E914 {
    virtual void v0();
    virtual void v1(O_0884E914 *, s32 *, M_0884E914 *);
};

struct C_0884E914 {
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

struct SP_0884E914 {
    O_0884E914 *unk_00;
    C_0884E914 unk_04;
};

typedef struct {
    M_0884E914 *unk_00;
    A_0884E914 *unk_04;
    SP_0884E914 unk_08;
} Obj_0884E914;

void func_0884E914(Obj_0884E914 *arg0) {
    SP_0884E914 *s;
    C_0884E914 *c;

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
    }
}

}
