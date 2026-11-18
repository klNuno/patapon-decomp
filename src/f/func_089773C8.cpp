#include "common.h"

extern "C" {

typedef struct V_089773C8 {
    s32 unk_00;
    s32 unk_04;
} V_089773C8;

typedef struct E_089773C8 {
    u8 pad_00[0xC];
    V_089773C8 *unk_0C;
} E_089773C8;

struct N_089773C8 {
    s32 unk_00;
    N_089773C8 *unk_04;
    E_089773C8 *unk_08;
    s32 eq1(N_089773C8 *o) {
        s32 r = 0;
        if (unk_08 == o->unk_08 && unk_04 == *(N_089773C8 **)&o->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(N_089773C8 *o) {
        s32 r = 0;
        if (eq1(o) && unk_00 == *(s32 *)&o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_089773C8 *o) { return !(bool)eq(o); }
};

struct T_089773C8 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x228];
    N_089773C8 unk_230;
    N_089773C8 *end() { return &unk_230; }
};

s32 func_0885A680(void);

s32 func_089773C8(T_089773C8 *arg0) {
    struct { N_089773C8 *unk_00; } it;
    E_089773C8 *e;

    it.unk_00 = arg0->unk_230.unk_04;
    while (it.unk_00->ne(arg0->end())) {
        e = *(E_089773C8 **)&it.unk_00->unk_08;
        if (e != NULL && e->unk_0C->unk_00 != e->unk_0C->unk_04) {
            arg0->unk_00 = func_0885A680();
            break;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return arg0->unk_00 != arg0->unk_04;
}

}
