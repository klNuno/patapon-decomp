#include "common.h"

extern "C" {

class O_088CFBE0 {
public:
    u8 pad_00[0x30];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(s32);
};

class A_088CFBE0 {
public:
    virtual void v0();
    virtual void v1(O_088CFBE0 *, s32 *, s32);
};

struct S;
void func_088BBD9C(O_088CFBE0 *, S *);

struct C_088CFBE0 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --**(s32 **)&unk_00;
        return get();
    }
};

struct P_088CFBE0 {
    O_088CFBE0 *unk_00;
    C_088CFBE0 unk_04;
};

struct SP_088CFBE0 {
    s32 unk_00;
    A_088CFBE0 *unk_04;
    P_088CFBE0 unk_08;
    SP_088CFBE0(const SP_088CFBE0 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08.unk_00 = o.unk_08.unk_00;
        unk_08.unk_04.unk_00 = o.unk_08.unk_04.unk_00;
        P_088CFBE0 *s = &unk_08;
        if (s->unk_00 != 0) {
            ++*s->unk_04.unk_00;
        }
    }
    void fin() {
        P_088CFBE0 *s;

        s = &unk_08;
        if (s->unk_00 != 0) {
            --*s->unk_04.unk_00;
            if (unk_08.unk_04.get() == 0) {
                unk_04->v1(s->unk_00, unk_08.unk_04.unk_00, unk_00);
                func_088BBD9C(s->unk_00, (S *)unk_00);
            }
        }
    }
};

struct W_088CFBE0 {
    u8 pad_00[0x10];
    SP_088CFBE0 unk_10;
    W_088CFBE0(const SP_088CFBE0 &arg0) : unk_10(arg0) {}
};

struct N_088CFBE0 {
    N_088CFBE0 *unk_00;
    N_088CFBE0 *unk_04;
    SP_088CFBE0 unk_08;
    int eq(N_088CFBE0 *o) { return this == o; }
    bool ne(N_088CFBE0 *o) { return !(bool)eq(o); }
};

struct It_088CFBE0 {
    N_088CFBE0 *unk_00;
    int eq(N_088CFBE0 *o) { return unk_00 == o; }
    bool ne(N_088CFBE0 *o) { return !(bool)eq(o); }
};

typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    f32 unk_18[2];
    s32 unk_20;
} T;

T *func_088CFE48(s32, u32);

typedef struct {
    u8 pad_00[0x314];
    N_088CFBE0 unk_314;
    u8 pad_32C[0x5C];
    s32 unk_388;
} T_088CFBE0;

void func_088CFBE0(T_088CFBE0 *arg0, s32 arg1, s32 arg2) {
    T *r;
    It_088CFBE0 it;
    It_088CFBE0 end;

    r = func_088CFE48((s32)arg0, arg2);
    r->unk_10 = arg1;
    if (r->unk_20 & 8) {
        arg0->unk_388 = arg1;
        it.unk_00 = arg0->unk_314.unk_00;
        end.unk_00 = &arg0->unk_314;
        if (it.unk_00->ne(end.unk_00)) {
            do {
                W_088CFBE0 sp(it.unk_00->unk_08);
                sp.unk_10.unk_08.unk_00->v7(r->unk_10);
                sp.unk_10.fin();
                it.unk_00 = it.unk_00->unk_00;
            } while (it.unk_00->ne(end.unk_00));
        }
    }
}

}
