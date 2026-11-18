#include "common.h"

extern "C" {

void func_089BAD9C(void *, s32);

class B_089BAC54 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_089BAC54 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_089BAC54 *);
};

inline void inl1_089BAC54(B_089BAC54 *arg2, void *arg1) {
    if (arg1 != NULL) {
        func_089BAD9C(arg1, -1);
        arg2->v2(arg1);
    }
}

struct P_089BAC54 {
    void *unk_00;
};

struct R_089BAC54 {
    s32 *unk_00;
};

class E_089BAC54 {
public:
    B_089BAC54 *unk_00;
    C_089BAC54 *unk_04;
    P_089BAC54 unk_08;
    R_089BAC54 unk_0C;

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
                inl1_089BAC54(unk_00, *temp);
            }
        }
    }
};

void func_089BAC54(E_089BAC54 *arg0) {
    if (arg0 != NULL) {
        arg0->f_00();
    }
}

}
