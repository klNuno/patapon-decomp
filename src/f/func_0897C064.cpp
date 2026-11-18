#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct T0897C064_H {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
    T0897C064_H(const T0897C064_H &o)
        : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
};

struct T0897C064_V {
    T0897C064_H unk_00;
    s32 unk_10;
    s32 unk_14;
};

struct T0897C064_N {
    T0897C064_N *unk_00;
    T0897C064_N *unk_04;
    T0897C064_V unk_08;
};

typedef struct T0897C064_L {
    u8 pad_00[0x8];
    T0897C064_N *unk_08;
    s32 unk_0C;
} T0897C064_L;

void func_0897C064(T0897C064_L *arg0, T0897C064_N *arg1, T0897C064_V *arg2) {
    T0897C064_N *n;
    T0897C064_N *prev;

    n = arg0->unk_08->unk_00;
    if (n != arg0->unk_08) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    new (&n->unk_08) T0897C064_V(*arg2);
}

}
