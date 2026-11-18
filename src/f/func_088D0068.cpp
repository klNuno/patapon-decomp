#include "common.h"

extern "C" {

struct O_088D0068 {
    u8 pad_00[0x30];
    virtual void v0(s32);
};

struct M_088D0068 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_088D0068 *);
    void del(O_088D0068 *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_088D0068 {
    virtual void v0();
    virtual void v1(O_088D0068 *, s32 *, M_088D0068 *);
};

struct C_088D0068 {
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

struct SP_088D0068 {
    O_088D0068 *unk_00;
    C_088D0068 unk_04;
};

typedef struct {
    M_088D0068 *unk_00;
    A_088D0068 *unk_04;
    SP_088D0068 unk_08;
} Obj_088D0068;

void func_088D0068(Obj_088D0068 *arg0) {
    SP_088D0068 *s;
    C_088D0068 *c;

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
