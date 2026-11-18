#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04;
} V2;

struct A {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

class T {
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
    virtual V2 *unk_28();
};

struct C {
    s32 *unk_00;
    s32 unk_04() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 unk_08() {
        --*unk_00;
        return unk_04();
    }
};

typedef struct {
    s32 unk_00;
    A *unk_04;
    T *unk_08;
    C unk_0C;
} H;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08901694;

typedef struct {
    u8 pad_00[0x404];
    E08901694 *unk_404;
    s32 unk_408;
} O08901694;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08901694;

typedef struct {
    u8 pad_00[0x10];
    W08901694 *unk_10;
} T08901694;

typedef struct {
    f32 unk_00, unk_04, unk_08;
} F08901694;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08901694 **);
void func_088F9778(void *, F08901694 *, s32);
s32 func_088F9858(void *);
void func_088F8B8C(H *, s32, s32);
void func_088F5328(void *, s32);

void func_0890192C(T08901694 *arg0, void *arg1) {
    O08901694 *o;
    H h;
    F08901694 t;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    s32 w;
    E08901694 *p;
    E08901694 *end;
    void *v;
    V2 *r;
    C *q;
    f32 x, y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    func_088F8B8C(&h, w, *b);
    y = *d;
    x = *c;
    t.unk_00 = x;
    t.unk_04 = y;
    r = h.unk_08->unk_28();
    t.unk_00 += r->unk_00;
    t.unk_04 += r->unk_04;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                func_088F9778(v, &t, func_088F9858(v));
            }
        }
    }
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        q = &h.unk_0C;
        if (q->unk_08() == 0) {
            h.unk_04->unk_0C(h.unk_08, *(s32 **)q, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
