#include "common.h"

extern "C" {

struct N_08894500 {
    s32 unk_00;
    N_08894500 *unk_04;
    s32 unk_08;

    int eq2(N_08894500 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == *(N_08894500 **)&o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08894500 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08894500 *o) { return !(bool)eq(o); }
    bool same(N_08894500 *o) { return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && unk_04 == *(N_08894500 **)&o->unk_04 && unk_00 == *(s32 *)&o->unk_00; }
};

N_08894500 *func_08894500(N_08894500 *arg0, s32 arg1) {
    N_08894500 *p = arg0->unk_04;

    while (p->ne(arg0)) {
        if (*(s32 *)&p->unk_08 == arg1) {
            break;
        }
        if (p != NULL) {
            p = p->unk_04;
        }
    }
    if (p->same(arg0)) {
        p = NULL;
    }
    return p;
}

}
