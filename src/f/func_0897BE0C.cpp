#include "common.h"

extern "C" {
struct B {
    virtual void unk_08(f32);
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};
struct T : B {
    s32 unk_04, unk_08, unk_0C, unk_10;
    f32 unk_14;
    volatile f32 unk_18;
    u8 pad_1C[0x54];
    s32 unk_70;
};
struct A {
    virtual s32 *unk_08(T *, s32);
    virtual void unk_0C(T *, s32 *, s32);
};
struct P {
    s32 unk_00;
    A *unk_04;
    T *unk_08;
    s32 *unk_0C;
};
struct R { P unk_00; u8 pad_10[8]; };
struct S {
    s32 unk_00;
    u8 pad_04[0x98];
    u8 unk_9C[0x10];
    s32 unk_AC;
};

void *func_08827A50(s32, s32);
s32 func_08827AD4(void);
void func_08920BB4(void *);
namespace N { extern "C" T *func_08920BB4(void *); }
extern s32 func_08924A5C(s32, s32);
void func_08924220(char *, s32);
void func_0897C3F4(f32, void *, s32);
void func_0897C88C(char **, char **);
void func_0897C120(R *, P *, s32, s32);
void func_0897BB74(s32 *, void *);
void func_0897C064(void *, s32, R *);

T *func_0897BE0C(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    P temp;
    R temp2;
    s32 temp3;
    T *p;
    s32 *q;
    s32 temp5 = arg3;
    const s32 &temp4 = arg2;
    func_0897C3F4(0.0f, arg0, arg1);
    p = (T *)func_08827A50(0x80, arg0->unk_00);
    if (p != NULL) {
        p = N::func_08920BB4(p);
    }
    p->unk_20();
    func_08924A5C((s32)p, temp5);
    func_08924220((char *)p, temp4);
    p->unk_70 = 0;
    f32 f = 0.0f;
    if (p->unk_14 != f) {
        p->unk_14 = f;
        f *= p->unk_18;
        ((B *)p)->unk_08(f);
    }
    p->unk_10 = 0;
    p->unk_0C = 0;
    p->unk_08 = 1;
    p->unk_04 = 1;
    f32 g = 1.0f;
    if (p->unk_18 != g) {
        p->unk_18 = g;
        f32 h = p->unk_14;
        h *= p->unk_18;
        ((B *)p)->unk_08(h);
    }
    temp.unk_00 = arg0->unk_00;
    A *a = (temp.unk_04 = (A *)func_08827AD4());
    temp.unk_08 = p;
    temp.unk_0C = a->unk_08(p, *(volatile s32 *)&temp.unk_00);
    *temp.unk_0C = 1;
    func_0897C120(&temp2, &temp, arg1, arg0->unk_AC);
    func_0897BB74(&temp3, &arg0->unk_9C);
    func_0897C064(&arg0->unk_9C, temp3, &temp2);
    if (*(T *volatile *)&temp2.unk_00.unk_08 != NULL) {
        --**(s32 *volatile *)&temp2.unk_00.unk_0C;
        q = *(s32 *volatile *)&temp2.unk_00.unk_0C;
        if ((q != NULL ? *q : 0) == 0) {
            temp2.unk_00.unk_04->unk_0C(temp2.unk_00.unk_08, temp2.unk_00.unk_0C, temp2.unk_00.unk_00);
            func_0897C88C((char **)temp2.unk_00.unk_08, (char **)temp2.unk_00.unk_00);
        }
    }
    if (*(T *volatile *)&temp.unk_08 != NULL) {
        --**(s32 *volatile *)&temp.unk_0C;
        q = *(s32 *volatile *)&temp.unk_0C;
        if ((q != NULL ? *q : 0) == 0) {
            temp.unk_04->unk_0C(temp.unk_08, temp.unk_0C, temp.unk_00);
            func_0897C88C((char **)temp.unk_08, (char **)temp.unk_00);
        }
    }
    ++arg0->unk_AC;
    return p;
}
}
