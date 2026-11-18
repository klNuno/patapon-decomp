#include "common.h"

extern "C" {

struct O_08884E60 {
    virtual void v1(s32);
};

struct M_08884E60 {
    virtual void v0();
    virtual void v1();
    virtual void v2(O_08884E60 *);
    void del(O_08884E60 *o) {
        if (o != NULL) {
            o->v1(-1);
            v2(o);
        }
    }
};

struct A_08884E60 {
    virtual void v0();
    virtual void v1(O_08884E60 *, s32 *, M_08884E60 *);
};

class P_08884E60 {
public:
    M_08884E60 *unk_00;
    A_08884E60 *unk_04;
    O_08884E60 *unk_08;
    s32 *unk_0C;
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        }
        return 0;
    }
    void release() {
        O_08884E60 *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->v1(p, c, unk_00);
                unk_00->del(p);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    P_08884E60 unk_18;
} S_08884E60;

extern u8 D_08A453C0[];
extern u8 D_08A44BA4[];
void func_08884F94(P_08884E60 *);
void func_0886A0DC(void *);
void func_088694F8(void *, s32);
void func_0880416C(void *);

S_08884E60 *func_08884E60(S_08884E60 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A453C0;
        func_08884F94(&arg0->unk_18);
        if (&arg0->unk_18 != NULL) {
            if (&arg0->unk_18 != NULL) {
                arg0->unk_18.release();
            }
        }
        if (arg0 != NULL) {
            arg0->unk_14 = D_08A44BA4;
            func_0886A0DC(arg0);
            func_088694F8(arg0, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
