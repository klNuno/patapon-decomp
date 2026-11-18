#include "common.h"

template <class T> inline void sw(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class A_088F7228 {
public:
    virtual s32 *v0(void *, s32);
    virtual void v1(void *, s32 *, s32);
};

A_088F7228 *func_08827AD4(void);
void func_088F5328(void *, s32);

struct C_088F7228 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
};

struct SP_088F7228 {
    void *unk_00;
    C_088F7228 unk_04;
    void swap(SP_088F7228 &o) {
        void *t = *(void *volatile *)&unk_00;
        unk_00 = o.unk_00;
        o.unk_00 = t;
        sw(unk_04.unk_00, o.unk_04.unk_00);
    }
};

struct Obj_088F7228 {
    s32 unk_00;
    A_088F7228 *unk_04;
    SP_088F7228 unk_08;
    void init(void *o, s32 m) {
        unk_00 = m;
        unk_04 = func_08827AD4();
        unk_08.unk_00 = o;
        unk_08.unk_04.unk_00 = unk_04->v0(o, unk_00);
        *unk_08.unk_04.unk_00 = 1;
    }
    void fin() {
        SP_088F7228 *s;

        s = &unk_08;
        if (s->unk_00 != NULL) {
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v1(s->unk_00, s->unk_04.unk_00, unk_00);
                func_088F5328(s->unk_00, unk_00);
            }
        }
    }
};

void func_088F7228(Obj_088F7228 *arg0, void *arg1, s32 arg2) {
    Obj_088F7228 tmp;

    tmp.init(arg1, arg2);
    sw(tmp.unk_00, arg0->unk_00);
    sw(tmp.unk_04, arg0->unk_04);
    tmp.unk_08.swap(arg0->unk_08);
    tmp.fin();
}

}
