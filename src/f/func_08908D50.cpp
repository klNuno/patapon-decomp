#include "common.h"

extern "C" {

class A {
public:
    virtual s32 *v08(void *, s32);
    virtual void v0C(void *, s32 *, s32);
};

void func_088DF528(void *, s32);

struct B {
    u8 pad_00[0x10240];
    s32 unk_10240;
};

struct H {
    s32 unk_00;
    A *unk_04;
    void *unk_08;
    s32 *unk_0C;

    s32 func_00() { return unk_0C != NULL ? *unk_0C : 0; }

    void func_04() {
        void *&p = unk_08;
        if (p != NULL) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (func_00() == 0) {
                unk_04->v0C(p, c, unk_00);
                func_088DF528(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S;

typedef struct {
    u8 pad_00[0x20];
} T;

void *func_08807190(s32, void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
u8 func_088533F8(void *, s32);
void func_08908108(H *, void *);
void func_0890903C(T *, void *, char *);
void *func_089090B8(void *, s32, void *, u8 *, u8 *, s32 *);
void func_08909114(s32, char *, u8 *, s32 *, T *);
void func_089091C4(T *, void *, char *);
void *func_08909240(void *, s32, void *, u8 *, u8 *, s32 *);
void *func_0890929C(void *, s32);
extern char D_089FE428[];
extern char D_089FF848[];
extern char D_089FF854[];

void func_08908D50(S *arg0, void *arg1) {
    H h0;
    H h1;
    s32 n0;
    T t0;
    s32 n1;
    T t1;
    s32 *p0;
    s32 *p1;
    s32 *p2;
    s32 *p3;
    s32 a;
    s32 b;
    u8 *c;
    u8 *d;
    B *p;
    void *q;

    p0 = func_0885356C(arg1, 0, 1, 4);
    p1 = func_0885356C(arg1, 1, 0, 4);
    p2 = func_0885356C(arg1, 2, 0, 4);
    p3 = func_0885356C(arg1, 3, 1, 4);
    a = *func_0885356C(arg1, 4, 0, 4);
    b = *p0;
    c = func_08852BA8(arg1) + *p1;
    d = func_08852BA8(arg1) + *p2;
    if ((func_088533F8(arg1, 3) & 0x70) != 0) {
        func_08908108(&h0, arg0->unk_10);
        p = (B *)h0.unk_08;
        n0 = a;
        q = func_08807190(0x30, func_0890929C(p, 1));
        if (q != NULL) {
            q = func_08909240(q, p->unk_10240, p, c, d, p3);
        }
        func_089091C4(&t0, q, D_089FF848);
        func_08909114(b, D_089FE428, d, &n0, &t0);
        h0.func_04();
    } else {
        func_08908108(&h1, arg0->unk_10);
        p = (B *)h1.unk_08;
        n1 = a;
        q = func_08807190(0x30, func_0890929C(p, 1));
        if (q != NULL) {
            q = func_089090B8(q, p->unk_10240, p, c, d, p3);
        }
        func_0890903C(&t1, q, D_089FF854);
        func_08909114(b, D_089FE428, d, &n1, &t1);
        h1.func_04();
    }
    func_08852F00(arg1, 0);
}

}
