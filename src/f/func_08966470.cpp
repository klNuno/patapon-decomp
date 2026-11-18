#include "common.h"

template <class T> inline void sw(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class A_08966470 {
public:
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

void func_08966F70(s32, s32);

struct C_08966470 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
};

struct P_08966470 {
    s32 unk_00;
    C_08966470 unk_04;
};

struct SP_08966470 {
    s32 unk_00;
    A_08966470 *unk_04;
    P_08966470 unk_08;
    SP_08966470(const SP_08966470 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08.unk_00 = o.unk_08.unk_00;
        unk_08.unk_04.unk_00 = o.unk_08.unk_04.unk_00;
        P_08966470 *s = &unk_08;
        if (s->unk_00 != 0) {
            ++*s->unk_04.unk_00;
        }
    }
    void fin() {
        P_08966470 *s;

        s = &unk_08;
        if (s->unk_00 != 0) {
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v1(s->unk_00, s->unk_04.unk_00, unk_00);
                func_08966F70(s->unk_00, unk_00);
            }
        }
    }
};

SP_08966470 *func_08966470(SP_08966470 *arg0, const SP_08966470 *arg1) {
    SP_08966470 tmp(*arg1);

    sw(tmp.unk_00, arg0->unk_00);
    sw(tmp.unk_04, arg0->unk_04);
    sw(tmp.unk_08.unk_00, arg0->unk_08.unk_00);
    sw(tmp.unk_08.unk_04.unk_00, arg0->unk_08.unk_04.unk_00);
    tmp.fin();
    return arg0;
}

}
