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

typedef struct M {
    u8 pad_00[0x110];
    V unk_110;
} M;

typedef struct L {
    u8 unk_00[0x24];
    void *unk_24;
} L;

typedef struct O {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0C[0xC];
    M unk_18;
    L unk_130;
    L unk_158;
} O;

extern u8 D_08A48CE4[];
void func_089C46A8(O *);
void func_089C4404(void *);
void func_089C3244(void *, s32);
void func_089C4E00(s32, s32);
void func_08945EC4(void *, s32);
void func_089458C8(void *, s32);
void func_0880416C(void *);

O *func_089C4520(O *arg0, s16 arg1) {
    E *p;
    V *v;
    SP *s;
    u32 *n;
    C *c;

    if (arg0 != NULL) {
        func_089C46A8(arg0);
        if (&arg0->unk_158 != NULL) {
            arg0->unk_158.unk_24 = D_08A48CE4;
            func_089C4404(&arg0->unk_158);
            func_089C3244(&arg0->unk_158, -1);
        }
        if (&arg0->unk_130 != NULL) {
            arg0->unk_130.unk_24 = D_08A48CE4;
            func_089C4404(&arg0->unk_130);
            func_089C3244(&arg0->unk_130, -1);
        }
        if (&arg0->unk_18 != NULL) {
            p = arg0->unk_18.unk_110.unk_00;
            v = &arg0->unk_18.unk_110;
            if ((u32)p != (u32)(p + arg0->unk_18.unk_110.unk_04)) {
                n = &arg0->unk_18.unk_110.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (s->unk_00 != NULL) {
                                c = &p->unk_08.unk_04;
                                if (c->release() == 0) {
                                    p->unk_04->v1(s->unk_00, c->unk_00, p->unk_00);
                                    func_089C4E00((s32)s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_18.unk_110.unk_04 = 0;
        }
        func_08945EC4(arg0->unk_0C, -1);
        func_089458C8(arg0->unk_04, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
