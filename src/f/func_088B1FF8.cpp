#include "common.h"

extern "C" {

struct P088B1FF8 {
    s16 unk_00;
    s16 unk_02;
};

struct A088B1FF8 {
    P088B1FF8 unk_00[16];
};

struct C088B1FF8 {
    u8 unk_00[4];
};

struct B088B1FF8 {
    A088B1FF8 unk_00;
    C088B1FF8 unk_40;
    s32 unk_44;
    s32 unk_48;

    B088B1FF8 &operator=(const B088B1FF8 &o) {
        unk_00 = o.unk_00;
        unk_40 = o.unk_40;
        unk_44 = o.unk_44;
        unk_48 = o.unk_48;
        return *this;
    }
};

struct E088B1FF8 {
    u32 unk_00;
    B088B1FF8 unk_04;
};

inline E088B1FF8 *min_088B1FF8(E088B1FF8 *first, E088B1FF8 *last) {
    E088B1FF8 *m = first;
    if (first != last) {
        E088B1FF8 *p = first + 1;
        for (; p != last; p++) {
            if (p->unk_00 < m->unk_00) {
                m = p;
            }
        }
    }
    return m;
}

void func_088B1FF8(E088B1FF8 *first, E088B1FF8 *last) {
    E088B1FF8 *m;

    if (first == last) {
        return;
    }
    for (; first < last - 1; first++) {
        m = min_088B1FF8(first, last);
        if (m != first) {
            u32 k = m->unk_00;
            m->unk_00 = first->unk_00;
            first->unk_00 = k;
            B088B1FF8 t = m->unk_04;
            m->unk_04 = first->unk_04;
            first->unk_04 = t;
        }
    }
}

}
