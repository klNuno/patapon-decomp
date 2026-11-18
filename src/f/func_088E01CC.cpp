#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
} N;

struct I {
    N *unk_00;
};

void func_088E0398(I *, void *);
void func_088E03A0(I *, void *);
void func_088E02A8(void *, s32, s32);
s32 func_088E02D8(I *);
void func_088E02E0(I, I, void (*)(void));
s32 func_088E035C(I, I);
void func_088E0354(void);
I *func_088E03AC(I *, I *);
s32 func_088E03BC(I *, I *);

struct L {
    N *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;

    I begin() { I r; r.unk_00 = unk_00; return r; }
    I end() { I r; r.unk_00 = (N *)this; return r; }
};

inline void erase(I *r, L *l, I first, I last) {
    I x;
    I y;
    s32 a;

    if (func_088E03BC(&first, &last)) {
        func_088E03AC(r, &last);
        return;
    }
    func_088E03A0(&x, l);
    func_088E0398(&y, l);
    l->unk_0C -= func_088E035C(x, y);
    func_088E02E0(first, last, func_088E0354);
    a = func_088E02D8(&first);
    func_088E02A8(l->unk_08, a, func_088E02D8(&last));
    func_088E03AC(r, &last);
}

void func_088E01CC(L *arg0) {
    I r;

    erase(&r, arg0, arg0->begin(), arg0->end());
}

}
