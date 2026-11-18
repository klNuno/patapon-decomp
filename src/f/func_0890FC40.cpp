#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];
} E_0890FC40;

void func_0890F144(E_0890FC40 *, E_0890FC40 *);

inline int less_0890FC40(E_0890FC40 *a, E_0890FC40 *b) {
    int r;
    if (a->unk_04 == b->unk_04) {
        r = a->unk_00 < b->unk_00;
    } else {
        r = a->unk_04 < b->unk_04;
    }
    return r;
}

inline E_0890FC40 *min_0890FC40(E_0890FC40 *first, E_0890FC40 *last) {
    if (first != last) {
        E_0890FC40 *i = first;
        while (++i != last) {
            if (less_0890FC40(i, first)) {
                first = i;
            }
        }
    }
    return first;
}

void func_0890FC40(E_0890FC40 *arg0, E_0890FC40 *arg1) {
    E_0890FC40 *end;
    E_0890FC40 *m;

    if (arg0 != arg1) {
        end = arg1 - 1;
        for (; arg0 < end; arg0++) {
            m = min_0890FC40(arg0, arg1);
            if (m != arg0) {
                func_0890F144(m, arg0);
            }
        }
    }
}

}
