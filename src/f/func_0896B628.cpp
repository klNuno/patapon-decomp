#include "common.h"

extern "C" {

struct E_0896B628 {
    u32 unk_00;
    s32 unk_04;
};

inline void swap_0896B628(E_0896B628 *a, E_0896B628 *b) {
    u32 k;
    s32 v;

    k = *(u32 *)&a->unk_00;
    a->unk_00 = *(u32 *)&b->unk_00;
    b->unk_00 = k;
    v = a->unk_04;
    a->unk_04 = b->unk_04;
    b->unk_04 = v;
}

void func_0896B628(E_0896B628 *arg0, E_0896B628 *arg1, E_0896B628 *arg2) {
    u8 x;
    u8 y;
    u32 a;
    u32 b;
    u32 c;

    a = arg0->unk_00;
    c = arg2->unk_00;
    b = arg1->unk_00;
    x = !(c < a);
    y = !(b < c);
    if (x && y) {
        return;
    }
    if (!x && !y) {
        swap_0896B628(arg0, arg1);
        return;
    }
    if (b < a) {
        swap_0896B628(arg0, arg1);
    }
    if (x) {
        swap_0896B628(arg1, arg2);
    } else {
        swap_0896B628(arg0, arg2);
    }
}

}
