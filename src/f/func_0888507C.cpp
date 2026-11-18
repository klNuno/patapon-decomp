#include "common.h"

extern "C" {

class P_0888507C {
public:
    u8 pad_00[0x10];
    virtual void unk_08(s32);
};

class H_0888507C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(P_0888507C *);
};

class Alloc_0888507C {
public:
    virtual void unk_08();
    virtual void unk_0C(P_0888507C *, s32 *, H_0888507C *);
};

inline void free_0888507C(H_0888507C *h, P_0888507C *p) {
    if (p != NULL) {
        p->unk_08(-1);
        h->unk_10(p);
    }
}

struct M_0888507C {
    H_0888507C *unk_00;
    Alloc_0888507C *unk_04;
    P_0888507C *unk_08;
    s32 *unk_0C;

    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        P_0888507C *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->unk_0C(p, c, unk_00);
                free_0888507C(unk_00, p);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    M_0888507C unk_18;
} Obj_0888507C;

extern u8 D_08A453B0[];
extern u8 D_08A44BA4[];
void func_088851B0(M_0888507C *);
void func_0886A0DC(void *);
void func_088694F8(void *, s32);
void func_0880416C(void *);

Obj_0888507C *func_0888507C(Obj_0888507C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A453B0;
        func_088851B0(&arg0->unk_18);
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
