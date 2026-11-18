#include "common.h"

extern "C" {

struct A {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C {
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

struct SP {
    void *unk_00;
    C unk_04;
};

typedef struct E {
    s32 unk_00;
    A *unk_04;
    SP unk_08;
} E;

typedef struct V {
    E *unk_00;
    u32 unk_04;
} V;

typedef struct O {
    u8 pad_00[0x404];
    V unk_404;
} O;

void func_088B5A98(s32, s32);
void func_0880416C(O *);

O *func_088B88D8(O *arg0, s16 arg1) {
    E *p;
    V *v;
    SP *s;
    u32 *n;
    C *c;

    if (arg0 != NULL) {
        p = arg0->unk_404.unk_00;
        v = &arg0->unk_404;
        if ((u32)p != (u32)(p + arg0->unk_404.unk_04)) {
            n = &arg0->unk_404.unk_04;
            do {
                if (p != NULL) {
                    if (p != NULL) {
                        s = &p->unk_08;
                        if (s->unk_00 != NULL) {
                            c = &p->unk_08.unk_04;
                            if (c->release() == 0) {
                                p->unk_04->v1(s->unk_00, c->unk_00, p->unk_00);
                                func_088B5A98((s32)s->unk_00, p->unk_00);
                            }
                        }
                    }
                }
                p++;
            } while (p != v->unk_00 + *n);
        }
        arg0->unk_404.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
