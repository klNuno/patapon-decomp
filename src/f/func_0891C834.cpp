#include "common.h"

extern "C" {

struct It_0891C834 {
    void *unk_00;
};

struct L_0891C834;

void func_0891C910(void *, void *, void *);
void *func_0891C940(It_0891C834 *);
void func_0891C948(It_0891C834, It_0891C834, void (*)(void));
s32 func_0891C9C4(It_0891C834, It_0891C834);
void func_0891C9BC(void);
void func_0891C798(It_0891C834 *, L_0891C834 *);
void func_0891C7A0(It_0891C834 *, L_0891C834 *);
It_0891C834 *func_0891CA00(It_0891C834 *, It_0891C834 *);
s32 func_0891CA10(It_0891C834 *, It_0891C834 *);

struct L_0891C834 {
    L_0891C834 *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
    s32 unk_0C;

    It_0891C834 begin() {
        It_0891C834 t;
        t.unk_00 = unk_00;
        return t;
    }
    It_0891C834 end() {
        It_0891C834 t;
        t.unk_00 = this;
        return t;
    }
    void erase(It_0891C834 *r, It_0891C834 b, It_0891C834 e) {
        It_0891C834 x;
        It_0891C834 y;
        void *p;

        if (func_0891CA10(&b, &e)) {
            func_0891CA00(r, &e);
            return;
        }
        func_0891C7A0(&x, this);
        func_0891C798(&y, this);
        unk_0C -= func_0891C9C4(x, y);
        func_0891C948(b, e, func_0891C9BC);
        p = func_0891C940(&b);
        func_0891C910(unk_08, p, func_0891C940(&e));
        func_0891CA00(r, &e);
    }
};

void func_0891C834(L_0891C834 *arg0) {
    It_0891C834 r;

    arg0->erase(&r, arg0->begin(), arg0->end());
}

}
