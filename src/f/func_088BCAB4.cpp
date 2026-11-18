#include "common.h"

extern "C" {

void *func_08807190(s32, void *);
void func_0881F120(void *, void *, u32);
u32 func_08822BC4(s8 *);
void func_0886A528(void *, void *);
void *func_088BCC58(void *, void *);
void *func_088BCC70(void *);
void func_088CAC40(void *, s32);
s8 *func_088CB040(s32);
extern s8 D_089FB5BC[];

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
} K;

struct Str {
    u32 unk_00;
    s8 unk_04[0x28];

    Str() {
        unk_00 = 0;
        unk_04[unk_00] = D_089FB5BC[0];
    }
    int in(s8 *p) {
        if (p < unk_04 || (s8 *)(unk_00 + (u32)this + 4) <= p) return 0; return 1;
    }
    void assign(Str *o) {
        u32 n = o->unk_00;
        if (n > 0x24U) {
            n = 0x24;
        }
        if (this != o) {
            func_0881F120(unk_04, o->unk_04, n);
            unk_00 = n;
            unk_04[n] = D_089FB5BC[0];
        }
    }
    Str *assign(s8 *p, u32 len) {
        if (in(p)) {
            assign(this);
            return this;
        }
        func_0881F120(unk_04, p, len);
        unk_00 = len;
        unk_04[len] = D_089FB5BC[0];
        return this;
    }

};

struct E {
    Str unk_00;
    Str unk_2C;
    K *unk_58;
    s32 unk_5C;

    E() {
        unk_58 = 0;
    }
};

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x3004];
    E *unk_3008;
    s32 unk_300C;
} A;

static inline int ok(K *k) {
    if (k != NULL && k->unk_00 == 0x2E475858) return 1;
    return 0;
}

void func_088BCAB4(A *arg0, K *arg1, s32 arg2, s32 arg3) {
    E *e;
    s32 n;
    void *p;

    if (ok(arg1)) {
        func_088CAC40(arg1, arg3);
        {
            E t;
            p = func_08807190(0x60, func_088BCC58(arg0->unk_04, func_088BCC70(arg0->unk_04)));
            if (p != NULL) {
                func_0886A528(p, &t);
            }
        }
        n = ++arg0->unk_300C;
        e = arg0->unk_3008 + n - 1;
        e->unk_58 = arg1;
        e->unk_5C = arg2;
        {
            s8 *q = func_088CB040(e->unk_58->unk_10);
            e->unk_00.assign(q, func_08822BC4(q));
        }
        e->unk_2C.assign(&e->unk_00);
    }
}

}
