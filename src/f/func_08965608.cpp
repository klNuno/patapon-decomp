#include "common.h"

extern "C" {

struct E {};

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} E_08965608;

struct N_08965608 {
    s32 unk_00;
    N_08965608 *unk_04;
    E_08965608 *unk_08;

    s32 eqTail(const N_08965608 &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N_08965608 &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_08965608 &o) const {
        return !(bool)eq(o);
    }
};

struct It_08965608 {
    N_08965608 *unk_00;

    It_08965608() {}
    It_08965608(N_08965608 *p) : unk_00(p) {}

    E_08965608 *get(const E &) { return unk_00->unk_08; }
    bool ne(const It_08965608 &o) { return !(bool)unk_00->eq(*o.unk_00); }
    It_08965608 &operator=(const It_08965608 &o) {
        unk_00 = o.unk_00;
        return *this;
    }
    It_08965608 operator++(int) {
        It_08965608 t = *this;
        next();
        return t;
    }
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} G_08965608;

struct O_08965608 {
    u8 pad_00[0xE0];
    N_08965608 unk_E0;
    u8 pad_EC[0x210 - 0xEC];
    N_08965608 unk_210;
    u8 pad_21C[0x290 - 0x21C];
    G_08965608 *unk_290;

    It_08965608 begin1() { return It_08965608(unk_E0.unk_04); }
    It_08965608 begin2() { return It_08965608(unk_210.unk_04); }
    It_08965608 end1() { return It_08965608(&unk_E0); }
    It_08965608 end2() { return It_08965608(&unk_210); }
};

void func_088825A4(s32, void *);
void func_0895A994(void *);

void func_08965608(O_08965608 *arg0) {
    if (arg0->unk_290 != NULL) {
        for (It_08965608 it = arg0->begin1(); it.ne(arg0->end1()); it++) {
            if (it.get(E())->unk_08 != NULL) {
                func_088825A4(arg0->unk_290->unk_04, it.get(E())->unk_08);
            }
        }
        for (It_08965608 it2 = arg0->begin2(); it2.ne(arg0->end2()); it2++) {
            func_0895A994(it2.get(E())->unk_08);
        }
        arg0->unk_290 = NULL;
    }
}

}
