#include "common.h"

extern "C" {

struct T0895ABE0 {
    s32 unk_00;
    T0895ABE0 *unk_04;
    s32 unk_08;
    s32 eq1(T0895ABE0 *o) {
        s32 r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(T0895ABE0 *o) {
        s32 r = 0;
        if (eq1(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(T0895ABE0 *o) { return !(bool)eq(o); }
    bool same(T0895ABE0 *o) { return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && *(s32 *)&unk_04 == *(s32 *)&o->unk_04 && unk_00 == o->unk_00; }
};

T0895ABE0 *func_0895ABE0(T0895ABE0 *arg0, s32 arg1) {
    T0895ABE0 *n;

    for (n = *(T0895ABE0 **)&arg0->unk_04; n->ne(arg0); ) {
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
