#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
} D;

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
} T;

struct N {
    s32 unk_00;
    N *unk_04;
    D *unk_08;

    int eq2(N *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N *o) { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} A;

struct S {
    u8 pad_00[0xE0];
    N unk_E0;
    u8 pad_EC[0x290 - 0xEC];
    A *unk_290;

    N *end() { return &unk_E0; }
};

void func_08882530(s32, T *);
void func_088812A4(T *, s32);

struct It {
    N *p;
    void next() {
        if (p != NULL) {
            p = p->unk_04;
        }
    }
};

void func_08965744(S *arg0, A *arg1) {
    It it;
    T *t;

    arg0->unk_290 = arg1;
    for (it.p = arg0->unk_E0.unk_04; it.p->ne(arg0->end()); it.next()) {
        t = (T *)(*(D **)&it.p->unk_08)->unk_08;
        if (t != NULL) {
            func_08882530(arg1->unk_04, t);
            func_088812A4(t, 0);
            t->unk_78 = 0x80000000;
            t->unk_7C = 0;
        }
    }
}

}
