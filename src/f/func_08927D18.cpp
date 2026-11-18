#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E;

struct N {
    s32 unk_00;
    N *unk_04;
    E *unk_08;
};

struct It {
    N *unk_00;
    int eq1(const It &o) const { int r = 0; if (unk_00->unk_08 == o.unk_00->unk_08 && unk_00->unk_04 == *(N **)&o.unk_00->unk_04) r = 1; return r; }
    int eq(const It &o) const { int r = 0; if (eq1(o) && unk_00->unk_00 == *(s32 *)&o.unk_00->unk_00) r = 1; return r; }
    bool ne(const It &o) const { return !(bool)eq(o); }
};

struct T {
    u8 pad_00[0x1D0];
    N unk_1D0;
    It end() { It r; r.unk_00 = &unk_1D0; return r; }
};

E *func_08927D18(T *arg0, s32 arg1, s32 arg2) {
    It it;
    E *e;

    it.unk_00 = arg0->unk_1D0.unk_04;
    while (it.ne(arg0->end())) {
        e = *(E **)&it.unk_00->unk_08;
        if (e->unk_00 == arg1 && e->unk_04 == arg2) {
            return e;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return NULL;
}

}
