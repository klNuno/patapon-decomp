#include "common.h"

extern "C" {

struct A_0894200C {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_08891578(s32, s32);

struct H_0894200C {
    s32 unk_00;
    A_0894200C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    H_0894200C(const H_0894200C &o) {
        ((u32 *)this)[0] = ((const u32 *)&o)[0];
        ((u32 *)this)[1] = ((const u32 *)&o)[1];
        ((u32 *)this)[2] = ((const u32 *)&o)[2];
        ((u32 *)this)[3] = ((const u32 *)&o)[3];
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void operator delete(void *) {}
    void unk_10() {
        if (unk_08 != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->v0C(unk_08, unk_0C, unk_00);
                func_08891578(unk_08, unk_00);
            }
        }
    }
};

struct W_0894200C {
    u8 pad_00[0x10];
    H_0894200C unk_10;
    W_0894200C(const H_0894200C &arg0) : unk_10(arg0) {}
    void operator delete(void *) {}
};

typedef struct N_0894200C {
    struct N_0894200C *unk_00;
    u8 pad_04[0x4];
    H_0894200C unk_08;
} N_0894200C;

struct It_0894200C {
    N_0894200C *unk_00;
    int eq(const It_0894200C &o) const { return unk_00 == o.unk_00; }
    bool ne(const It_0894200C &o) const { return !(bool)eq(o); }
    H_0894200C get() const { return unk_00->unk_08; }
};

struct S_0894200C {
    u8 pad_00[0x19C];
    N_0894200C unk_19C;
    It_0894200C end() { It_0894200C r; r.unk_00 = &unk_19C; return r; }
};

void func_088E61FC(void *, const H_0894200C &);

void func_0894200C(S_0894200C *arg0, void *arg1) {
    It_0894200C it;

    it.unk_00 = arg0->unk_19C.unk_00;
    while (it.ne(arg0->end())) {
        W_0894200C temp(it.unk_00->unk_08);
        func_088E61FC(arg1, temp.unk_10);
        temp.unk_10.unk_10();
        it.unk_00 = it.unk_00->unk_00;
    }
}

}
