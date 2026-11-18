#include "common.h"

extern "C" {

class Q_0888390C {
public:
    u8 pad_00[0x14];
    virtual void v08();
    virtual s32 v0C();
};

class V {
public:
    u8 pad_00[0x10];
    virtual void v08();
    virtual void v0C();
    virtual void v10(s32, u32, V *, s32);
};

typedef struct B {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
} B;

typedef struct H {
    u8 pad_00[0xE8];
    V *unk_E8;
} H;

typedef struct T2 {
    u8 pad_00[0xD8];
    u8 unk_D8[0x10];
    V *unk_E8;
    u8 pad_EC[4];
    s32 unk_F0;
    u8 pad_F4[0x14];
    B unk_108;
} T2;

typedef struct T {
    s32 unk_00;
    u8 pad_04[0x100];
    s32 unk_104;
    void *unk_108;
    s32 unk_10C;
} T;

extern void *D_08AD1E28[];
extern s32 D_089F9BC8[];
extern s32 D_089F9BB8[];
extern u8 D_08AD22A1[];
extern char D_089DDF1C[];
H *func_0896CE18(void *, s32, s32, s32);
T2 *func_0896CFE0(H *, s32, s32);
void func_08869030(void *, s32, s32, T2 *, s32, s32);
s32 func_0893E8A8(s32);
void func_0885DE4C(B *);
s32 func_0885DD94(B *, s32, char *, s32);
void func_0881F120(s32, s32, s32);
s32 func_08975570(s32, s32);
Q_0888390C *func_08884388(s32, s32);
void func_08869408(void *, Q_0888390C *, s32);

void func_08884154(s32 arg0, s32 arg1, s32 arg2, T *arg3) {
    void *g;
    void *p;
    s32 n;
    H *h;
    T2 *t;
    V *v;
    s32 f;
    B *b;
    Q_0888390C *q;
    void *d;

    if (D_08AD1E28[0] != NULL) {
        g = D_08AD1E28[0];
    } else {
        g = NULL;
    }
    p = arg3->unk_108;
    n = arg3->unk_104;
    h = func_0896CE18(p, D_089F9BC8[0], 0, 1);
    if (h != NULL) {
        t = func_0896CFE0(h, arg0, arg3->unk_00);
        func_08869030(g, 1, arg3->unk_00, t, n, 0);
        h = func_0896CE18(p, D_089F9BB8[0], 0, 1);
        if (h != NULL) {
            v = h->unk_E8;
            if (v != NULL) {
                f = 0;
                if (func_0893E8A8(arg1) != 0) {
                    b = &t->unk_108;
                    func_0885DE4C(b);
                    b->unk_00 = arg1;
                    b->unk_04 = arg2;
                    b->unk_08 = 0;
                    b->unk_10 = 0;
                    f = 1;
                } else if (D_08AD22A1[0] == 0) {
                    b = &t->unk_108;
                    if (n != 0) {
                        b->unk_0C = n;
                    }
                    if (b->unk_00 == 0) {
                        func_0885DD94(b, arg2, D_089DDF1C, 0x81);
                    }
                    if (arg2 <= b->unk_04) {
                        func_0881F120(b->unk_00, arg1, arg2);
                    }
                } else {
                    b = &t->unk_108;
                    func_0885DE4C(b);
                    b->unk_00 = arg1;
                    b->unk_04 = arg2;
                    b->unk_08 = 0;
                    b->unk_10 = 0;
                }
                q = func_08884388(func_08975570(n, t->unk_108.unk_00), n);
                d = t->unk_D8;
                func_08869408(d, q, n);
                *(s32 *)((u8 *)d + 0x10) = q->v0C();
                t->unk_E8->v10(t->unk_108.unk_00, t->unk_108.unk_04, v, arg3->unk_10C != 0);
                if (f != 0) {
                    func_0885DE4C(&t->unk_108);
                }
                t->unk_F0 = 0xC;
            }
        }
    }
}

}
