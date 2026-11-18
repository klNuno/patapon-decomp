#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1364];
    s32 unk_1364;
} X088A9028;

struct N088A9028 {
    s32 unk_00;
    N088A9028 *unk_04;
    X088A9028 **unk_08;
    s32 eq1(N088A9028 *o) {
        s32 r = 0;
        if (*(s32 *)&unk_08 == *(s32 *)&o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(N088A9028 *o) {
        s32 r = 0;
        if (eq1(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N088A9028 *o) { return !(bool)eq(o); }
};

struct It088A9028 {
    N088A9028 *unk_00;
    void inc() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct {
    u8 pad_00[0x25C];
    N088A9028 unk_25C;
    N088A9028 *end() { return &unk_25C; }
} S088A9028;

typedef struct {
    u8 pad_00[0x3B0];
    S088A9028 unk_3B0;
} H088A9028;

typedef struct {
    s32 unk_00;
} I088A9028;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} R088A9028;

typedef struct {
    u8 pad_00[0x3A0];
    H088A9028 *unk_3A0;
    s32 unk_3A4;
    u8 pad_3A8[0x314];
    u8 unk_6BC[4];
} T088A9028;

void func_088A8D78(I088A9028 *, u8 *);
void func_088A8D70(I088A9028 *, u8 *);
void func_088A8DF8(R088A9028 *, u8 *, I088A9028, I088A9028);

void func_088A9028(T088A9028 *arg0) {
    R088A9028 c;
    I088A9028 a;
    I088A9028 b;
    S088A9028 *s;
    N088A9028 *n;
    H088A9028 *h;

    arg0->unk_3A4 = 0;
    func_088A8D78(&a, arg0->unk_6BC);
    func_088A8D70(&b, arg0->unk_6BC);
    func_088A8DF8(&c, arg0->unk_6BC, a, b);
    h = arg0->unk_3A0;
    if (h != NULL) {
        It088A9028 it;
        s = &h->unk_3B0;
        for (it.unk_00 = *(N088A9028 **)&s->unk_25C.unk_04; it.unk_00->ne(s->end()); it.inc()) {
            (*it.unk_00->unk_08)->unk_1364 = 0;
        }
    }
}

}
