#include "common.h"

extern "C" {

struct O_089297FC {
    u8 pad_00[0x62C];
    virtual void v0(s32);
};

struct M_089297FC {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_089297FC *);
    void del(O_089297FC *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_089297FC {
    virtual void v0();
    virtual void v1(O_089297FC *, s32 *, M_089297FC *);
};

struct C_089297FC {
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

struct SP_089297FC {
    O_089297FC *unk_00;
    C_089297FC unk_04;
};

typedef struct {
    M_089297FC *unk_00;
    A_089297FC *unk_04;
    SP_089297FC unk_08;
} Obj_089297FC;

void func_089297FC(Obj_089297FC *arg0) {
    SP_089297FC *s;
    C_089297FC *c;

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
