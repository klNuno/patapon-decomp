#include "common.h"

extern "C" {

struct A_08942CE0 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08942CE0 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_08942CE0 {
    void *unk_00;
    C_08942CE0 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08942CE0 *unk_04;
    SP_08942CE0 unk_08;
} M_08942CE0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
    u8 pad_1C[0x3A8];
    M_08942CE0 unk_3C4;
} Obj_08942CE0;

extern u8 D_08A47660[];
extern u8 D_08A47678[];

void func_0880416C(void *);
void func_08891578(void *, s32);
void func_08944270(void *, s32);

Obj_08942CE0 *func_08942CE0(Obj_08942CE0 *arg0, s16 arg1) {
    SP_08942CE0 *s;
    C_08942CE0 *c;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A47660;
        arg0->unk_18 = D_08A47678;
        if (&arg0->unk_3C4 != NULL) {
            if (&arg0->unk_3C4 != NULL) {
                s = &arg0->unk_3C4.unk_08;
                if (arg0->unk_3C4.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_3C4.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_3C4.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_3C4.unk_00);
                        func_08891578(s->unk_00, arg0->unk_3C4.unk_00);
                    }
                }
            }
        }
        func_08944270(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
