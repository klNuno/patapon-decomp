#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
} N;

struct I {
    N *unk_00;
};

void func_0886E838(I *, void *);
void func_0886E840(I *, void *);
void func_0886EA08(void *, s32, s32);
s32 func_0886EA38(I *);
void func_0886EA40(I, I, void (*)(void));
s32 func_0886EABC(I, I);
void func_0886EAB4(void);
I *func_0886EAF8(I *, I *);
s32 func_0886EB08(I *, I *);

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

    if (func_0886EB08(&first, &last)) {
        func_0886EAF8(r, &last);
        return;
    }
    func_0886E840(&x, l);
    func_0886E838(&y, l);
    l->unk_0C -= func_0886EABC(x, y);
    func_0886EA40(first, last, func_0886EAB4);
    a = func_0886EA38(&first);
    func_0886EA08(l->unk_08, a, func_0886EA38(&last));
    func_0886EAF8(r, &last);
}

void func_0886E92C(L *arg0) {
    I r;

    erase(&r, arg0, arg0->begin(), arg0->end());
}

}
