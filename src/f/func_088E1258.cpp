#include "common.h"

extern "C" {

struct X_088E1258 {
    u8 pad_00[0x28];
    virtual void v0(s32);
};

struct A_088E1258 {
    virtual void v0();
    virtual void v1();
    virtual void v2(X_088E1258 *);
};

struct B_088E1258 {
    virtual void v0();
    virtual void v1(X_088E1258 *, s32 *, A_088E1258 *);
};

struct C_088E1258 {
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

struct SP_088E1258 {
    X_088E1258 *unk_00;
    C_088E1258 unk_04;
};

typedef struct {
    A_088E1258 *unk_00;
    B_088E1258 *unk_04;
    SP_088E1258 unk_08;
} Obj_088E1258;

inline void free_088E1258(X_088E1258 *x, A_088E1258 *a) {
    if (x != NULL) {
        x->v0(-1);
        a->v2(x);
    }
}

void func_088E1258(Obj_088E1258 *arg0) {
    SP_088E1258 *s;
    C_088E1258 *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    free_088E1258(s->unk_00, arg0->unk_00);
                }
            }
        }
    }
}

}
