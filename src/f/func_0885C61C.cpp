#include "common.h"

extern "C" {

struct N_0885C61C {
    s32 unk_00;
    N_0885C61C *unk_04;
    s32 *unk_08;

    s32 eqTail(const N_0885C61C &o) const {
        s32 r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N_0885C61C &o) const {
        s32 r = 0;
        if (eqTail(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_0885C61C &o) const {
        return !(bool)eq(o);
    }
};

struct It_0885C61C {
    N_0885C61C *unk_00;

    s32 *get() { return unk_00->unk_08; }
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct {
    u8 unk_00[0x20];
} E_0885C61C;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0xC];
    s32 unk_1C[0x88];
    E_0885C61C unk_23C[0x88];
} S_0885C61C;

struct O_0885C61C {
    u8 pad_00[0x80];
    S_0885C61C unk_80;
    N_0885C61C unk_13BC;
    u8 pad_13C8[0x13E4 - 0x13C8];
    u8 unk_13E4[0x1440 - 0x13E4];
    s32 unk_1440;

    N_0885C61C *end() { return &unk_13BC; }
};

void func_0885BDE8(void *, E_0885C61C *);
void func_0885BE40(E_0885C61C *, s32 *);
void func_0885BE48(E_0885C61C *);
void func_0885C090(void *);
void func_0885C188(void *);
s32 func_0885C198(void *);
void func_0885D5EC(s32, s32);

void func_0885C61C(O_0885C61C *arg0) {
    It_0885C61C it;
    s32 i;
    S_0885C61C *s;
    E_0885C61C *e;

    it.unk_00 = arg0->unk_13BC.unk_04;
    for (; it.unk_00->ne(*arg0->end()); it.next()) {
        if (*it.get() != 0) {
            func_0885D5EC(*it.get(), arg0->unk_1440);
        }
    }
    func_0885C198(arg0->unk_13E4);
    func_0885C198(&arg0->unk_13BC);
    func_0885C188(arg0->unk_80.unk_10);
    func_0885C090(&arg0->unk_13BC);
    func_0885C090(arg0->unk_13E4);
    for (i = 0, s = &arg0->unk_80; i < 0x88; i++) {
        e = &s->unk_23C[i];
        func_0885BE48(e);
        func_0885BE40(e, &s->unk_1C[i]);
        func_0885BDE8(arg0->unk_13E4, e);
    }
    func_0885C198(arg0->unk_13E4);
}

}
