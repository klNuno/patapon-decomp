#include "common.h"

template <class T> inline void sw_089CE018(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

struct O_089CE018 {
    u8 pad_00[0x3C];
    virtual void v08(s32);
};

struct M_089CE018 {
    virtual void v08();
    virtual void v0C();
    virtual void v10(O_089CE018 *);
    void del(O_089CE018 *o) {
        if (o != NULL) {
            o->v08(-1);
            v10(o);
        }
    }
};

class A_089CE018 {
public:
    virtual void v08();
    virtual void v0C(O_089CE018 *, s32 *, M_089CE018 *);
};

struct C_089CE018 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
};

struct P_089CE018 {
    O_089CE018 *unk_00;
    C_089CE018 unk_04;
};

struct SP_089CE018 {
    M_089CE018 *unk_00;
    A_089CE018 *unk_04;
    P_089CE018 unk_08;
    SP_089CE018(const SP_089CE018 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08.unk_00 = o.unk_08.unk_00;
        unk_08.unk_04.unk_00 = o.unk_08.unk_04.unk_00;
        P_089CE018 *s = &unk_08;
        if (s->unk_00 != 0) {
            ++*s->unk_04.unk_00;
        }
    }
    void fin() {
        P_089CE018 *s;

        s = &unk_08;
        if (s->unk_00 != 0) {
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v0C(s->unk_00, s->unk_04.unk_00, unk_00);
                unk_00->del(s->unk_00);
            }
        }
    }
};

SP_089CE018 *func_089CE018(SP_089CE018 *arg0, const SP_089CE018 *arg1) {
    SP_089CE018 tmp(*arg1);

    sw_089CE018(tmp.unk_00, arg0->unk_00);
    sw_089CE018(tmp.unk_04, arg0->unk_04);
    sw_089CE018(tmp.unk_08.unk_00, arg0->unk_08.unk_00);
    sw_089CE018(tmp.unk_08.unk_04.unk_00, arg0->unk_08.unk_04.unk_00);
    tmp.fin();
    return arg0;
}

}
