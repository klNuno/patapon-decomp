#include "common.h"

extern "C" {

struct A_088F7F64 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088F7F64 {
    s32 *unk_00;
    s32 get() {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088F7F64 {
    void *unk_00;
    C_088F7F64 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088F7F64 *unk_04;
    SP_088F7F64 unk_08;
} E_088F7F64;

typedef struct {
    E_088F7F64 *unk_00;
    s32 unk_04;
} V_088F7F64;

typedef struct {
    u8 pad_00[0x404];
    V_088F7F64 unk_404;
} Obj_088F7F64;

void func_0880416C(void *);
void func_088F5328(void *, s32);

Obj_088F7F64 *func_088F7F64(Obj_088F7F64 *arg0, s16 arg1) {
    E_088F7F64 *p;
    V_088F7F64 *v;
    s32 *sz;
    SP_088F7F64 *s;
    C_088F7F64 *c;

    if (arg0 != NULL) {
        v = &arg0->unk_404;
        p = arg0->unk_404.unk_00;
        if ((u32)p != (u32)(p + arg0->unk_404.unk_04)) {
            sz = &arg0->unk_404.unk_04;
            do {
                if (p != NULL) {
                    if (p != NULL) {
                        s = &p->unk_08;
                        if (p->unk_08.unk_00 != NULL) {
                            if (p->unk_08.unk_04.release() == 0) {
                                p->unk_04->v1(s->unk_00, p->unk_08.unk_04.unk_00, p->unk_00);
                                func_088F5328(s->unk_00, p->unk_00);
                            }
                        }
                    }
                }
                p++;
            } while (p != v->unk_00 + *sz);
        }
        arg0->unk_404.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
