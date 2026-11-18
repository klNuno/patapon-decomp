#include "common.h"

extern "C" {

struct A_088BD70C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

typedef struct {
    s32 unk_00;
    A_088BD70C *unk_04;
    void *unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
} E_088BD70C;

typedef struct {
    E_088BD70C *unk_00;
    s32 unk_04;
} V_088BD70C;

typedef struct {
    u8 pad_00[0x404];
    V_088BD70C unk_404;
} S_088BD70C;

void func_0880416C(void *);
void func_088BE5E8(void *, s32);

S_088BD70C *func_088BD70C(S_088BD70C *arg0, s16 arg1) {
    E_088BD70C *p;
    V_088BD70C *v;
    s32 *n;
    void **s;

    if (arg0 != NULL) {
        p = arg0->unk_404.unk_00;
        v = &arg0->unk_404;
        if ((u32)p != (u32)(p + arg0->unk_404.unk_04)) {
            n = &arg0->unk_404.unk_04;
            do {
                if (p != NULL) {
                    if (p != NULL) {
                        s = &p->unk_08;
                        if (p->unk_08 != NULL) {
                            *p->unk_0C -= 1;
                            if (p->count() == 0) {
                                p->unk_04->v1(*s, p->unk_0C, p->unk_00);
                                func_088BE5E8(*s, p->unk_00);
                            }
                        }
                    }
                }
                p++;
            } while (p != v->unk_00 + *n);
        }
        arg0->unk_404.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
