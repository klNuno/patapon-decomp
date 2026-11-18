#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xAC];
    s32 unk_AC;
} O_0885F234;

struct N_0885F234 {
    s32 unk_00;
    N_0885F234 *unk_04;
    O_0885F234 *unk_08;

    int eq2(N_0885F234 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0885F234 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0885F234 *o) { return !(bool)eq(o); }
};

struct S_0885F234 {
    u8 pad_00[0x9820];
    N_0885F234 unk_9820;
    N_0885F234 *end() { return &unk_9820; }
};

s32 func_0885F234(S_0885F234 *arg0) {
    struct {
        N_0885F234 *unk_00;
    } it;
    N_0885F234 *e;

    it.unk_00 = arg0->unk_9820.unk_04;
    e = arg0->end();
    for (; it.unk_00->ne(e);) {
        if ((*(O_0885F234 **)&it.unk_00->unk_08)->unk_AC != 0) {
            return 1;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return 0;
}

}
