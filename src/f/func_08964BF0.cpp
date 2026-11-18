#include "common.h"

extern "C" {

class A {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

class B {
public:
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(void *, s32 *, s32);
};

struct C {
    s32 unk_00;
    B *unk_04;
    void *unk_08;
    s32 *unk_0C;
};

class D {
public:
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
};

struct E : D {
    u8 pad_0C[0x24];
    A unk_30;
    u8 pad_34[0x12C];
    A unk_160;
};

struct S_0887FF9C;

void *func_08827A50(s32, s32);
B *func_08827AD4();
S_0887FF9C *func_0887FF9C(S_0887FF9C *arg0);
void func_088D28F8(void *, s32);
void *func_0895A890(void *, s32);
void func_0896336C(void *, void *);
void func_089633C4(void *, void *);
void func_089633CC(void *);
void func_08963760(void *);
void func_08963880(void *);
void func_08963890(void *);
void func_08963BBC(void *, void *);
void func_08963C14(void *, void *);
void func_08963C1C(void *);
void func_08963FB0(void *);
void func_089640D0(void *);
void func_089640E0(void *);
void func_08964FB0(void *, C *);
void *func_089650AC(void *);
void func_089652E4(void *, C *);
void *func_089653E0(void *);
void func_08965E70(void *, s32);

void func_08964BF0(E *arg0) {
    volatile C a;
    volatile C b;
    u8 *p = (u8 *)arg0;
    s32 n;

    func_089640E0(p + 0x108);
    func_089640E0(p + 0xE0);
    func_089640D0(p + 0x40);
    func_08963FB0(p + 0xE0);
    func_08963FB0(p + 0x108);
    {
        s32 i;
        u8 *s;
        u8 *q;
        u8 *r;
        q = p + 0x30;
        i = 0;
        r = q;
        do {
            s = q + 0x50;
            func_08963C1C(s);
            func_08963C14(s, r + 0x20);
            func_08963BBC(p + 0x108, s);
            ++i;
            q += 0x20;
            r += 0x10;
        } while (i < 3);
    }
    func_089640E0(p + 0x108);
    n = arg0->unk_30.unk_0C();
    if (n < arg0->unk_30.unk_10()) {
        do {
            s32 k = arg0->unk_00;
            void *t = func_08827A50(0xA0, k);
            if (t != NULL) {
                t = func_0887FF9C((S_0887FF9C *)t);
            }
            a.unk_00 = k;
            B *u = (a.unk_04 = func_08827AD4());
            a.unk_08 = t;
            s32 *v = u->unk_08(t, a.unk_00);
            a.unk_0C = v;
            *v = 1;
            void *w = func_089653E0(&arg0->unk_30);
            if (w != NULL) {
                func_089652E4(w, (C *)&a);
            }
            if (a.unk_08 != NULL) {
                --*a.unk_0C;
                s32 *x = a.unk_0C;
                if ((x != NULL ? *x : 0) == 0) {
                    B *y = a.unk_04;
                    s32 z = a.unk_00;
                    void *temp = a.unk_08;
                    y->unk_0C(temp, x, z);
                    z = a.unk_00;
                    temp = a.unk_08;
                    func_088D28F8(temp, z);
                }
            }
            n = arg0->unk_30.unk_0C();
        } while (n < arg0->unk_30.unk_10());
    }
    func_08963890(p + 0x238);
    func_08963890(p + 0x210);
    func_08963880(p + 0x170);
    func_08963760(p + 0x210);
    func_08963760(p + 0x238);
    {
        s32 i;
        u8 *s;
        u8 *q;
        u8 *r;
        q = p + 0x160;
        i = 0;
        r = q;
        do {
            s = q + 0x50;
            func_089633CC(s);
            func_089633C4(s, r + 0x20);
            func_0896336C(p + 0x238, s);
            ++i;
            q += 0x20;
            r += 0x10;
        } while (i < 3);
    }
    func_08963890(p + 0x238);
    n = arg0->unk_160.unk_0C();
    if (n < arg0->unk_160.unk_10()) {
        do {
            s32 k = arg0->unk_00;
            void *t = func_08827A50(0x60, k);
            if (t != NULL) {
                t = func_0895A890(t, arg0->unk_00);
            }
            b.unk_00 = k;
            B *u = (b.unk_04 = func_08827AD4());
            b.unk_08 = t;
            s32 *v = u->unk_08(t, b.unk_00);
            b.unk_0C = v;
            *v = 1;
            void *w = func_089650AC(&arg0->unk_160);
            if (w != NULL) {
                func_08964FB0(w, (C *)&b);
            }
            if (b.unk_08 != NULL) {
                --*b.unk_0C;
                s32 *x = b.unk_0C;
                if ((x != NULL ? *x : 0) == 0) {
                    B *y = b.unk_04;
                    s32 z = b.unk_00;
                    void *temp = b.unk_08;
                    y->unk_0C(temp, x, z);
                    z = b.unk_00;
                    temp = b.unk_08;
                    func_08965E70(temp, z);
                }
            }
            n = arg0->unk_160.unk_0C();
        } while (n < arg0->unk_160.unk_10());
    }
    arg0->unk_2C();
    arg0->unk_04 = 1;
}

}
