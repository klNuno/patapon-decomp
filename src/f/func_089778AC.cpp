#include "common.h"

extern "C" {

class B_089778AC {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};

class C_089778AC {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, B_089778AC *);
};

void func_08874714(void *, B_089778AC *);
void func_0880416C(void *);

struct P_089778AC {
    void *unk_00;
};

struct R_089778AC {
    s32 *unk_00;
};

class E_089778AC {
public:
    B_089778AC *unk_00;
    C_089778AC *unk_04;
    P_089778AC unk_08;
    R_089778AC unk_0C;

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

typedef struct {
    u8 unk_00[0x848C];
    u8 unk_848C[0x8520 - 0x848C];
    u8 unk_8520[0x109AC - 0x8520];
    void *unk_109AC;
} Q_089778AC;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x474 - 0x10];
    E_089778AC unk_474;
    Q_089778AC unk_484;
    u8 pad_10E34[0x10E40 - 0x10E34];
    u8 unk_10E40[0x90];
    u8 unk_10ED0[0x90];
    u8 unk_10F60[0x90];
    u8 unk_10FF0[0x90];
} T_089778AC;

extern u8 D_08A4506C[];

void func_08977A28(T_089778AC *);
void func_08865F78(void *, s32);
void func_088719CC(Q_089778AC *);
void func_08871248(void *, s32);
void func_08870834(void *, s32);
void func_089914EC(void *, s32);

T_089778AC *func_089778AC(T_089778AC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08977A28(arg0);
        func_08865F78(arg0->unk_10FF0, -1);
        func_08865F78(arg0->unk_10F60, -1);
        func_08865F78(arg0->unk_10ED0, -1);
        func_08865F78(arg0->unk_10E40, -1);
        if (&arg0->unk_484 != NULL) {
            arg0->unk_484.unk_109AC = D_08A4506C;
            func_088719CC(&arg0->unk_484);
            func_08871248(arg0->unk_484.unk_8520, -1);
            func_08870834(arg0->unk_484.unk_848C, -1);
            func_08871248(arg0->unk_484.unk_00, -1);
        }
        if (&arg0->unk_474 != NULL) {
            arg0->unk_474.f_00();
        }
        func_089914EC(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
