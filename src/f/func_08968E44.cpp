#include "common.h"

extern "C" {

struct N_08968E44 {
    s32 unk_00;
    N_08968E44 *unk_04;
    s32 unk_08;
    s32 eq1(N_08968E44 *o) {
        s32 r = 0;
        if (unk_08 == o->unk_08 && unk_04 == *(N_08968E44 **)&o->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(N_08968E44 *o) {
        s32 r = 0;
        if (eq1(o) && unk_00 == *(s32 *)&o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08968E44 *o) { return !(bool)eq(o); }
    bool same(N_08968E44 *o) { return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && *(N_08968E44 **)&unk_04 == *(N_08968E44 **)&o->unk_04 && *(s32 *)&unk_00 == *(s32 *)&o->unk_00; }
};

N_08968E44 *func_08968E44(N_08968E44 *arg0, s32 arg1) {
    N_08968E44 *p = arg0->unk_04;

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
