#include "common.h"

extern "C" {

struct N0886E614 {
    N0886E614 *unk_00;
    bool ne(N0886E614 *o) { return !(this == o); }
};

struct L0886E614 {
    N0886E614 *unk_00;
    u32 size() {
        u32 c;
        N0886E614 *n;
        for (n = unk_00, c = 0; n->ne((N0886E614 *)this); n = n->unk_00) {
            c++;
        }
        return c;
    }
};

struct V0886E614 {
    u8 *unk_00;
    u8 *at(u32 i) { return unk_00 + i; }
};

typedef struct {
    u8 pad_00[0xA4];
    V0886E614 unk_A4;
    u8 pad_A8[0x1888];
    L0886E614 unk_1930;
} T0886E614;

s32 func_0886E580(T0886E614 *);
void func_0886F33C(T0886E614 *, s32, s32);

s32 func_0886E614(T0886E614 *arg0) {
    s32 r;
    u32 i;
    V0886E614 *v;

    r = func_0886E580(arg0);
    i = 0;
    v = &arg0->unk_A4;
    for (; i < arg0->unk_1930.size(); i++) {
        u8 *b = v->at(i);
        if (*b != 0) {
            *b = 0;
            func_0886F33C(arg0, i, 3);
            break;
        }
    }
    switch (r) {
    case 0x10000:
        break;
    case 0x10001:
        func_0886F33C(arg0, -2, 3);
        break;
    case 0x10002:
        return 0x10001;
    }
    return 0x10000;
}

}
