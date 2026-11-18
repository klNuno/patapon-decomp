#include "common.h"

extern "C" {

struct V {
    virtual void v08();
    virtual void v0C(void *, s32 *, s32);
};
struct P {
    void *unk_00;
    s32 *unk_04;
};
struct E {
    s32 unk_00;
    V *unk_04;
    P unk_08;
};
struct T {
    u8 pad_00[0x24];
    u8 *unk_24;
};
struct A {
    u8 pad_00[0x24];
    E *unk_24;
    s32 unk_28;
};
struct B {
    u8 pad_00[0x34];
    E *unk_34;
    s32 unk_38;
};
struct S {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0C[0xC];
    A unk_18;
    T unk_44;
    T unk_6C;
    u8 pad_94[0x10];
    B unk_A4;
};
extern u8 D_08A48E6C[];
void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_08945EC4(void *, s32);
void func_089CC580(void *, s16);
void func_089CD004(void *);
void func_089CD358(S *);
void func_089CDEF4(void *, s32);
void func_089CDF48(void *, s32);

S *func_089CD120(S *arg0, s16 arg1) {
    E *p;
    P *s;
    if (arg0 != NULL) {
        func_089CD358(arg0);
        if (&arg0->unk_A4 != NULL) {
            p = arg0->unk_A4.unk_34;
            E *&data = arg0->unk_A4.unk_34;
            if ((u32)p != (u32)(arg0->unk_A4.unk_34 + arg0->unk_A4.unk_38)) {
                s32 &size = arg0->unk_A4.unk_38;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (p->unk_08.unk_00 != NULL) {
                                --**(s32 *volatile *)&p->unk_08.unk_04;
                                s32 *c = p->unk_08.unk_04;
                                if ((c != NULL ? *c : 0) == 0) {
                                    p->unk_04->v0C(s->unk_00, c, p->unk_00);
                                    func_089CDF48(s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != data + size);
            }
            arg0->unk_A4.unk_38 = 0;
        }
        if (&arg0->unk_6C != NULL) {
            arg0->unk_6C.unk_24 = D_08A48E6C;
            func_089CD004(&arg0->unk_6C);
            func_089CC580(&arg0->unk_6C, -1);
        }
        if (&arg0->unk_44 != NULL) {
            arg0->unk_44.unk_24 = D_08A48E6C;
            func_089CD004(&arg0->unk_44);
            func_089CC580(&arg0->unk_44, -1);
        }
        if (&arg0->unk_18 != NULL) {
            p = arg0->unk_18.unk_24;
            E *&data = arg0->unk_18.unk_24;
            if ((u32)p != (u32)(arg0->unk_18.unk_24 + arg0->unk_18.unk_28)) {
                s32 &size = arg0->unk_18.unk_28;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (p->unk_08.unk_00 != NULL) {
                                --**(s32 *volatile *)&p->unk_08.unk_04;
                                s32 *c = p->unk_08.unk_04;
                                if ((c != NULL ? *c : 0) == 0) {
                                    p->unk_04->v0C(s->unk_00, c, p->unk_00);
                                    func_089CDEF4(s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != data + size);
            }
            arg0->unk_18.unk_28 = 0;
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
