#include "common.h"

extern "C" {

struct N {
    s32 unk_00;
    N *unk_04;
    s32 unk_08;
};

struct T0892E524_I {
    N *unk_00;
};

void func_088D4DA4(s32);
void func_0892E1E8(void *);
void func_0892E5CC(void *);

inline int func_0892E524_1(N *a, N *b) {
    int r = 0;
    if (a->unk_08 == b->unk_08 && a->unk_04 == b->unk_04) {
        r = 1;
    }
    return r;
}

inline int func_0892E524_0(N *a, N *b) {
    int r = 0;
    if (func_0892E524_1(a, b) && a->unk_00 == b->unk_00) {
        r = 1;
    }
    return r;
}

inline bool func_0892E524_2(N *a, N *b) { return !(bool)func_0892E524_0(a, b); }

void func_0892E524(N *arg0) {
    T0892E524_I it;

    it.unk_00 = arg0->unk_04;
    while (func_0892E524_2(it.unk_00, arg0)) {
        func_088D4DA4(*(s32 *)&it.unk_00->unk_08);
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    func_0892E5CC(arg0);
    func_0892E1E8((u8 *)arg0 + 0x30);
}

}
