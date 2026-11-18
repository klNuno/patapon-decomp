#include "common.h"

extern "C" {

struct N {
    s32 unk_00;
    N *unk_04;
    s32 unk_08;
};

struct T0892E894_I {
    N *unk_00;
};

s32 func_0892E940(void *);

inline int func_0892E894_1(N *a, N *b) {
    int r = 0;
    if (a->unk_08 == b->unk_08 && a->unk_04 == b->unk_04) {
        r = 1;
    }
    return r;
}

inline int func_0892E894_0(N *a, N *b) {
    int r = 0;
    if (func_0892E894_1(a, b) && a->unk_00 == b->unk_00) {
        r = 1;
    }
    return r;
}

inline bool func_0892E894_2(N *a, N *b) { return !(bool)func_0892E894_0(a, b); }

s32 func_0892E894(N *arg0) {
    T0892E894_I it;
    s32 idx;
    s32 i;

    idx = func_0892E940(arg0);
    if (idx >= 0) {
        it.unk_00 = *(N **)&arg0->unk_04;
        i = 0;
        while (func_0892E894_2(it.unk_00, arg0)) {
            if (i == idx) {
                break;
            }
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
            i++;
        }
        return *(s32 *)&it.unk_00->unk_08;
    }
    return 0;
}

}
