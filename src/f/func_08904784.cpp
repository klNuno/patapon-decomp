#include "common.h"

extern "C" {

struct A_088FE994 {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

struct C_088FE994 {
    s32 *unk_00;
    s32 func_00() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 func_04() {
        --*unk_00;
        return func_00();
    }
};

struct SP_088FE994 {
    void *unk_00;
    C_088FE994 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088FE994 *unk_04;
    SP_088FE994 unk_08;
} Obj_088FE994;

typedef struct {
    u8 pad_00[0x50560];
    u8 unk_50560[0x190];
    u8 unk_506F0[4];
} W;

typedef struct {
    u8 pad_00[0x10];
    W *unk_10;
} S;

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_0881A1E0(f32);
f32 func_08819D88(f32);
s32 func_088C648C(void *);
void func_088F31AC(Obj_088FE994 *, u8 *);
void func_088E1204(void *, s32);
void func_088F4618(char *arg0, char *arg1);

void func_08904784(S *arg0, void *arg1) {
    Obj_088FE994 o;
    V a;
    V b;
    T *p;
    SP_088FE994 *s;
    C_088FE994 *c;
    f32 t;

    if (*func_0885356C(arg1, 0, 1, 4) != 0) {
        func_088F31AC(&o, arg0->unk_10->unk_50560);
        if (o.unk_08.unk_00 != NULL) {
            p = (T *)func_088C648C(arg0->unk_10->unk_506F0);
            t = func_0881A1E0(-0.6283185482025146f);
            t /= func_08819D88(-0.6283185482025146f);
            a.unk_00 = -(p->unk_38 * t);
            a.unk_04 = 0.0f;
            func_088F4618((char *)p, (char *)&a);
        }
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->func_04() == 0) {
                o.unk_04->unk_0C(s->unk_00, *(s32 **)c, o.unk_00);
                func_088E1204(s->unk_00, o.unk_00);
            }
        }
    } else {
        p = (T *)func_088C648C(arg0->unk_10->unk_506F0);
        b.unk_00 = 0.0f;
        b.unk_04 = 0.0f;
        func_088F4618((char *)p, (char *)&b);
    }
    func_08852F00(arg1, 0);
}

}
