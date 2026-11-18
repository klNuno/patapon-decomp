#include "common.h"

extern "C" {

struct N_0885F13C {
    s32 unk_00;
    N_0885F13C *unk_04;
    s32 unk_08;
    int eq4(N_0885F13C *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && *(s32 *)&unk_04 == *(s32 *)&o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0885F13C *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0885F13C *o) { return !(bool)eq(o); }
    bool same(N_0885F13C *o) { return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && *(s32 *)&unk_04 == *(s32 *)&o->unk_04 && *(s32 *)&unk_00 == *(s32 *)&o->unk_00; }
};

N_0885F13C *func_0885F13C(N_0885F13C *arg0, s32 arg1) {
    N_0885F13C *n;

    for (n = arg0->unk_04; n->ne(arg0); ) {
        if (*(s32 *)&n->unk_08 == arg1) {
            break;
        }
        if (n != NULL) {
            n = n->unk_04;
        }
    }
    if (n->same(arg0)) {
        n = NULL;
    }
    return n;
}

}
