#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];
} E;

typedef struct {
    u8 pad_00[4];
    E *unk_04;
} P;

void func_0890F144(E *, E *);
void func_0890F784(E *, E *);
s32 func_0890FC14(P *, E *);

static inline int lt(E *a, E *b) {
    int r;
    if (a->unk_04 == b->unk_04) {
        r = a->unk_00 < b->unk_00;
    } else {
        r = a->unk_04 < b->unk_04;
    }
    return r;
}

static inline bool pr(E *p, E *e) {
    return !lt(p, e);
}

static inline E *loop(E *first, E *last, P *pred) {
    for (;;) {
        while (func_0890FC14(pred, first)) {
            ++first;
        }
        do {
            --last;
        } while (!func_0890FC14(pred, last));
        if (!(first < last)) {
            return first;
        }
        func_0890F784(first, last);
        ++first;
    }
}

E *func_0890F9F8(E *first, E *last, P *pred) {
    u8 a;
    u8 b;

    if (first == last) {
        return first;
    }
    a = !lt(pred->unk_04, first);
    --last;
    b = lt(pred->unk_04, last);
    if (a && b) {
        ++first;
        return loop(first, last, pred);
    }
    if (b) {
        if (first == last) {
            return first;
        }
        while (first != --last && lt(*(E *volatile *)&pred->unk_04, last)) {
        }
        if (first == last) {
            return first;
        }
    } else if (a) {
        ++first;
        while (first != last + 1 && pr(*(E *volatile *)&pred->unk_04, first)) {
            ++first;
        }
        if (first == last + 1) {
            return first;
        }
    }
    func_0890F144(first, last);
    ++first;
    return loop(first, last, pred);
}

}
