#include "common.h"

extern "C" {

struct W_08869FC8 {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
    void del(void *o) {
        if (o != NULL) {
            v2(o);
        }
    }
};

struct A_08869FC8 {
    virtual void v0();
    virtual void v1(void *, void *, W_08869FC8 *);
};

struct H_08869FC8 {
    W_08869FC8 *unk_00;
    A_08869FC8 *unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        } else {
            return 0;
        }
    }
    bool ok() { return this != NULL; }
};

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    H_08869FC8 unk_18;
} Obj_08869FC8;

extern u8 D_08A44BA4[];
extern u8 D_08A44BB4[];

void func_0880416C(void *);
void func_088694F8(void *, s32);
void func_0886A0DC(void *);
void func_0886A17C(H_08869FC8 *);

Obj_08869FC8 *func_08869FC8(Obj_08869FC8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A44BB4;
        func_0886A17C(&arg0->unk_18);
        if (arg0->unk_18.ok() && arg0->unk_18.ok()) {
            void *&o = arg0->unk_18.unk_08;
            if (arg0->unk_18.unk_08 != NULL) {
                s32 *&c = arg0->unk_18.unk_0C;
                *arg0->unk_18.unk_0C -= 1;
                if (arg0->unk_18.count() == 0) {
                    arg0->unk_18.unk_04->v1(o, *(void **)&c, arg0->unk_18.unk_00);
                    arg0->unk_18.unk_00->del(o);
                }
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
