#include "common.h"

extern "C" {

struct E_0893120C {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    E_0893120C(const E_0893120C &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {}
    E_0893120C &operator=(const E_0893120C &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        return *this;
    }
};

static inline bool lt_0893120C(const E_0893120C &x, const E_0893120C &y) {
    return x.unk_04 < y.unk_04;
}

static inline void sw_0893120C(E_0893120C &a, E_0893120C &b) {
    E_0893120C t = a;
    a = b;
    b = t;
}

void func_0893120C(E_0893120C *arg0, E_0893120C *arg1, E_0893120C *arg2) {
    bool a = !lt_0893120C(*arg2, *arg0);
    bool b = !lt_0893120C(*arg1, *arg2);

    if (a && b) {
        return;
    }
    if (!a && !b) {
        sw_0893120C(*arg0, *arg1);
        return;
    }
    if (lt_0893120C(*arg1, *arg0)) {
        sw_0893120C(*arg0, *arg1);
    }
    if (a) {
        sw_0893120C(*arg1, *arg2);
    } else {
        sw_0893120C(*arg0, *arg2);
    }
}

}
