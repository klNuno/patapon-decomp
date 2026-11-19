#include "common.h"

extern "C" {

class T;
void func_088BC21C(char *, T *, const f32 *);
void func_088B5A98(s32, char **);
s32 func_088B8760(s32 *);

struct V {
    virtual void unk_08();
    virtual void unk_0C(s32 *, s32 *, char **);
};

struct E {
    char **unk_00;
    V *unk_04;
    s32 *unk_08;
    s32 *unk_0C;

    void release() {
        s32 *&p = unk_08;
        if (p != NULL) {
            --*unk_0C;
            s32 *q = unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                unk_04->unk_0C(p, q, unk_00);
                func_088B5A98((s32)p, unk_00);
            }
        }
    }

    void copy(const E &arg0) {
        unk_00 = arg0.unk_00;
        unk_04 = arg0.unk_04;
        unk_08 = arg0.unk_08;
        unk_0C = arg0.unk_0C;
        if (*(s32 *volatile *)&unk_08 != NULL) {
            ++*unk_0C;
        }
    }
};

struct S {
    E *unk_00;
    volatile s32 unk_04;
    void append(const E &arg0) {
        E *p = unk_00 + unk_04;
        if (p != NULL) {
            p->copy(arg0);
        }
        ++unk_04;
    }
};

struct F {
    f32 unk_00;
    f32 unk_04;
};

struct O {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x44];
    T *unk_50;
    u8 pad_54[0x28];
    S unk_7C;
    u8 pad_84[0x3C];
    virtual void unk_08v();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual s32 unk_20();
    virtual s32 unk_24();
};

void func_088B56A0(O *arg0, F *arg1) {
    E temp0;
    E temp1;
    F temp2;
    F temp3;
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    if ((u8)arg0->unk_20() == 0 && (u8)arg0->unk_24() == 1U) {
        E *p = arg0->unk_7C.unk_00;
        S *s = &arg0->unk_7C;
        if ((u32)p != (u32)(p + arg0->unk_7C.unk_04)) {
            volatile s32 *n = &arg0->unk_7C.unk_04;
            do {
                if (p != NULL) {
                    if (p != NULL) {
                        p->release();
                    }
                }
                ++p;
            } while (p != s->unk_00 + *n);
        }
        arg0->unk_7C.unk_04 = 0;
        f32 y2 = arg0->unk_00;
        f32 x2 = arg0->unk_08;
        f32 z2 = arg1->unk_04;
        temp2.unk_00 = y2 - x2;
        temp2.unk_04 = z2;
        T *&t = arg0->unk_50;
        func_088BC21C((char *)&temp0, t, &temp2.unk_00);
        f32 y3 = arg0->unk_00;
        f32 x3 = arg0->unk_08;
        f32 z3 = arg1->unk_04;
        temp3.unk_00 = y3 + x3;
        temp3.unk_04 = z3;
        func_088BC21C((char *)&temp1, t, &temp3.unk_00);
        arg0->unk_7C.append(temp0);
        s32 *q = temp1.unk_08;
        s32 v = func_088B8760(temp0.unk_08);
        if (v != func_088B8760(q)) {
            arg0->unk_7C.append(temp1);
        }
        if (temp1.unk_08 != NULL) {
            --*temp1.unk_0C;
            s32 *c = *(s32 *volatile *)&temp1.unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                s32 *q = temp1.unk_0C;
                temp1.unk_04->unk_0C(*(s32 *volatile *)&temp1.unk_08, q, temp1.unk_00);
                func_088B5A98((s32)temp1.unk_08, temp1.unk_00);
            }
        }
        if (temp0.unk_08 != NULL) {
            --*temp0.unk_0C;
            s32 *c = *(s32 *volatile *)&temp0.unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                s32 *q = temp0.unk_0C;
                temp0.unk_04->unk_0C(*(s32 *volatile *)&temp0.unk_08, q, temp0.unk_00);
                func_088B5A98((s32)temp0.unk_08, temp0.unk_00);
            }
        }
    }
}

}
