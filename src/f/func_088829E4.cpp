#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x78];
    u32 unk_78;
} O_088829E4;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
} R_088829E4;

struct N_088829E4 {
    s32 unk_00;
    N_088829E4 *unk_04;
    O_088829E4 *unk_08;

    int eq2(N_088829E4 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_088829E4 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_088829E4 *o) { return !(bool)eq(o); }
};

struct S_088829E4 {
    u8 pad_00[0x30];
    N_088829E4 unk_30;
    N_088829E4 *end() { return &unk_30; }
};

void func_088810BC(O_088829E4 *, R_088829E4 *);

bool func_088829E4(S_088829E4 *arg0, R_088829E4 *arg1, u32 arg2) {
    struct {
        N_088829E4 *unk_00;
    } it;
    struct {
        N_088829E4 *unk_00;
    } e;
    O_088829E4 *o;


    e.unk_00 = arg0->end();
    it.unk_00 = arg0->unk_30.unk_04;
    arg1->unk_38 = 0;
    for (; it.unk_00->ne(e.unk_00);) {
        o = *(O_088829E4 **)&it.unk_00->unk_08;
        if (o->unk_78 == (o->unk_78 & arg2)) {
            func_088810BC(o, arg1);
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return arg1->unk_38 != 0;
}

}
