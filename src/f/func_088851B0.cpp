#include "common.h"

template <class T> inline void sw(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

struct O_088851B0 {
    u8 pad_00[0x10];
    virtual void v0(s32);
};

struct M_088851B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_088851B0 *);
    void del(O_088851B0 *o) {
        if (o != NULL) {
            o->v0(-1);
            v2(o);
        }
    }
};

struct A_088851B0 {
    virtual void v0();
    virtual void v1(O_088851B0 *, s32 *, M_088851B0 *);
};

struct C_088851B0 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --**(s32 **)&unk_00;
        return get();
    }
};

struct SP_088851B0 {
    O_088851B0 *unk_00;
    C_088851B0 unk_04;
};

struct Obj_088851B0 {
    M_088851B0 *unk_00;
    A_088851B0 *unk_04;
    SP_088851B0 unk_08;
    void fin() {
        SP_088851B0 *s;
        C_088851B0 *c;

        s = &unk_08;
        if (s->unk_00 != NULL) {
            c = &unk_08.unk_04;
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v1(s->unk_00, *(s32 **)c, unk_00);
                unk_00->del(s->unk_00);
            }
        }
    }
};

void func_088851B0(Obj_088851B0 *arg0) {
    Obj_088851B0 tmp;
    tmp.unk_00 = NULL;
    tmp.unk_04 = NULL;
    tmp.unk_08.unk_00 = NULL;
    tmp.unk_08.unk_04.unk_00 = NULL;
    sw(tmp.unk_00, arg0->unk_00);
    sw(tmp.unk_04, arg0->unk_04);
    sw(tmp.unk_08.unk_00, arg0->unk_08.unk_00);
    sw(tmp.unk_08.unk_04.unk_00, arg0->unk_08.unk_04.unk_00);
    tmp.fin();
}

}
