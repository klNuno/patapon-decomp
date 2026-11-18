#include "common.h"

extern "C" {

struct A_0885D490 {
    u8 pad_00[8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual s32 v14();
    virtual void v18();
    virtual s32 v1C();
};

struct N_0885D490 {
    s32 unk_00;
    N_0885D490 *unk_04;
    A_0885D490 **unk_08;

    s32 eqTail(const N_0885D490 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N_0885D490 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_0885D490 &o) const {
        return !(bool)eq(o);
    }
};

struct It_0885D490 {
    N_0885D490 *unk_00;

    A_0885D490 **get() { return unk_00->unk_08; }
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

struct O_0885D490 {
    u8 pad_00[0x13BC];
    N_0885D490 unk_13BC;

    N_0885D490 *end() { return &unk_13BC; }
};

A_0885D490 **func_0885D490(O_0885D490 *arg0, s32 arg1) {
    It_0885D490 it;
    A_0885D490 *obj;
    s32 prev;
    s32 n;

    it.unk_00 = arg0->unk_13BC.unk_04;
    prev = -1;
    n = 0;
    for (; it.unk_00->ne(*arg0->end()); it.next()) {
        obj = *it.get();
        obj->v1C();
        if (prev < 0 || obj->v14() <= prev) {
            prev = -1;
            if (obj->v1C() == 0) {
                prev = obj->v14();
            }
            if (n == arg1) {
                return it.get();
            }
            n++;
        }
    }
    return NULL;
}

}
