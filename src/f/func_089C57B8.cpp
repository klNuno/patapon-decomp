#include "common.h"

extern "C" {

struct A_089C57B8 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_089C57B8 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_089C57B8 {
    void *unk_00;
    C_089C57B8 unk_04;
};

typedef struct {
    s32 unk_00;
    A_089C57B8 *unk_04;
    void *unk_08;
    s32 *unk_0C;
} H_089C57B8;

struct M_089C57B8 {
    s32 unk_00;
    A_089C57B8 *unk_04;
    SP_089C57B8 unk_08;
};

struct T_089C57B8 {
    u8 pad_00[0x30];
    M_089C57B8 unk_30;
};

typedef struct {
    u32 unk_00;
    s8 unk_04[0x24];
} Str_089C57B8;

typedef struct {
    u8 pad_00[0x1214];
    u8 unk_1214[1];
} S_089C57B8;

void func_0885F7EC(void *, s32);
s32 func_0888AFAC(s32);
void func_08937690(Str_089C57B8 *, s32);
void func_089C5AAC(T_089C57B8 *, Str_089C57B8 *, s32, s32, H_089C57B8 *);
void func_089C52E4(s32 *, void *);
void func_089C5984(void *, s32, T_089C57B8 *);
s32 func_089C603C(S_089C57B8 *, s32);
void func_089C5E74(S_089C57B8 *, s32, s32);
void func_089C5B7C(S_089C57B8 *, s32, s32, s32);

static inline void rel(M_089C57B8 *m) {
    SP_089C57B8 *s = &m->unk_08;
    C_089C57B8 *c;

    if (m->unk_08.unk_00 != NULL) {
        c = &m->unk_08.unk_04;
        if (c->release() == 0) {
            m->unk_04->v1(s->unk_00, *(s32 **)c, m->unk_00);
            func_0885F7EC(s->unk_00, m->unk_00);
        }
    }
}

void func_089C57B8(S_089C57B8 *arg0, s32 arg1, s32 arg2, H_089C57B8 *arg3) {
    s32 s0;
    s32 v;

    s0 = func_0888AFAC(arg2);
    Str_089C57B8 k;
    k.unk_00 = 0;
    func_08937690(&k, arg2);
    H_089C57B8 h;
    {
        volatile u32 *src = (volatile u32 *)arg3;
        u32 *dst = (u32 *)&h;
        u32 t2 = src[2];
        u32 t0 = src[0];
        u32 t1 = src[1];
        u32 t3;
        dst[2] = t2;
        t3 = src[3];
        dst[0] = t0;
        dst[1] = t1;
        dst[3] = t3;
    }
    if (*(void *volatile *)&h.unk_08 != 0) {
        ++**(s32 *volatile *)&h.unk_0C;
    }
    T_089C57B8 t;
    func_089C5AAC(&t, &k, s0, arg1, &h);
    s32 it;
    func_089C52E4(&it, arg0->unk_1214);
    func_089C5984(arg0->unk_1214, it, &t);
    rel(&t.unk_30);
    rel((M_089C57B8 *)&h);
    v = func_089C603C(arg0, s0);
    if (v != 0) {
        func_089C5E74(arg0, v, s0);
    } else {
        func_089C5B7C(arg0, arg1, arg2, s0);
    }
}

}
