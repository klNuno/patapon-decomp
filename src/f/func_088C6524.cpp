#include "common.h"

extern "C" {

struct A_088C6524 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088C6524 {
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

struct SP_088C6524 {
    void *unk_00;
    C_088C6524 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088C6524 *unk_04;
    SP_088C6524 unk_08;
} M_088C6524;

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    void *unk_18;
    u8 pad_1C[0x3C4 - 0x1C];
    M_088C6524 unk_3C4;
    M_088C6524 unk_3D4;
} S_088C6524;

extern u8 D_08A4832C[];
extern u8 D_08A48344[];

void func_08891578(void *, s32);
void func_08944270(S_088C6524 *, s32);
void func_0880416C(void *);

inline void rel_088C6524(M_088C6524 *o) {
    SP_088C6524 *s;
    C_088C6524 *c;

    if (o != NULL) {
        s = &o->unk_08;
        if (o->unk_08.unk_00 != NULL) {
            c = &o->unk_08.unk_04;
            if (c->release() == 0) {
                o->unk_04->v1(s->unk_00, *(s32 **)c, o->unk_00);
                func_08891578(s->unk_00, o->unk_00);
            }
        }
    }
}

S_088C6524 *func_088C6524(S_088C6524 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A4832C;
        arg0->unk_18 = D_08A48344;
        if (&arg0->unk_3D4 != NULL) {
            rel_088C6524(&arg0->unk_3D4);
        }
        if (&arg0->unk_3C4 != NULL) {
            rel_088C6524(&arg0->unk_3C4);
        }
        func_08944270(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
