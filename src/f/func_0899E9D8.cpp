#include "common.h"

extern "C" {

struct E_0899E9D8 {
    f32 unk_00;
    s32 unk_04;
};

static inline E_0899E9D8 *min_e(E_0899E9D8 *first, E_0899E9D8 *last) {
    E_0899E9D8 *p;
    E_0899E9D8 *m;

    m = first;
    if (first != last) {
        for (p = first + 1; p != last; p++) {
            if (p->unk_00 < m->unk_00) {
                m = p;
            }
        }
    }
    return m;
}

void func_0899E9D8(E_0899E9D8 *arg0, E_0899E9D8 *arg1) {
    E_0899E9D8 *end;
    E_0899E9D8 *m;

    if (arg0 != arg1) {
        end = arg1 - 1;
        for (; arg0 < end; arg0++) {
            m = min_e(arg0, arg1);
            if (m != arg0) {
                E_0899E9D8 temp = *m;
                *m = *arg0;
                *arg0 = temp;
            }
        }
    }
}

}
