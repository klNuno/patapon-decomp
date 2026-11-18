#include "common.h"

extern "C" {

struct A_088D2BD0 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088D2BD0 {
    s32 *unk_00;
    s32 get() {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088D2BD0 {
    void *unk_00;
    C_088D2BD0 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088D2BD0 *unk_04;
    SP_088D2BD0 unk_08;
} E_088D2BD0;

typedef struct {
    E_088D2BD0 *unk_00;
    s32 unk_04;
} V_088D2BD0;

typedef struct {
    u8 pad_00[0x404];
    V_088D2BD0 unk_404;
} I_088D2BD0;

typedef struct {
    u8 pad_00[0x4];
    I_088D2BD0 unk_04;
} Obj_088D2BD0;

void func_0880416C(void *);
void func_088D3204(void *, s32);

Obj_088D2BD0 *func_088D2BD0(Obj_088D2BD0 *arg0, s16 arg1) {
    E_088D2BD0 *p;
    V_088D2BD0 *v;
    s32 *sz;
    SP_088D2BD0 *s;
    C_088D2BD0 *c;

    if (arg0 != NULL) {
        if (&arg0->unk_04 != NULL) {
            v = &arg0->unk_04.unk_404;
            p = arg0->unk_04.unk_404.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_404.unk_04)) {
                sz = &arg0->unk_04.unk_404.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (p->unk_08.unk_00 != NULL) {
                                if (p->unk_08.unk_04.release() == 0) {
                                    p->unk_04->v1(s->unk_00, p->unk_08.unk_04.unk_00, p->unk_00);
                                    func_088D3204(s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != v->unk_00 + *sz);
            }
            arg0->unk_04.unk_404.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
