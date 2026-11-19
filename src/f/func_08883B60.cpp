#include "common.h"

extern "C" {

class A_08883B60 {
public:
    virtual s32 *v0(s32, s32);
    virtual void v1(s32, s32 *, s32);
};

A_08883B60 *func_08827AD4(void);
void func_08884E0C(s32, s32);

template <class T> inline void sw_08883B60(T &a, T &b) {
    T t = a;
    a = b;
    b = t;
}

class H_08883B60 {
public:
    s32 unk_00;
    A_08883B60 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->v1(p, c, unk_00);
                func_08884E0C(p, unk_00);
            }
        }
    }


    void swap(H_08883B60 &o) {
        sw_08883B60(unk_00, o.unk_00);
        sw_08883B60(unk_04, o.unk_04);
        s32 n = *(volatile s32 *)&unk_08;
        unk_08 = o.unk_08;
        o.unk_08 = n;
        sw_08883B60(unk_0C, o.unk_0C);
    }
};

void func_08883B60(H_08883B60 *arg0, s32 arg1, s32 arg2) {
    H_08883B60 tmp[1];

    tmp[0].unk_00 = arg2;
    tmp[0].unk_04 = func_08827AD4();
    tmp[0].unk_08 = arg1;
    tmp[0].unk_0C = tmp[0].unk_04->v0(arg1, tmp[0].unk_00);
    *tmp[0].unk_0C = 1;
    tmp[0].swap(*arg0);
    tmp[0].release();

}

}
