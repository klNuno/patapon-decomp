#include "common.h"

extern "C" {

class B_088BA438;

class C_088BA438 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_088BA438 *);
};

void func_088BBDF0(void *, B_088BA438 *);

struct P_088BA438 {
    void *unk_00;
};

struct R_088BA438 {
    s32 *unk_00;
};

class E_088BA438 {
public:
    B_088BA438 *unk_00;
    C_088BA438 *unk_04;
    P_088BA438 unk_08;
    R_088BA438 unk_0C;

    s32 count() const { return unk_0C.unk_00 != NULL ? *unk_0C.unk_00 : 0; }
    void f_00() {
        void **temp;

        if (this != NULL && (temp = &unk_08.unk_00, *temp != NULL)) {
            --*unk_0C.unk_00;
            if (count() == 0) {
                unk_04->v1(*temp, unk_0C.unk_00, unk_00);
                func_088BBDF0(*temp, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x108];
    E_088BA438 *unk_108;
    s32 unk_10C;
} T_088BA438;

void func_088BA438(T_088BA438 *arg0) {
    E_088BA438 *p;
    E_088BA438 **b;
    s32 *n;

    p = arg0->unk_108;
    b = &arg0->unk_108;
    if (p != *b + arg0->unk_10C) {
        n = &arg0->unk_10C;
        do {
            if (p != NULL) {
                p->f_00();
            }
            p++;
        } while (p != *b + *n);
    }
    arg0->unk_10C = 0;
}

}
