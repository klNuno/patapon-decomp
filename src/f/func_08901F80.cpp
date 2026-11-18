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
    u8 pad_00[0x10];
    u8 *unk_10;
} S;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(void *);
void func_088F8B8C(H *, s32, s32);
void func_088F5328(void *, s32);
void func_088F333C(void *, V2 *);
void func_088DDF80(u8 *);

void func_08901F80(S *arg0, void *arg1) {
    H h;
    V2 v;
    s32 *a;
    f32 *b, *c;
    V2 *r;
    C *p;
    f32 x, y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *a);
    y = *c;
    x = *b;
    v.unk_00 = x;
    v.unk_04 = y;
    r = h.unk_08->unk_28();
    v.unk_00 += r->unk_00;
    v.unk_04 += r->unk_04;
    func_088F333C(arg0->unk_10 + 0x50560, &v);
    func_088DDF80(arg0->unk_10);
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        p = &h.unk_0C;
        if (p->unk_08() == 0) {
            h.unk_04->unk_0C(h.unk_08, *(s32 **)p, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
