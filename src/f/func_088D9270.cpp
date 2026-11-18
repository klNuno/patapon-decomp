#include "common.h"

extern "C" {

struct It_088D9270 {
    void *unk_00;
};

struct L_088D9270;

void func_088D934C(void *, void *, void *);
void *func_088D937C(It_088D9270 *);
void func_088D9384(It_088D9270, It_088D9270, void (*)(void));
s32 func_088D9400(It_088D9270, It_088D9270);
void func_088D93F8(void);
void func_088D8DD8(It_088D9270 *, L_088D9270 *);
void func_088D8DE0(It_088D9270 *, L_088D9270 *);
It_088D9270 *func_088D943C(It_088D9270 *, It_088D9270 *);
s32 func_088D944C(It_088D9270 *, It_088D9270 *);

struct L_088D9270 {
    L_088D9270 *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
    s32 unk_0C;

    It_088D9270 begin() {
        It_088D9270 t;
        t.unk_00 = unk_00;
        return t;
    }
    It_088D9270 end() {
        It_088D9270 t;
        t.unk_00 = this;
        return t;
    }
    void erase(It_088D9270 *r, It_088D9270 b, It_088D9270 e) {
        It_088D9270 x;
        It_088D9270 y;
        void *p;

        if (func_088D944C(&b, &e)) {
            func_088D943C(r, &e);
            return;
        }
        func_088D8DE0(&x, this);
        func_088D8DD8(&y, this);
        unk_0C -= func_088D9400(x, y);
        func_088D9384(b, e, func_088D93F8);
        p = func_088D937C(&b);
        func_088D934C(unk_08, p, func_088D937C(&e));
        func_088D943C(r, &e);
    }
};

void func_088D9270(L_088D9270 *arg0) {
    It_088D9270 r;

    arg0->erase(&r, arg0->begin(), arg0->end());
}

}
