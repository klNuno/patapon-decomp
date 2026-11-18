#include "common.h"

template <class T> inline void sw(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class A_088CCD44 {
public:
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

void func_088CDC08(s32, s32);

struct C_088CCD44 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
};

struct P_088CCD44 {
    s32 unk_00;
    C_088CCD44 unk_04;
};

struct SP_088CCD44 {
    s32 unk_00;
    A_088CCD44 *unk_04;
    P_088CCD44 unk_08;
    SP_088CCD44(const SP_088CCD44 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08.unk_00 = o.unk_08.unk_00;
        unk_08.unk_04.unk_00 = o.unk_08.unk_04.unk_00;
        P_088CCD44 *s = &unk_08;
        if (s->unk_00 != 0) {
            ++*s->unk_04.unk_00;
        }
    }
    void fin() {
        P_088CCD44 *s;

        s = &unk_08;
        if (s->unk_00 != 0) {
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v1(s->unk_00, s->unk_04.unk_00, unk_00);
                func_088CDC08(s->unk_00, unk_00);
            }
        }
    }
};

SP_088CCD44 *func_088CCD44(SP_088CCD44 *arg0, const SP_088CCD44 *arg1) {
    SP_088CCD44 tmp(*arg1);

    sw(tmp.unk_00, arg0->unk_00);
    sw(tmp.unk_04, arg0->unk_04);
    sw(tmp.unk_08.unk_00, arg0->unk_08.unk_00);
    sw(tmp.unk_08.unk_04.unk_00, arg0->unk_08.unk_04.unk_00);
    tmp.fin();
    return arg0;
}

}
