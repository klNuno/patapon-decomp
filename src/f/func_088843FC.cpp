#include "common.h"

template <class T> inline void swp_088843FC(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

extern "C" {

class Del_088843FC {
public:
    virtual s32 *vf_08(s32, s32);
    virtual void vf_0C(s32, s32 *, s32);
};

Del_088843FC *func_08827AD4(void);
void func_0886A45C(s32, s32);

class Ptr_088843FC {
public:
    s32 unk_00;
    Del_088843FC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_088843FC(void *o, s32 tag) {
        unk_00 = tag;
        unk_04 = func_08827AD4();
        unk_08 = (s32)o;
        unk_0C = unk_04->vf_08(unk_08, unk_00);
        *unk_0C = 1;
    }
    void swap(Ptr_088843FC &o) {
        swp_088843FC(unk_00, o.unk_00);
        swp_088843FC(unk_04, o.unk_04);
        {
            s32 t = *(volatile s32 *)&unk_08;
            unk_08 = o.unk_08;
            o.unk_08 = t;
        }
        swp_088843FC(unk_0C, o.unk_0C);
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_0886A45C(p, unk_00);
            }
        }
    }
};

void func_088843FC(Ptr_088843FC *arg0, void *arg1, s32 arg2) {
    Ptr_088843FC h(arg1, arg2);

    h.swap(*arg0);
    h.release();
}

}
