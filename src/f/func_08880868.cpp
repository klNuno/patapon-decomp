#include "common.h"

extern "C" {

struct N_08880868 {
    N_08880868 *unk_00;
    N_08880868 *unk_04;
    s32 unk_08;
    int eq4(N_08880868 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08880868 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08880868 *o) { return !(bool)eq(o); }
};

struct A_08880868 {
    u8 unk_00;
};

typedef struct {
    N_08880868 *unk_00;
    A_08880868 unk_04;
} P_08880868;

struct It_08880868 {
    N_08880868 *unk_00;
    It_08880868 postinc() {
        It_08880868 r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_08880868;

typedef struct {
    N_08880868 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_08880868;

void func_08880484(s32 *, s32 *, s32);
void *func_0888074C(R_08880868 *);
void func_08880530(void *, void *);
void func_0888073C(A_08880868 *, P_08880868 *);

struct E_08880868 {
};

inline void wrap(H_08880868 *h, R_08880868 *r, const E_08880868 &) {
    func_08880530(h, func_0888074C(r));
}

typedef struct {
    u8 pad_00[0x70];
    s32 unk_70;
} T_08880868;

void func_08882480(s32, s32);

void func_08880868(T_08880868 *arg0, H_08880868 *arg1) {
    It_08880868 e;
    It_08880868 t;
    A_08880868 a;
    A_08880868 b;
    It_08880868 it;
    P_08880868 p;
    R_08880868 r;
    s32 x;
    b = a;
    it.unk_00 = arg1->unk_00.unk_04;
    e.unk_00 = &arg1->unk_00;
    while (it.unk_00->ne(e.unk_00)) {
        x = *(s32 *)&it.unk_00->unk_08;
        t.unk_00 = it.unk_00;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        p.unk_00 = t.unk_00;
        p.unk_04 = b;
        func_08880484(&r.unk_00, (s32 *)&p, 0);
        wrap(arg1, &r, E_08880868());
        func_0888073C(&a, &p);
        func_08882480(arg0->unk_70, x);
    }
}

}
