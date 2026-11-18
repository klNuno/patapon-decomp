#include "common.h"

extern "C" {

struct O {
    u8 pad_00[0x10];
    virtual void v0(s32);
};

struct M {
    virtual void v0();
    virtual void v1();
    virtual void v2(O *);
    void del(O *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A {
    virtual void v0();
    virtual void v1(O *, s32 *, M *);
};

struct C {
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

struct SP {
    O *unk_00;
    C unk_04;
};

typedef struct {
    M *unk_00;
    A *unk_04;
    SP unk_08;
} Inner;

typedef struct {
    u8 pad_00[0x30];
    Inner unk_30;
} Obj;

void func_089C6290(Obj *arg0) {
    SP *s;
    C *c;

    if (arg0 != NULL) {
        if (&arg0->unk_30 != NULL) {
            if (&arg0->unk_30 != NULL) {
                s = &arg0->unk_30.unk_08;
                if (arg0->unk_30.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_30.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_30.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_30.unk_00);
                        arg0->unk_30.unk_00->del(s->unk_00);
                    }
                }
            }
        }
    }
}

}
