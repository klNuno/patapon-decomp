#include "common.h"

extern "C" {

struct P089203F8 {
    u8 pad_00[0x28];
    virtual void v08(s32);
};

struct Al089203F8 {
    virtual void v08();
    virtual void v0C();
    virtual void v10(P089203F8 *);
};

struct A089203F8 {
    virtual void v0();
    virtual void v1(P089203F8 *, s32 *, Al089203F8 *);
};

struct C089203F8 {
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

struct SP089203F8 {
    P089203F8 *unk_00;
    C089203F8 unk_04;
};

typedef struct {
    Al089203F8 *unk_00;
    A089203F8 *unk_04;
    SP089203F8 unk_08;
} T089203F8;

inline void destroy(P089203F8 *p, Al089203F8 *al) {
    if (p != NULL) {
        p->v08(-1);
        al->v10(p);
    }
}

void func_089203F8(T089203F8 *arg0) {
    SP089203F8 *s;
    C089203F8 *c;

    if (arg0 != NULL) {
        if (arg0 != NULL) {
            s = &arg0->unk_08;
            if (arg0->unk_08.unk_00 != NULL) {
                c = &arg0->unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_00);
                    destroy(s->unk_00, arg0->unk_00);
                }
            }
        }
    }
}

}
