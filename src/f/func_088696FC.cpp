#include "common.h"

template <class T> inline void swp_088696FC(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class Del_088696FC {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08869DB4(s32, s32);

class Ptr_088696FC {
public:
    s32 unk_00;
    Del_088696FC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void init() {
        unk_00 = 0;
        unk_04 = NULL;
        unk_08 = 0;
        unk_0C = NULL;
    }
    void swap(Ptr_088696FC &o) {
        swp_088696FC(unk_00, o.unk_00);
        swp_088696FC(unk_04, o.unk_04);
        swp_088696FC(unk_08, o.unk_08);
        swp_088696FC(unk_0C, o.unk_0C);
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08869DB4(p, unk_00);
            }
        }
    }
};

void func_088696FC(Ptr_088696FC *arg0) {
    Ptr_088696FC h;

    h.init();
    h.swap(*arg0);
    h.release();
}

}
