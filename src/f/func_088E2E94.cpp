#include "common.h"

template <class T> inline void swp(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class Del {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

void func_088E478C(s32, s32);
Del *func_08827AD4(void);

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void swap(Ptr &o) {
        swp(unk_00, o.unk_00);
        swp(unk_04, o.unk_04);
        s32 t = *(volatile s32 *)&unk_08;
        unk_08 = o.unk_08;
        o.unk_08 = t;
        swp(unk_0C, o.unk_0C);
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_088E478C(p, unk_00);
            }
        }
    }
};

void func_088E2E94(Ptr *arg0, s32 arg1, s32 arg2) {
    Ptr h;

    h.unk_00 = arg2;
    h.unk_04 = func_08827AD4();
    h.unk_08 = arg1;
    h.unk_0C = h.unk_04->vf_08(arg1, h.unk_00);
    *h.unk_0C = 1;
    h.swap(*arg0);
    h.release();
}

}
