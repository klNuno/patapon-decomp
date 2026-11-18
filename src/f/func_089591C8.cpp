#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
} N;

struct I {
    N *unk_00;
};

void func_08959394(I *, void *);
void func_0895939C(I *, void *);
void func_089592A4(void *, s32, s32);
s32 func_089592D4(I *);
void func_089592DC(I, I, void (*)(void));
s32 func_08959358(I, I);
void func_08959350(void);
I *func_089593A8(I *, I *);
s32 func_089593B8(I *, I *);

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

    if (func_089593B8(&first, &last)) {
        func_089593A8(r, &last);
        return;
    }
    func_0895939C(&x, l);
    func_08959394(&y, l);
    l->unk_0C -= func_08959358(x, y);
    func_089592DC(first, last, func_08959350);
    a = func_089592D4(&first);
    func_089592A4(l->unk_08, a, func_089592D4(&last));
    func_089593A8(r, &last);
}

void func_089591C8(L *arg0) {
    I r;

    erase(&r, arg0, arg0->begin(), arg0->end());
}

}
