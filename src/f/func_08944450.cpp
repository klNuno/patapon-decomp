#include "common.h"

extern "C" {

struct A_08944450 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08944450 {
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

struct SP_08944450 {
    void *unk_00;
    C_08944450 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08944450 *unk_04;
    SP_08944450 unk_08;
} M_08944450;

typedef struct {
    u8 pad_00[0x1C];
    void *unk_1C;
    M_08944450 unk_20;
} Obj_08944450;

extern u8 D_08A47638[];

void func_0880416C(void *);
void func_08943B54(void *);
void func_089451D8(void *, s32);

Obj_08944450 *func_08944450(Obj_08944450 *arg0, s16 arg1) {
    SP_08944450 *s;
    C_08944450 *c;

    if (arg0 != NULL) {
        if (&arg0->unk_20 != NULL) {
            if (&arg0->unk_20 != NULL) {
                s = &arg0->unk_20.unk_08;
                if (arg0->unk_20.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_20.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_20.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_20.unk_00);
                        func_089451D8(s->unk_00, arg0->unk_20.unk_00);
                    }
                }
            }
        }
        if (arg0 != NULL) {
            arg0->unk_1C = D_08A47638;
            func_08943B54(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
