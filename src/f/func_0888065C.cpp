#include "common.h"

extern "C" {

struct N_0888065C {
    N_0888065C *unk_00;
    N_0888065C *unk_04;
    s32 unk_08;
    int eq4(N_0888065C *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0888065C *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0888065C *o) { return !(bool)eq(o); }
};

struct A_0888065C {
    u8 unk_00;
};

typedef struct {
    N_0888065C *unk_00;
    A_0888065C unk_04;
} P_0888065C;

struct It_0888065C {
    N_0888065C *unk_00;
    It_0888065C postinc() {
        It_0888065C r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_0888065C;

typedef struct {
    N_0888065C unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_0888065C;

void func_08880484(s32 *, s32 *, s32);
void *func_0888074C(R_0888065C *);
void func_08880530(void *, void *);
void func_0888073C(A_0888065C *, P_0888065C *);

struct E_0888065C {
};

inline void wrap(H_0888065C *h, R_0888065C *r, const E_0888065C &) {
    func_08880530(h, func_0888074C(r));
}

void func_0888065C(H_0888065C *arg0) {
    It_0888065C e;
    It_0888065C t;
    A_0888065C a;
    A_0888065C b;
    It_0888065C it;
    P_0888065C p;
    R_0888065C r;
    b = a;
    it.unk_00 = arg0->unk_00.unk_04;
    e.unk_00 = &arg0->unk_00;
    while (it.unk_00->ne(e.unk_00)) {
    t.unk_00 = it.unk_00;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        p.unk_00 = t.unk_00;
        p.unk_04 = b;
        func_08880484(&r.unk_00, (s32 *)&p, 0);
        wrap(arg0, &r, E_0888065C());
        func_0888073C(&a, &p);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
