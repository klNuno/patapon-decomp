#include "common.h"

extern "C" {


class B_08870834 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_08870834 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_08870834 *);
};

void func_08874714(void *, B_08870834 *);
void func_0880416C(void *);

struct P_08870834 {
    void *unk_00;
};

struct R_08870834 {
    s32 *unk_00;
};

class E_08870834 {
public:
    B_08870834 *unk_00;
    C_08870834 *unk_04;
    P_08870834 unk_08;
    R_08870834 unk_0C;

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
                func_08874714(*temp, unk_00);
            }
        }
    }
};

E_08870834 *func_08870834(E_08870834 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->f_00();
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
