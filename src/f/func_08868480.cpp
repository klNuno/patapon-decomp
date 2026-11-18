#include "common.h"

extern "C" {


class B_08868480 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_08868480 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_08868480 *);
};

void func_08869F74(void *, B_08868480 *);
void func_0880416C(void *);

struct P_08868480 {
    void *unk_00;
};

struct R_08868480 {
    s32 *unk_00;
};

class E_08868480 {
public:
    B_08868480 *unk_00;
    C_08868480 *unk_04;
    P_08868480 unk_08;
    R_08868480 unk_0C;

    void f_00() {
        void **temp;
        s32 **temp2;
        s32 temp3;

        if (this != NULL && (temp = &unk_08.unk_00, *temp != NULL)) {
            temp2 = &unk_0C.unk_00;
            --*unk_0C.unk_00;
            if (unk_0C.unk_00 != NULL) {
                temp3 = *unk_0C.unk_00;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v1(*temp, *temp2, unk_00);
                func_08869F74(*temp, unk_00);
            }
        }
    }
};

E_08868480 *func_08868480(E_08868480 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->f_00();
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
