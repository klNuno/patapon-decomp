#include "common.h"

template <class T> inline void swp(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

struct O {
    virtual void v1(s32);
};

struct M {
    virtual void v0();
    virtual void v1();
    virtual void v2(O *);
    void del(O *o) {
        if (o != NULL) {
            o->v1(-1);
            v2(o);
        }
    }
};

struct A {
    virtual void v0();
    virtual void v1(O *, s32 *, M *);
};

class Ptr {
public:
    M *unk_00;
    A *unk_04;
    O *unk_08;
    s32 *unk_0C;
    void init() {
        unk_00 = NULL;
        unk_04 = NULL;
        unk_08 = NULL;
        unk_0C = NULL;
    }
    void swap(Ptr &o) {
        swp(unk_00, o.unk_00);
        swp(unk_04, o.unk_04);
        swp(unk_08, o.unk_08);
        swp(unk_0C, o.unk_0C);
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        O *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->v1(p, c, unk_00);
                unk_00->del(p);
            }
        }
    }
};

void func_08884F94(Ptr *arg0) {
    Ptr h;

    h.init();
    h.swap(*arg0);
    h.release();
}

}
