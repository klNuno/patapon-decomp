#include "common.h"

extern "C" {

struct It_08860DF0 {
    void *unk_00;
};

struct L_08860DF0;

void func_08860ECC(void *, void *, void *);
void *func_08860EFC(It_08860DF0 *);
void func_08860F04(It_08860DF0, It_08860DF0, void (*)(void));
s32 func_08860F80(It_08860DF0, It_08860DF0);
void func_08860F78(void);
void func_08860FBC(It_08860DF0 *, L_08860DF0 *);
void func_08860FC4(It_08860DF0 *, L_08860DF0 *);
It_08860DF0 *func_08860FD0(It_08860DF0 *, It_08860DF0 *);
s32 func_08860FE0(It_08860DF0 *, It_08860DF0 *);

struct L_08860DF0 {
    L_08860DF0 *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
    s32 unk_0C;

    It_08860DF0 begin() {
        It_08860DF0 t;
        t.unk_00 = unk_00;
        return t;
    }
    It_08860DF0 end() {
        It_08860DF0 t;
        t.unk_00 = this;
        return t;
    }
    void erase(It_08860DF0 *r, It_08860DF0 b, It_08860DF0 e) {
        It_08860DF0 x;
        It_08860DF0 y;
        void *p;

        if (func_08860FE0(&b, &e)) {
            func_08860FD0(r, &e);
            return;
        }
        func_08860FC4(&x, this);
        func_08860FBC(&y, this);
        unk_0C -= func_08860F80(x, y);
        func_08860F04(b, e, func_08860F78);
        p = func_08860EFC(&b);
        func_08860ECC(unk_08, p, func_08860EFC(&e));
        func_08860FD0(r, &e);
    }
};

void func_08860DF0(L_08860DF0 *arg0) {
    It_08860DF0 r;

    arg0->erase(&r, arg0->begin(), arg0->end());
}

}
