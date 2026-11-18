#include "common.h"

extern "C" {

struct E_0899E898 {
    f32 unk_00;
    s32 unk_04;
};

struct L_0899E898 {
    bool operator()(const E_0899E898 &a, const E_0899E898 &b) const {
        return a.unk_00 < b.unk_00;
    }
};

inline void swp_0899E898(E_0899E898 *a, E_0899E898 *b) {
    E_0899E898 t = *a;
    *a = *b;
    *b = t;
}

void func_0899E898(E_0899E898 *arg0, E_0899E898 *arg1, E_0899E898 *arg2, L_0899E898 lt_0899E898) {
    bool x = !lt_0899E898(*arg2, *arg0);
    bool y = !lt_0899E898(*arg1, *arg2);

    if (x && y) {
        return;
    }
    if (!x && !y) {
        swp_0899E898(arg0, arg1);
        return;
    }
    if (lt_0899E898(*arg1, *arg0)) {
        swp_0899E898(arg0, arg1);
    }
    if (x) {
        swp_0899E898(arg1, arg2);
    } else {
        swp_0899E898(arg0, arg2);
    }
}

}
