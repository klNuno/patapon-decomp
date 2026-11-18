#include "common.h"

extern "C" {

struct T {
    f32 unk_00;
    f32 unk_04;
};

class V {
    u8 pad_00[0x28];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual T *unk_28();
};

struct R {
    virtual void unk_08();
    virtual void unk_0C(V *, s32 *, s32);
};

struct H {
    s32 unk_00;
    R *unk_04;
    V *unk_08;
    s32 *unk_0C;
};

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} E_08900C4C;

typedef struct {
    u8 pad_00[0x404];
    E_08900C4C *unk_404;
    s32 unk_408;
} O_08900C4C;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08900C4C;

typedef struct {
    u8 pad_00[0x10];
    W_08900C4C *unk_10;
} T_08900C4C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6454(u8 *);
s32 func_088C6464(void *);
void func_088E44CC(char *arg0, char *arg1, s32 arg2);
void func_088E478C(void *, s32);
s32 func_088F8DCC(s32, s32, O_08900C4C **);
void func_0890A238(void *, s32, s32, f32 *, f32);

void func_089010BC(T_08900C4C *arg0, void *arg1) {
    H h;
    O_08900C4C *o;
    union { f32 unk_00[2]; f64 unk_00_f64; } temp;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    f32 *e;
    f32 *f;
    f32 *g;
    T *p;
    s32 w;
    E_08900C4C *it;
    E_08900C4C *end;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = (f32 *)func_0885356C(arg1, 6, 1, 4);
    func_088E44CC((char *)&h, (char *)func_088C6454(arg0->unk_10->unk_506F0), *d);
    p = h.unk_08->unk_28();
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        it = o->unk_404;
        end = it + o->unk_408;
        for (; it != end; it++) {
            if (it->unk_08 != NULL) {
                f32 y = p->unk_04 + *f;
                f32 x = p->unk_00 + *e;
                temp.unk_00[0] = x;
                temp.unk_00[1] = y;
                func_0890A238(it->unk_08 + 0x3F0, *b, *c, temp.unk_00, *g);
            }
        }
    }
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        --*h.unk_0C;
        if ((h.unk_0C != NULL ? *h.unk_0C : 0) == 0) {
            s32 *q = *(s32 **)(u8 *)&h.unk_0C;
            h.unk_04->unk_0C(h.unk_08, q, h.unk_00);
            func_088E478C(*(V **)&h.unk_08, h.unk_00);
        }
    }
}

}
