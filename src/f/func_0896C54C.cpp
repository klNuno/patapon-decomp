#include "common.h"

extern "C" {

typedef struct T0896C61C_E {
    u32 unk_00;
    u8 pad_04[0x24];
} T0896C61C_E;

void func_0896C3F4(T0896C61C_E *, T0896C61C_E *);

struct L_0896C54C {
    bool operator()(T0896C61C_E *a, T0896C61C_E *b) const { return a->unk_00 < b->unk_00; }
};

inline void med_0896C54C(T0896C61C_E *arg0, T0896C61C_E *arg1, T0896C61C_E *arg2, const L_0896C54C &cmp) {
    bool s = !cmp(arg2, arg0);
    bool t = !cmp(arg1, arg2);

    if (s && t) {
        return;
    }
    if (!s && !t) {
        func_0896C3F4(arg0, arg1);
        return;
    }
    if (cmp(arg1, arg0)) {
        func_0896C3F4(arg0, arg1);
    }
    if (s) {
        func_0896C3F4(arg1, arg2);
    } else {
        func_0896C3F4(arg0, arg2);
    }
}

void func_0896C54C(T0896C61C_E *arg0, T0896C61C_E *arg1, T0896C61C_E *arg2) {
    med_0896C54C(arg0, arg1, arg2, L_0896C54C());
}

}
