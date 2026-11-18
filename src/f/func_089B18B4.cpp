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
    u8 pad_00[0x1004];
    V unk_1004;
} M;

typedef struct O {
    u8 pad_00[0x58];
    void *unk_58;
    u8 pad_5C[4];
    u8 unk_60[0x20];
    u8 unk_80[0x90];
    u8 unk_110[0xB0];
    u8 unk_1C0[0x14];
    u8 unk_1D4[0x20];
    M unk_1F4;
} O;

extern u8 D_08A48964[];
void func_089B2430(s32, s32);
void func_089B139C(void *, s32);
void func_089458C8(void *, s32);
void func_088FC800(void *, s32);
void func_08865F78(void *, s32);
void func_089757B8(void *, s32);
void func_089B3344(void *, s32);
void func_0880416C(void *);

O *func_089B18B4(O *arg0, s16 arg1) {
    E *p;
    V *v;
    SP *s;
    u32 *n;
    C *c;

    if (arg0 != NULL) {
        arg0->unk_58 = D_08A48964;
        if (&arg0->unk_1F4 != NULL) {
            p = arg0->unk_1F4.unk_1004.unk_00;
            v = &arg0->unk_1F4.unk_1004;
            if ((u32)p != (u32)(p + arg0->unk_1F4.unk_1004.unk_04)) {
                n = &arg0->unk_1F4.unk_1004.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (s->unk_00 != NULL) {
                                c = &p->unk_08.unk_04;
                                if (c->release() == 0) {
                                    p->unk_04->v1(s->unk_00, c->unk_00, p->unk_00);
                                    func_089B2430((s32)s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_1F4.unk_1004.unk_04 = 0;
        }
        func_089B139C(arg0->unk_1D4, -1);
        func_089458C8(arg0->unk_1C0, -1);
        func_088FC800(arg0->unk_110, -1);
        func_08865F78(arg0->unk_80, -1);
        func_089757B8(arg0->unk_60, -1);
        func_089B3344(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
